//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelTVEpisodePlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryTVEpisodePlaybackItemMetadata : MPModelTVEpisodePlaybackItemMetadata
{
    MPModelGenericObject *_modelGenericObject;
    MPModelPlaylistEntry *_playlistEntry;
}

+ (id)requiredProperties;

@property(retain, nonatomic) MPModelPlaylistEntry *playlistEntry; // @synthesize playlistEntry=_playlistEntry;
- (id)episode;
- (void)setEpisode:(id)arg1;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)modelGenericObject;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

