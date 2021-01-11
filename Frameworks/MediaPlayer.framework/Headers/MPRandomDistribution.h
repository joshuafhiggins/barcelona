//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPRandom-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@protocol MPRandom;

@interface MPRandomDistribution : NSObject
{
    id _source;
    long long _lowestValue;
    long long _highestValue;
    unsigned long long _numberOfPossibleOutcomes;
}

+ (_Bool)supportsSecureCoding;

@property(readonly, nonatomic) unsigned long long numberOfPossibleOutcomes; // @synthesize numberOfPossibleOutcomes=_numberOfPossibleOutcomes;
@property(readonly, nonatomic) long long highestValue; // @synthesize highestValue=_highestValue;
@property(readonly, nonatomic) long long lowestValue; // @synthesize lowestValue=_lowestValue;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (id)init;

@end

