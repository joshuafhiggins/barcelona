//
//  ChatEvents.swift
//  imcore-rest
//
//  Created by Eric Rabil on 8/9/20.
//  Copyright © 2020 Eric Rabil. All rights reserved.
//

import Foundation
import BarcelonaFoundation
import Barcelona
import IMCore
import os.log

private let log_chatEvents = OSLog(subsystem: Bundle.main.bundleIdentifier!, category: "ChatEvents")

private let IMChatUnreadCountChangedNotification = Notification.Name(rawValue: "__kIMChatUnreadCountChangedNotification")

public struct ChatUnreadCountRepresentation: Codable {
    var chatID: String
    var unread: Int
}

private enum ChatDebounceCategory {
    case chatProperties
    case unreadCount
}

/**
 Events related to IMChat
 */
public class ChatEvents: EventDispatcher {
    private let debouncer = CategorizedDebounceManager<ChatDebounceCategory>([
        .chatProperties: Double(1 / 10),
        .unreadCount: Double(1 / 5)
    ])
    
    public override func wake() {
        addObserver(forName: .IMChatParticipantsDidChange) {
            self.participantsChanged($0)
        }
        
        addObserver(forName: .IMChatDisplayNameChanged) {
            self.chatDisplayNameChanged($0)
        }
        
        addObserver(forName: .IMChatJoinStateDidChange) {
            self.chatJoinStateChanged($0)
        }
        
        addObserver(forName: .IMChatRegistryDidUnregisterChat) {
            self.chatWasRemoved($0)
        }
        
        addObserver(forName: .IMChatRegistryDidRegisterChat) {
            self.chatWasCreated($0)
        }
        
        addObserver(forName: IMChatUnreadCountChangedNotification) {
            self.unreadCountChanged($0)
        }
        
        addObserver(forName: .IMChatPropertiesChanged) {
            self.chatPropertiesChanged($0)
        }
        
        addObserver(forName: .init("__k_IMHandleCommandReceivedNotification")) { notification in
//            let handle = notification.object as! IMHandle
//            let userInfo = notification.userInfo!
//            
            print(notification)
        }
    }
    
    private func chatPropertiesChanged(_ notification: Notification) {
        guard let chat = notification.object as? IMChat else {
            os_log("⁉️ got chat properties notification but didn't receive IMChat in notification object", type: .error, log_chatEvents)
            return
        }
        
        debouncer.submit(chat.id, category: .chatProperties) {
            self.bus.dispatch(.conversationPropertiesChanged(chat.properties))
        }
    }
    
    private func unreadCountChanged(_ notification: Notification) {
        guard let chat = notification.object as? IMChat else {
            os_log("⁉️ got chat unread notification but didn't receive IMChat in notification object", type: .error, log_chatEvents)
            return
        }
        
        debouncer.submit(chat.id, category: .unreadCount) {
            self.bus.dispatch(.conversationUnreadCountChanged(chat.representation))
        }
    }
    
    // MARK: - IMChat created
    private func chatWasCreated(_ notification: Notification) {
        guard let chat = notification.object as? IMChat else {
            os_log("⁉️ got chat created notification but didn't receive IMChat in notification object", type: .error, log_chatEvents)
            return
        }
        
        ERTimeSortedParticipantsManager.sharedInstance.bootstrap(chat: chat).whenSuccess {
            self.bus.dispatch(.conversationCreated(chat.representation))
        }
    }
    
    // MARK: - IMChat deleted
    private func chatWasRemoved(_ notification: Notification) {
        guard let chatID = notification.object as? String else {
            os_log("⁉️ got chat removed notification but didn't receive NSString in notification object", type: .error, log_chatEvents)
            return
        }
        
        ERTimeSortedParticipantsManager.sharedInstance.unload(chatID: chatID)
        
        bus.dispatch(.conversationRemoved(chatID))
    }
    
    // MARK: - IMChat Participants changed
    private func participantsChanged(_ notification: Notification) {
        guard let chat = notification.object as? IMChat else {
            os_log("⁉️ got participants changed notification but didn't receive IMChat in notification object", type: .error, log_chatEvents)
            return
        }
        
        chat.scheduleForReview()
        
        bus.dispatch(.participantsChanged(ParticipantChangeRecord(chat: chat.id, handles: chat.participantHandleIDs())))
    }
    
    // MARK: - IMChat Displayname changed
    private func chatDisplayNameChanged(_ notification: Notification) {
        guard let chat = notification.object as? IMChat else {
            os_log("⁉️ got chat display name changed notification but didn't receive IMChat in notification object", type: .error, log_chatEvents)
            return
        }
        
        chat.scheduleForReview()
        
        bus.dispatch(.conversationDisplayNameChanged(chat.representation))
    }
    
    // MARK: - IMChat join state changed
    private func chatJoinStateChanged(_ notification: Notification) {
        guard let chat = notification.object as? IMChat else {
            os_log("⁉️ got chat join state changed notification but didn't receive IMChat in notification object", type: .error, log_chatEvents)
            return
        }
        
        chat.scheduleForReview()
        
        bus.dispatch(.conversationJoinStateChanged(chat.representation))
    }
    
    private func chatDidRefresh(_ notification: Notification) {
        print(notification)
    }
}