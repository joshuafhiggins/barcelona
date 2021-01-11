//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPModelKind, MPPropertySet, NSArray, NSString;

@interface MPModelRequest : NSObject
{
    NSString *_label;
    MPModelKind *_sectionKind;
    MPPropertySet *_sectionProperties;
    NSArray *_sectionSortDescriptors;
    MPModelKind *_itemKind;
    MPPropertySet *_itemProperties;
    NSArray *_itemSortDescriptors;
}

+ (id)preferredQueue;
+ (_Bool)requiresNetwork;
+ (id)sharedNetworkQueue;
+ (id)sharedQueue;
+ (_Bool)supportsSecureCoding;

@property(copy, nonatomic) NSArray *itemSortDescriptors; // @synthesize itemSortDescriptors=_itemSortDescriptors;
@property(copy, nonatomic) MPPropertySet *itemProperties; // @synthesize itemProperties=_itemProperties;
@property(retain, nonatomic) MPModelKind *itemKind; // @synthesize itemKind=_itemKind;
@property(copy, nonatomic) NSArray *sectionSortDescriptors; // @synthesize sectionSortDescriptors=_sectionSortDescriptors;
@property(copy, nonatomic) MPPropertySet *sectionProperties; // @synthesize sectionProperties=_sectionProperties;
@property(retain, nonatomic) MPModelKind *sectionKind; // @synthesize sectionKind=_sectionKind;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)_kindForClass:(Class)arg1;
@property(retain, nonatomic) Class itemClass;
@property(retain, nonatomic) Class sectionClass;
- (id)newOperationWithResponseHandler:(id)arg1;
- (void)performWithResponseHandler:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)debugDescription;

@end

