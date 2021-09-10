//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "IMRemoteObjectCoding.h"
#import <Foundation/Foundation.h>
#import <Foundation/Foundation.h>

@class NSData, NSDate, NSDictionary, NSString, IMMessage;

@interface IMItem : NSObject <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    NSString *_handle;
    NSString *_service;
    NSString *_account;
    NSString *_unformattedID;
    NSString *_accountID;
    NSString *_roomName;
    NSDictionary *_senderInfo;
    NSString *_guid;
    NSDate *_time;
    NSString *_countryCode;
    long long _messageID;
    id _context;
    long long _type;
    NSString *_balloonBundleID;
    unsigned long long _sortID;
    NSString *_destinationCallerID;
    NSDate *_clientSendTime;
    NSString *_replyToGUID;
    NSString *_personCentric;
    long long _cloudKitSyncState;
    NSString *_cloudKitRecordID;
    NSData *_cloudKitServerChangeTokenBlob;
    NSString *_cloudKitRecordChangeTag;
    NSString *_parentChatID;
    long long _srCloudKitSyncState;
    NSString *_srCloudKitRecordID;
    NSString *_srCloudKitRecordChangeTag;
}

+ (BOOL)supportsSecureCoding;
+ (id)stringGUID;
+ (Class)classForMessageItemDictionary:(id)arg1;
+ (Class)classForIMItemType:(long long)arg1;
@property(copy, nonatomic) NSString *srCloudKitRecordChangeTag; // @synthesize srCloudKitRecordChangeTag=_srCloudKitRecordChangeTag;
@property(copy, nonatomic) NSString *srCloudKitRecordID; // @synthesize srCloudKitRecordID=_srCloudKitRecordID;
@property(nonatomic) long long srCloudKitSyncState; // @synthesize srCloudKitSyncState=_srCloudKitSyncState;
@property(copy, nonatomic) NSString *parentChatID; // @synthesize parentChatID=_parentChatID;
@property(copy, nonatomic) NSString *cloudKitRecordChangeTag; // @synthesize cloudKitRecordChangeTag=_cloudKitRecordChangeTag;
@property(copy, nonatomic) NSData *cloudKitServerChangeTokenBlob; // @synthesize cloudKitServerChangeTokenBlob=_cloudKitServerChangeTokenBlob;
@property(copy, nonatomic) NSString *cloudKitRecordID; // @synthesize cloudKitRecordID=_cloudKitRecordID;
@property(nonatomic) long long cloudKitSyncState; // @synthesize cloudKitSyncState=_cloudKitSyncState;
@property(retain, nonatomic) NSString *personCentric; // @synthesize personCentric=_personCentric;
@property(copy, nonatomic) NSString *replyToGUID; // @synthesize replyToGUID=_replyToGUID;
@property(retain, nonatomic) NSDate *clientSendTime; // @synthesize clientSendTime=_clientSendTime;
@property(retain, nonatomic) NSString *destinationCallerID; // @synthesize destinationCallerID=_destinationCallerID;
@property(nonatomic) unsigned long long sortID; // @synthesize sortID=_sortID;
@property(retain, nonatomic) NSString *balloonBundleID; // @synthesize balloonBundleID=_balloonBundleID;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic, setter=_setMessageID:) long long messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSDictionary *senderInfo; // @synthesize senderInfo=_senderInfo;
@property(retain, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) NSString *unformattedID; // @synthesize unformattedID=_unformattedID;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) BOOL isLastMessageCandidate;
@property(readonly, nonatomic) BOOL isFirstMessageCandidate;
- (unsigned long long)hash;
- (BOOL)unsentIsFromMeItem;
- (BOOL)isOlderThanItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(retain, nonatomic) NSString *personCentricID;
@property(retain, nonatomic, nullable) NSString *sender;
@property(readonly, nonatomic) BOOL isFromMe;
- (id)dictionaryRepresentation;
- (id)copyDictionaryRepresentation;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11 type:(long long)arg12;
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (struct _NSRange)associatedMessageRange;
- (BOOL)isSticker;
- (BOOL)isMessageEdit;
- (BOOL)isBreadcrumb;
- (BOOL)isMessageAcknowledgment;
- (long long)associatedMessageType;
- (NSString*)associatedMessageGUID;
- (BOOL)isAssociatedMessageItem;
- (id)pluginSessionGUID;
- (id)consumedSessionPayloads;

@end

