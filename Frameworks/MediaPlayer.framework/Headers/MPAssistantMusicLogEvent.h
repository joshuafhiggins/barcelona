//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPAssistantLogEvent-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MPAssistantMusicLogEvent : NSObject
{
    unsigned int _sessionID;
    NSString *_siriSessionIdentifier;
}


@property(copy, nonatomic) NSString *siriSessionIdentifier; // @synthesize siriSessionIdentifier=_siriSessionIdentifier;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSMutableDictionary *eventPayload;
@property(readonly, nonatomic) long long eventCode;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

