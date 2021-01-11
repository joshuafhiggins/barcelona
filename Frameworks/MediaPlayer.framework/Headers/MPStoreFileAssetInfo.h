//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICStoreFileAssetInfo, NSArray, NSData, NSString, NSURL;

@interface MPStoreFileAssetInfo : NSObject
{
    ICStoreFileAssetInfo *_internalInfo;
}


@property(readonly, nonatomic) long long protectionType;
@property(readonly, copy, nonatomic) NSData *md5;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, copy, nonatomic) NSString *fileExtension;
@property(readonly, nonatomic) long long flavorType;
@property(readonly, copy, nonatomic) NSArray *fairPlayInfoList;
@property(readonly, copy, nonatomic) NSString *downloadKey;
@property(readonly, copy, nonatomic) NSURL *assetURL;
- (id)initWithiTunesCloudStoreFileAssetInfo:(id)arg1;

@end

