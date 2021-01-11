//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelKind.h>

@class MPModelTVEpisodeKind;

@interface MPModelTVSeasonKind : MPModelKind
{
    MPModelTVEpisodeKind *_episodeKind;
}

+ (_Bool)supportsSecureCoding;
+ (id)kindWithEpisodeKind:(id)arg1;
+ (id)identityKind;

@property(readonly, nonatomic) MPModelTVEpisodeKind *episodeKind; // @synthesize episodeKind=_episodeKind;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)humanDescription;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;

@end

