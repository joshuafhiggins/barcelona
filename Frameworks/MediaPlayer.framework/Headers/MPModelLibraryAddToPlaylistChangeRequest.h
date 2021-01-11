//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPModelObject, MPModelPlaylist, MPSectionedCollection;

@interface MPModelLibraryAddToPlaylistChangeRequest : NSObject
{
    MPModelPlaylist *_playlist;
    MPModelObject *_representativeModelObject;
    MPModelObject *_referralObject;
    MPSectionedCollection *_songResults;
    id _storeImportAllowedHandler;
}


@property(copy, nonatomic) id storeImportAllowedHandler; // @synthesize storeImportAllowedHandler=_storeImportAllowedHandler;
@property(retain, nonatomic) MPSectionedCollection *songResults; // @synthesize songResults=_songResults;
@property(retain, nonatomic) MPModelObject *referralObject; // @synthesize referralObject=_referralObject;
@property(retain, nonatomic) MPModelObject *representativeModelObject; // @synthesize representativeModelObject=_representativeModelObject;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @synthesize playlist=_playlist;
- (id)newOperationWithResponseHandler:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

