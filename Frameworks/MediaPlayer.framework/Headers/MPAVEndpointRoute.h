//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoute.h>

@class MPAVRouteConnection, MPMRAVEndpointWrapper, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoute : MPAVRoute
{
    MPAVRouteConnection *_connection;
    NSObject *_accessQueue;
    NSObject *_calloutQueue;
    NSString *_sortName;
    MPMRAVEndpointWrapper *_endpointWrapper;
}

+ (void)getActiveEndpointRouteWithCompletion:(id)arg1;
+ (_Bool)supportsSecureCoding;

- (unsigned long long)_outputDevicesComposition;
- (_Bool)_groupLeaderIsOfDeviceSubtype:(unsigned int)arg1;
- (void)_endpointOutputDevicesDidChange:(id)arg1;
- (void)_endpointDidChange:(id)arg1;
- (long long)numberOfOutputDevices;
- (_Bool)isSplitRoute;
- (_Bool)isSplitterCapable;
- (_Bool)supportsRemoteControl;
- (_Bool)supportsGrouping;
- (long long)routeSubtype;
- (long long)routeType;
- (id)groupUID;
- (id)routeUID;
- (_Bool)isLowLatencyRoute;
- (_Bool)isRoutingToWirelessDevice;
- (_Bool)isDeviceSpeakerRoute;
@property(readonly, nonatomic) _Bool canModifyGroupMembership;
- (_Bool)isProxyGroupPlayer;
- (_Bool)isDeviceRoute;
- (_Bool)isStereoPair;
- (_Bool)isHomePodRoute;
- (_Bool)isTVRoute;
- (_Bool)isAppleTVRoute;
- (id)groupLeaderAirplayIdentifier;
- (_Bool)isAirPlayingToDevice;
- (_Bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (_Bool)canFetchMediaDataFromSender;
- (_Bool)canPlayEncryptedProgressiveDownloadAssets;
- (_Bool)canAccessRemoteAssets;
@property(retain, nonatomic) MPAVRouteConnection *connection;
@property(retain, nonatomic) MPMRAVEndpointWrapper *endpointWrapper; // @synthesize endpointWrapper=_endpointWrapper;
@property(readonly, nonatomic) void *endpoint;
- (id)description;
- (void)establishGroup;
- (id)designatedGroupLeaderName;
- (id)routeNames;
- (id)routeName;
@property(readonly, nonatomic) NSString *sortName;
- (void)dealloc;
- (id)initWithEndpoint:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

