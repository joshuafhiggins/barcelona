//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPPMediaPredicate;

@interface MPPConditionalPredicate : NSObject
{
    MPPMediaPredicate *_conditionalPredicate;
    MPPMediaPredicate *_elsePredicate;
    MPPMediaPredicate *_thenPredicate;
}


@property(retain, nonatomic) MPPMediaPredicate *elsePredicate; // @synthesize elsePredicate=_elsePredicate;
@property(retain, nonatomic) MPPMediaPredicate *thenPredicate; // @synthesize thenPredicate=_thenPredicate;
@property(retain, nonatomic) MPPMediaPredicate *conditionalPredicate; // @synthesize conditionalPredicate=_conditionalPredicate;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasElsePredicate;
@property(readonly, nonatomic) _Bool hasThenPredicate;
@property(readonly, nonatomic) _Bool hasConditionalPredicate;
- (void)dealloc;

@end

