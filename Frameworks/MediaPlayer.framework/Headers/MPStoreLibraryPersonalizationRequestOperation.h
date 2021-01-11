//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPStoreLibraryPersonalizationRequest, NSOperationQueue;

@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;
    MPStoreLibraryPersonalizationRequest *_request;
    id _responseHandler;
}

+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;

@property(copy, nonatomic) id responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPStoreLibraryPersonalizationRequest *request; // @synthesize request=_request;
- (void)execute;
- (void)cancel;

@end

