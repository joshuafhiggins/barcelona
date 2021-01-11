//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaLibraryEntityTranslator;

@interface _MPMediaLibraryEntityRelationshipTranslator : NSObject
{
    _Bool _transient;
    Class _relationshipModelClass;
    struct ModelPropertyBase *_foreignPropertyBase;
    id _validRelationshipHandler;
    shared_ptr_217a6612 _relationshipValidationProperties;
}



@property(copy, nonatomic) id validRelationshipHandler; // @synthesize validRelationshipHandler=_validRelationshipHandler;
@property(nonatomic) shared_ptr_217a6612 relationshipValidationProperties; // @synthesize relationshipValidationProperties=_relationshipValidationProperties;
@property(nonatomic) struct ModelPropertyBase *foreignPropertyBase; // @synthesize foreignPropertyBase=_foreignPropertyBase;
@property(nonatomic) _Bool transient; // @synthesize transient=_transient;
@property(nonatomic) Class relationshipModelClass; // @synthesize relationshipModelClass=_relationshipModelClass;
@property(readonly, nonatomic) MPMediaLibraryEntityTranslator *entityTranslator;

@end

