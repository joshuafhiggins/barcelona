//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPRemotePlaybackQueue, NSArray, NSNumber, NSString;

@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent
{
    NSArray *_supportedInsertionPositions;
    long long _insertionPosition;
    MPRemotePlaybackQueue *_playbackQueue;
    NSNumber *_privateListeningOverride;
    NSString *_insertAfterContentItemID;
    long long _destinationOffset;
}


@property(readonly, nonatomic) long long destinationOffset; // @synthesize destinationOffset=_destinationOffset;
@property(readonly, nonatomic) NSString *insertAfterContentItemID; // @synthesize insertAfterContentItemID=_insertAfterContentItemID;
@property(readonly, nonatomic) NSNumber *privateListeningOverride; // @synthesize privateListeningOverride=_privateListeningOverride;
@property(readonly, nonatomic) MPRemotePlaybackQueue *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property(readonly, nonatomic) long long insertionPosition; // @synthesize insertionPosition=_insertionPosition;
@property(copy, nonatomic) NSArray *supportedInsertionPositions; // @synthesize supportedInsertionPositions=_supportedInsertionPositions;
- (id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 options:(id)arg3;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

