//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class TXRImageInfo, TXRTextureInfo;

@protocol TXRDataSourceProvider
- (TXRTextureInfo *)provideTextureInfo;
- (TXRImageInfo *)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
@end

