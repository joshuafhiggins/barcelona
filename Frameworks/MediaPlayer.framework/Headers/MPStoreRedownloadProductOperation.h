//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ICMediaRedownloadRequest, MPStoreRedownloadProductResponse, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPStoreRedownloadProductOperation : NSOperation
{
    NSObject *_accessQueue;
    MPStoreRedownloadProductResponse *_redownloadProductResponse;
    NSError *_responseError;
    _Bool _shouldUseStreamingRedownload;
    ICMediaRedownloadRequest *_redownloadRequest;
    _Bool _streamingRental;
    NSString *_buyParameters;
    unsigned long long _endpointType;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
}


@property(copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property(copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property(nonatomic, getter=isStreamingRental) _Bool streamingRental; // @synthesize streamingRental=_streamingRental;
@property(readonly, nonatomic) unsigned long long endpointType; // @synthesize endpointType=_endpointType;
@property(readonly, copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property(readonly, copy, nonatomic) NSError *responseError;
@property(readonly, nonatomic) MPStoreRedownloadProductResponse *redownloadProductResponse;
- (void)main;
- (void)cancel;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2 shouldUseStreamingRedownload:(_Bool)arg3;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2;
- (id)init;

@end
