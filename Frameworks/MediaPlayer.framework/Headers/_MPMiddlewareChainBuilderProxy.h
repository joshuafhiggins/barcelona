//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class Protocol;

@interface _MPMiddlewareChainBuilderProxy : NSProxy
{
    Protocol *_protocol;
}

+ (id)allocWithProtocol:(id)arg1;

- (struct objc_method_description)_methodDescriptionFromProtocolHierarchy:(id)arg1 selector:(SEL)arg2;
- (struct objc_method_description)_methodDescriptionFromProtocol:(id)arg1 selector:(SEL)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end

