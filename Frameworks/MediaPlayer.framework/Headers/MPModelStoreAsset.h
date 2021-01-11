//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelStoreAsset : MPModelObject
{
}

+ (id)__needsUserUpload_KEY;
+ (id)__subscriptionRequired_KEY;
+ (id)__shouldReportPlayEvents_KEY;
+ (id)__accountIdentifier_KEY;
+ (id)__redownloadable_KEY;
+ (id)__redownloadParameters_KEY;
+ (id)__endpointType_KEY;
+ (id)allSupportedProperties;

// Remaining properties
@property(nonatomic) unsigned long long accountIdentifier; // @dynamic accountIdentifier;
@property(nonatomic) long long endpointType; // @dynamic endpointType;
@property(readonly, nonatomic) _Bool needsUserUpload; // @dynamic needsUserUpload;
@property(copy, nonatomic) NSString *redownloadParameters; // @dynamic redownloadParameters;
@property(nonatomic, getter=isRedownloadable) _Bool redownloadable; // @dynamic redownloadable;
@property(nonatomic) _Bool shouldReportPlayEvents; // @dynamic shouldReportPlayEvents;
@property(nonatomic, getter=isSubscriptionRequired) _Bool subscriptionRequired; // @dynamic subscriptionRequired;

@end

