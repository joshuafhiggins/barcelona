//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMediaPlayback-Protocol.h>

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject
{
    id _implementation;
}

+ (void)allInstancesResignActive;

- (_Bool)_isReadyForDisplay;
@property(readonly, nonatomic) _Bool readyForDisplay;
- (void)_resignActive;
@property(nonatomic) float currentPlaybackRate;
@property(nonatomic) double currentPlaybackTime;
@property(nonatomic) double endPlaybackTime;
@property(nonatomic) double initialPlaybackTime;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) double duration;
@property(nonatomic) long long movieSourceType;
@property(readonly, nonatomic) unsigned long long movieMediaTypes;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)stop;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) _Bool isPreparedToPlay;
- (void)prepareToPlay;
@property(readonly, nonatomic, getter=isAirPlayVideoActive) _Bool airPlayVideoActive;
@property(nonatomic) _Bool allowsAirPlay;
@property(nonatomic) long long scalingMode;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(nonatomic) _Bool shouldAutoplay;
@property(nonatomic) long long repeatMode;
@property(nonatomic) long long controlStyle;
@property(readonly, nonatomic) unsigned long long loadState;
@property(readonly, nonatomic) long long playbackState;
@property(readonly, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) UIView *view;
@property(copy, nonatomic) NSURL *contentURL;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithContentURL:(id)arg1;

@end

