//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPLazySectionedCollectionDataSource-Protocol.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibraryRequest, NSString;

@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject
{
    MPMediaLibraryEntityTranslationContext *_itemTranslationContext;
    MPMediaLibraryEntityTranslationContext *_sectionTranslationContext;
    id bbba3654 _allowedSectionPersistentIDs;
    struct map<long long, unsigned long, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, unsigned long>>> _allowedSectionPersistentIDToSectionQueryResultsIndexMap;
    MPModelLibraryRequest *_request;
    shared_ptr_87e3a99b _itemEntityQueryResults;
    shared_ptr_274c5e8b _sectionEntityQueryResult;
}



@property(readonly, nonatomic) MPModelLibraryRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) shared_ptr_274c5e8b sectionEntityQueryResult; // @synthesize sectionEntityQueryResult=_sectionEntityQueryResult;
@property(readonly, nonatomic) shared_ptr_87e3a99b itemEntityQueryResults; // @synthesize itemEntityQueryResults=_itemEntityQueryResults;
- (_Bool)_allowedEntityIdentifiersContainsAllPersistentIDs;
- (unsigned long long)_adjustedIndexForSectionIndex:(long long)arg1;
- (void)_populateIndexMap;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (_Bool)hasSameContentAsDataSource:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)initWithRequest:(id)arg1 sectionQueryResults:(shared_ptr_274c5e8b)arg2 itemQueryResults:(map_be45dc27 *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end
