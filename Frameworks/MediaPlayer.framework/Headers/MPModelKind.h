//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCoding-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSString;

@interface MPModelKind : NSObject
{
    Class _modelClass;
}

+ (_Bool)supportsSecureCoding;
+ (id)kindWithModelClass:(Class)arg1 cacheKey:(id)arg2 block:(id)arg3;
+ (id)kindWithModelClass:(Class)arg1;
+ (id)identityKind;

@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *humanDescription;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithModelClass:(Class)arg1;
@property(readonly, nonatomic) MPModelKind *identityKind;
- (shared_ptr_cf7b8a22)predicateWithBaseProperty:(struct ModelPropertyBase *)arg1;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;

@end

