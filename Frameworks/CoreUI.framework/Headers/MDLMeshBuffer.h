//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>
#import <Foundation/Foundation.h>

@class MDLMeshBufferMap, NSData;

@protocol MDLMeshBuffer <NSObject, NSCopying>
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, retain, nonatomic) id zone;
@property(readonly, retain, nonatomic) id allocator;
@property(readonly, nonatomic) unsigned long long length;
- (MDLMeshBufferMap *)map;
- (void)fillData:(NSData *)arg1 offset:(unsigned long long)arg2;
@end

