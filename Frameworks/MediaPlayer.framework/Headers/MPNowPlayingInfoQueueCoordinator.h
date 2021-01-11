//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPAVQueueCoordinating-Protocol.h>

@class MPAVItem, NSArray, NSString;
@protocol MPAVQueueCoordinatingDataSource;

@interface MPNowPlayingInfoQueueCoordinator : NSObject
{
    _Bool _shouldExpectEmptyQueue;
    _Bool _shouldDeferItemLoading;
    MPAVItem *_currentItem;
    NSArray *_items;
    id _dataSource;
}


@property(readonly, nonatomic) __weak id dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool shouldDeferItemLoading; // @synthesize shouldDeferItemLoading=_shouldDeferItemLoading;
@property(nonatomic) _Bool shouldExpectEmptyQueue; // @synthesize shouldExpectEmptyQueue=_shouldExpectEmptyQueue;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) MPAVItem *currentItem; // @synthesize currentItem=_currentItem;
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1;
- (void)reset;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

