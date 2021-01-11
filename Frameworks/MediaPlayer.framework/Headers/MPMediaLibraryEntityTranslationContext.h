//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaLibrary, MPModelKind, NSArray, NSString;

@interface MPMediaLibraryEntityTranslationContext : NSObject
{
    _Bool _multiQuery;
    MPMediaLibrary *_mediaLibrary;
    NSArray *_allowedEntityIdentifiers;
    NSArray *_scopedContainers;
    unsigned long long _filteringOptions;
    MPModelKind *_modelKind;
    NSString *_personID;
}


@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) MPModelKind *modelKind; // @synthesize modelKind=_modelKind;
@property(nonatomic) unsigned long long filteringOptions; // @synthesize filteringOptions=_filteringOptions;
@property(nonatomic, getter=isMultiQuery) _Bool multiQuery; // @synthesize multiQuery=_multiQuery;
@property(retain, nonatomic) NSArray *scopedContainers; // @synthesize scopedContainers=_scopedContainers;
@property(retain, nonatomic) NSArray *allowedEntityIdentifiers; // @synthesize allowedEntityIdentifiers=_allowedEntityIdentifiers;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;

@end

