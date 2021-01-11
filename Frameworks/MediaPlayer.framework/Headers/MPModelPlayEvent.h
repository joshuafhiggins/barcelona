//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelAlbum, MPModelArtist, MPModelPlaylist, MPModelRadioStation, NSDate;

@interface MPModelPlayEvent : MPModelObject
{
}

+ (id)__radioStation_KEY;
+ (id)__playlist_KEY;
+ (id)__artist_KEY;
+ (id)__album_KEY;
+ (id)__datePlayed_KEY;
- (id)genericObjectRepresentation;
- (long long)itemType;
- (id)contentItemCollectionInfo;

// Remaining properties
@property(retain, nonatomic) MPModelAlbum *album; // @dynamic album;
@property(retain, nonatomic) MPModelArtist *artist; // @dynamic artist;
@property(copy, nonatomic) NSDate *datePlayed; // @dynamic datePlayed;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @dynamic radioStation;

@end

