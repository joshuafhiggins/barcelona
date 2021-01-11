//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSOperationQueue, NSString, RTCReporting;
@protocol OS_dispatch_queue;

@interface MPRTCReportingSession : NSObject
{
    NSObject *_accessQueue;
    NSDictionary *_additionalUserInfo;
    NSString *_clientName;
    int _clientType;
    long long _clientVersion;
    _Bool _hasCompleteSessionSetup;
    _Bool _hasInitializedSession;
    id _hierarchyToken;
    RTCReporting *_internalSession;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_pendingReportingEvents;
    NSString *_serviceIdentifier;
    unsigned int _sessionID;
    NSDictionary *_sessionUserInfo;
}

+ (void)_recordEvent:(id)arg1 withInternalSession:(id)arg2;
+ (_Bool)_isRTCReportingSupported;
+ (id)newHierarchyTokenFromParentToken:(id)arg1;

- (void)recordEvent:(id)arg1;
- (void)finalizeSession;
- (void)completeSessionSetup;
- (void)initializeSession;
@property(nonatomic) unsigned int sessionID;
@property(copy, nonatomic) NSString *serviceIdentifier;
@property(retain, nonatomic) id hierarchyToken;
@property(nonatomic) long long clientVersion;
@property(nonatomic) int clientType;
@property(copy, nonatomic) NSString *clientName;
@property(copy, nonatomic) NSDictionary *additionalUserInfo;
@property(readonly, nonatomic) _Bool hasInitializedSession;
@property(readonly, nonatomic) _Bool hasCompleteSessionSetup;
- (id)init;

@end

