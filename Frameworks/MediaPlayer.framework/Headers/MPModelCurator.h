//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MPModelCurator : MPModelPerson
{
}

+ (id)__handle_KEY;
+ (id)__brandLogoArtworkCatalogBlock_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__curatorKind_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__editorNotes_KEY;
+ (id)__shortName_KEY;
- (id)brandLogoArtworkCatalog;
- (id)editorialArtworkCatalog;

// Remaining properties
@property(copy, nonatomic) id brandLogoArtworkCatalogBlock; // @dynamic brandLogoArtworkCatalogBlock;
@property(nonatomic) long long curatorKind; // @dynamic curatorKind;
@property(copy, nonatomic) NSString *editorNotes; // @dynamic editorNotes;
@property(copy, nonatomic) id editorialArtworkCatalogBlock; // @dynamic editorialArtworkCatalogBlock;
@property(copy, nonatomic) NSString *handle; // @dynamic handle;
@property(copy, nonatomic) NSString *shortEditorNotes; // @dynamic shortEditorNotes;
@property(copy, nonatomic) NSString *shortName; // @dynamic shortName;

@end

