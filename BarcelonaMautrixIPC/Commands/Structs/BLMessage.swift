//
//  IncomingMessageCommand.swift
//  BarcelonaMautrixIPC
//
//  Created by Eric Rabil on 5/24/21.
//  Copyright © 2021 Eric Rabil. All rights reserved.
//

import Foundation
import Barcelona
import IMCore

private extension Message {
    var blSenderGUID: String {
        "\(service.rawValue);\(isGroup ? "+" : "-");\(sender!)"
    }
    
    var isGroup: Bool {
        IMChat.resolve(withIdentifier: chatID)!.isGroup
    }
    
    var textContent: String {
        let items: [TextChatItem] = items.compactMap {
            $0.item as? TextChatItem
        }
        
        return items.reduce(into: "") { acc, item in
            acc += item.text
        }
    }
}

public struct BLMessage: Codable, ChatResolvable {
    public var guid: String
    public var timestamp: Double
    public var subject: String?
    public var text: String
    public var chat_guid: String
    public var sender_guid: String
    public var is_from_me: Bool
    public var thread_originator_guid: String?
    public var thread_originator_part: Int
    public var attachments: [BLAttachment]?
    public var associated_message: BLAssociatedMessage?
    public var group_action_type: Int?
    public var new_group_title: String?
    
    public init(message: Message) {
        guid = message.id
        timestamp = message.time
        subject = message.subject
        text = message.textContent
        chat_guid = IMChat.resolve(withIdentifier: message.chatID)!.guid!
        sender_guid = message.blSenderGUID
        is_from_me = message.fromMe
        thread_originator_guid = message.threadIdentifier
        thread_originator_part = 0
        attachments = message.fileTransferIDs.compactMap {
            BLAttachment(guid: $0)
        }
        
        for item in message.items {
            switch item.item {
            case let changeItem as GroupTitleChangeItem:
                self.new_group_title = changeItem.title
            case let action as GroupActionItem:
                self.group_action_type = Int(action.actionType)
            case let acknowledgment as AcknowledgmentChatItem:
                guard let parsedID = CBMessageItemIdentifierData(rawValue: acknowledgment.associatedID), let part = parsedID.part else {
                    continue
                }
                
                self.associated_message = BLTapback(chat_guid: chat_guid, target_guid: acknowledgment.associatedID, target_part: part, type: Int(acknowledgment.acknowledgmentType))
            default:
                continue
            }
        }
    }
    
    public static func < (left: BLMessage, right: BLMessage) -> Bool {
        left.timestamp < right.timestamp
    }
    
    public static func > (left: BLMessage, right: BLMessage) -> Bool {
        left.timestamp < right.timestamp
    }
    
    public static func <= (left: BLMessage, right: BLMessage) -> Bool {
        left.timestamp <= right.timestamp
    }
    
    public static func >= (left: BLMessage, right: BLMessage) -> Bool {
        left.timestamp >= right.timestamp
    }
}