//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequest.h>

@class MPModelStoreBrowseResponse, NSURL;

@interface MPModelStoreBrowseRequest : MPStoreModelRequest
{
    NSURL *_loadAdditionalContentURL;
    MPModelStoreBrowseResponse *_previousRetrievedNestedResponse;
    long long _domain;
    long long _additionalContent;
    unsigned long long _options;
    long long _filteringPolicy;
    long long _subscriptionStatus;
    MPModelStoreBrowseResponse *_previousResponse;
    long long _requestEndpoint;
}

+ (id)allSupportedSectionProperties;
+ (id)allSupportedItemProperties;
+ (_Bool)supportsSecureCoding;

@property(nonatomic) long long requestEndpoint; // @synthesize requestEndpoint=_requestEndpoint;
@property(retain, nonatomic) MPModelStoreBrowseResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
@property(nonatomic) long long subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;
@property(nonatomic) long long filteringPolicy; // @synthesize filteringPolicy=_filteringPolicy;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) long long additionalContent; // @synthesize additionalContent=_additionalContent;
@property(nonatomic) long long domain; // @synthesize domain=_domain;
@property(retain, nonatomic) MPModelStoreBrowseResponse *previousRetrievedNestedResponse; // @synthesize previousRetrievedNestedResponse=_previousRetrievedNestedResponse;
@property(copy, nonatomic) NSURL *loadAdditionalContentURL; // @synthesize loadAdditionalContentURL=_loadAdditionalContentURL;
@property(nonatomic) _Bool flattenRadioList;
- (void)configureWithParentSection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(id)arg1;
- (id)init;

@end

