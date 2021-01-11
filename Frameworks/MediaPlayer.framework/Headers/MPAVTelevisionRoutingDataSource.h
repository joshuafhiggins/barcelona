//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoutingDataSource.h>

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVTelevisionRoutingDataSource : MPAVRoutingDataSource
{
    void *_discoveryController;
    NSMutableArray *_discoveredTelevisions;
    NSObject *_serialQueue;
}


- (void)_onQueue_controllerDidRemoveTelevision:(void *)arg1;
- (void)_onQueue_controllerDidDiscoverTelevision:(void *)arg1;
- (id)_discoveredTelevisions;
- (void)getPickedRouteHasVolumeControlWithCompletion:(id)arg1;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(id)arg2;
- (_Bool)devicePresenceDetected;
- (void)setDiscoveryMode:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

