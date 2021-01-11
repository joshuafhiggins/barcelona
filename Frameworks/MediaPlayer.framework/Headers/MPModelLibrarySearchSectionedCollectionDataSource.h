//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPLazySectionedCollectionDataSource-Protocol.h>

@class MPModelRequest, NSArray, NSString;

@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject
{
    NSArray *_resultContainers;
    MPModelRequest *_request;
}


@property(retain, nonatomic) MPModelRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSArray *resultContainers; // @synthesize resultContainers=_resultContainers;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)initWithEntitiesQueryResultContainers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

