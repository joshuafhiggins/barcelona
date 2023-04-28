//
//  MediaUploader.swift
//  Barcelona
//
//  Created by Joonas Myhrberg on 20.4.2023.
//

import Foundation
import IMCore
import IMSharedUtilities
import Logging

public enum MediaUploadError: CustomNSError, LocalizedError {
    /// Starting the transfer with `IMFileTransferCenter` failed.
    case transferCreationFailed
    /// Observing the status of an `IMFileTransfer` using notifications failed.
    case tranferObservationFailed
    /// The underlying `IMFileTransfer` had an error.
    case transferFailed(code: Int64, description: String, isRecoverable: Bool)

    var error: String {
        switch self {
        case .transferCreationFailed:
            return "transferCreationFailed"
        case .tranferObservationFailed:
            return "tranferObservationFailed"
        case .transferFailed(code: _, let description, let isRecoverable):
            return "transferFailed: \(description), recoverable: \(isRecoverable)"
        }
    }

    public var errorUserInfo: [String: Any] {
        [NSDebugDescriptionErrorKey: error]
    }

    public var errorDescription: String? {
        switch self {
        case .transferCreationFailed:
            return "Failed to start the attachment upload"
        case .tranferObservationFailed:
            return "Failed to get the status of the attachment upload"
        case .transferFailed(code: _, let description, isRecoverable: _):
            return "Failed to upload the attachment: \(description)"
        }
    }
}

public class MediaUploader {

    private let log = Logger(label: "MediaUploader")

    public init() {}

    public func uploadFile(filename: String, path: URL) async throws -> String {
        log.debug("Creating file transfer")
        let transfer = try await createFileTransfer(for: filename, path: path)
        guard let transferGUID = transfer.guid else {
            throw MediaUploadError.transferCreationFailed
        }
        log.debug("Got file transfer with guid: \(transferGUID)")

        let updated = NotificationCenter.default.publisher(for: .IMFileTransferUpdated).print("transferUpdated")
        let finished = NotificationCenter.default.publisher(for: .IMFileTransferFinished).print("transferFinished")
        let transferEvents = updated.merge(with: finished)
            .tryMap { notification -> IMFileTransfer in
                guard let transfer = notification.object as? IMFileTransfer else {
                    throw MediaUploadError.tranferObservationFailed
                }
                return transfer
            }
            .filter { transfer in
                transfer.guid == transferGUID
            }
            .throttle(for: 0.1, scheduler: DispatchQueue.main, latest: true)

        for try await transfer in transferEvents.values {
            guard let guid = transfer.guid, guid == transferGUID else {
                continue
            }

            log.info("Got transfer event notification for: \(guid) with state: \(transfer.state)")

            switch transfer.state {
            case .finished:
                log.debug("Transfer \(guid) isFinished: \(transfer.isFinished)")
                return guid
            case .error:
                if transfer.error == 24 {
                    log.info("Got error 24 when uploading attachment, treating as success")
                    log.debug("Transfer exists at local path: \(transfer.existsAtLocalPath), isFinished: \(transfer.isFinished)")
                    return guid
                }
                log.error(
                    "Transfer \(guid) has an error: \(transfer.error) with description: \(String(describing: transfer.errorDescription))"
                )
                throw MediaUploadError.transferFailed(
                    code: transfer.error,
                    description: transfer.errorDescription ?? "unknown error",
                    isRecoverable: false
                )
            case .recoverableError:
                log.error(
                    "Transfer \(guid) has an recoverable error: \(transfer.error) with description: \(String(describing: transfer.errorDescription))"
                )
                throw MediaUploadError.transferFailed(
                    code: transfer.error,
                    description: transfer.errorDescription ?? "unknown error",
                    isRecoverable: true
                )
            default:
                log.debug("Transfer state \(transfer.state) is of no interest to us, skipping")
                continue
            }
        }

        throw MediaUploadError.tranferObservationFailed
    }

    @MainActor
    private func createFileTransfer(for filename: String, path: URL) throws -> IMFileTransfer {
        let transferCenter = IMFileTransferCenter.sharedInstance()

        log.debug("Getting a guid for a new outgoing transfer")
        let guid = transferCenter.guidForNewOutgoingTransfer(withLocalURL: path, useLegacyGuid: true)
        log.debug("Got guid: \(String(describing: guid)), getting a transfer for it")
        guard let transfer = transferCenter.transfer(forGUID: guid) else {
            throw MediaUploadError.transferCreationFailed
        }
        log.debug("Got transfer")

        log.debug("Getting a persistent path for the transfer")
        if let persistentPath = IMAttachmentPersistentPath(guid, filename, transfer.mimeType, transfer.type) {
            let persistentURL = URL(fileURLWithPath: persistentPath)
            log.debug("Got persistent URL: \(persistentURL)")

            try FileManager.default.createDirectory(
                at: persistentURL.deletingLastPathComponent(),
                withIntermediateDirectories: true,
                attributes: nil
            )
            log.debug("Copying file to persistent path")
            try FileManager.default.copyItem(at: path, to: persistentURL)
            log.debug("Retargeting transfer")
            transferCenter.cbRetargetTransfer(transfer, toPath: persistentPath)
            log.debug("Retargeted, setting localURL to: \(persistentURL)")
            transfer.localURL = persistentURL
            log.debug("Retargeted file transfer \(guid ?? "nil") from \(path) to \(persistentURL)")
        } else {
            log.debug("No persistent path for transfer: \(String(describing: guid))")
        }

        log.debug("Setting a filename for the transfer")
        transfer.transferredFilename = filename
        log.debug("Registering transfer with daemon")
        transferCenter.registerTransfer(withDaemon: guid)
        log.debug("Accepting transfer")
        transferCenter.acceptTransfer(transfer.guid!)
        log.debug("Transfer accepted, returning")

        return transfer
    }
}