//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPModelObject, NSArray;

@interface MPStoreItemLibraryImport : NSObject
{
    _Bool _addToCloudLibrary;
    NSArray *_importElements;
    MPModelObject *_referralObject;
}


@property(readonly, nonatomic) MPModelObject *referralObject; // @synthesize referralObject=_referralObject;
@property(readonly, nonatomic) _Bool addToCloudLibrary; // @synthesize addToCloudLibrary=_addToCloudLibrary;
@property(readonly, nonatomic) NSArray *importElements; // @synthesize importElements=_importElements;
- (id)initWithImportElements:(id)arg1 referralObject:(id)arg2 usingCloudLibraryDestination:(_Bool)arg3;
- (id)initWithImportElements:(id)arg1 usingCloudLibraryDestination:(_Bool)arg2;

@end

