//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class NSURL;

@interface MPModelHomeSharingAsset : MPModelObject
{
}

+ (id)__URL_KEY;
+ (id)__protectedContentSupportStorageFileURL_KEY;
+ (id)__available_KEY;

// Remaining properties
@property(copy, nonatomic) NSURL *URL; // @dynamic URL;
@property(nonatomic, getter=isAvailable) _Bool available; // @dynamic available;
@property(copy, nonatomic) NSURL *protectedContentSupportStorageFileURL; // @dynamic protectedContentSupportStorageFileURL;

@end
