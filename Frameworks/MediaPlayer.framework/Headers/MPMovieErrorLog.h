//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class AVPlayerItemErrorLog, NSArray, NSData;

@interface MPMovieErrorLog : NSObject
{
    AVPlayerItemErrorLog *_errorLog;
}


@property(readonly, nonatomic) NSArray *events;
@property(readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
@property(readonly, nonatomic) NSData *extendedLogData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAVItemErrorLog:(id)arg1;

@end
