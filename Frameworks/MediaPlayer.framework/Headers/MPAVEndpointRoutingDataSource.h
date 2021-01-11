//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoutingDataSource.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource
{
    void *_discoverySession;
    void *_callbackToken;
    NSString *_routingContextUID;
    NSObject *_serialQueue;
    NSMutableDictionary *_endpoints;
}


@property(retain, nonatomic) NSMutableDictionary *endpoints; // @synthesize endpoints=_endpoints;
@property(retain, nonatomic) NSObject *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSString *routingContextUID; // @synthesize routingContextUID=_routingContextUID;
- (void)_endpointsDidChange:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(id)arg3;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(id)arg2;
- (_Bool)devicePresenceDetected;
- (void)setDiscoveryMode:(long long)arg1;
- (long long)discoveryMode;
- (void)dealloc;
- (id)initWithThrottlingEnabled:(_Bool)arg1;
- (id)init;

@end

