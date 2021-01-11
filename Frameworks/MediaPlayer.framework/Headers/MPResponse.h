//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/_MPStateDumpPropertyListTransformable-Protocol.h>

@class NSArray, NSString;

@interface MPResponse : NSObject
{
    _Bool _valid;
    id _request;
    NSArray *_middleware;
    id _builder;
}

+ (id)builderProtocol;

@property(readonly, nonatomic) id builder; // @synthesize builder=_builder;
@property(copy, nonatomic) NSArray *middleware; // @synthesize middleware=_middleware;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, copy, nonatomic) id request; // @synthesize request=_request;
- (id)_stateDumpObject;
- (id)chain;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

