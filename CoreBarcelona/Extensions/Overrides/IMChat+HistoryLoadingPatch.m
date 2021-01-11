//
//  IMChat+HistoryLoadingPatch.m
//  CoreBarcelona
//
//  Created by Eric Rabil on 8/19/20.
//  Copyright © 2020 Eric Rabil. All rights reserved.
//

#import <IMCore/IMCore.h>
#import <objc/runtime.h>
#import "swizzleInstance.h"

@implementation IMChat (HistoryLoadingPatch)
+(void)load {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class class = [self class];
        
        SEL original = @selector(_updateChatItemsWithReason:block:shouldPost:);
        SEL swizzled = @selector(_ghetto_updateChatItemsWithReason:block:shouldPost:);
        
        Method originalMethod = class_getInstanceMethod(class, original);
        Method swizzledMethod = class_getInstanceMethod(class, swizzled);
        
        BOOL didAddMethod = class_addMethod(class, original, method_getImplementation(swizzledMethod), method_getTypeEncoding(swizzledMethod));
        
        if (didAddMethod) {
            class_replaceMethod(class, swizzled, method_getImplementation(originalMethod), method_getTypeEncoding(originalMethod));
        } else {
            method_exchangeImplementations(originalMethod, swizzledMethod);
        }
        
        swizzleInstance(IMChat.class, @selector(_handleIncomingItem:), @selector(xxx_handleIncomingItem:));
        
        if (@available(iOS 14, macOS 10.16, watchOS 7, *)) {
            swizzleInstance(IMChat.class, @selector(_handleIncomingItem:updateReplyCounts:), @selector(xxx_handleIncomingItem:updateReplyCounts:));
        }
    });
}
-(void)_ghetto_updateChatItemsWithReason:(NSString*)arg2 block:(void *)arg3 shouldPost:(char)arg4 {
    /// Damn tired of this shit
    if (arg4 == 0x1) {
        arg4 = ![arg2 isEqualToString:@"history query"];
    }
    
    [self _ghetto_updateChatItemsWithReason:arg2 block:arg3 shouldPost:arg4];
}

- (void)xxx_emitIncomingItem:(id)arg1 {
    [NSNotificationCenter.defaultCenter postNotificationName:@"ERIncomingItem" object:self userInfo:@{
        @"item": arg1
    }];
}

- (BOOL)xxx_handleIncomingItem:(id)arg1 {
    if (@available(iOS 14, macOS 10.16, watchOS 7, *)) {
        return [self _handleIncomingItem:arg1 updateReplyCounts:YES];
    } else {
        [self xxx_emitIncomingItem:arg1];
        return [self xxx_handleIncomingItem:arg1];
    }
}

- (BOOL)xxx_handleIncomingItem:(id)arg1 updateReplyCounts:(BOOL)arg2 {
    [self xxx_emitIncomingItem:arg1];
    return [self xxx_handleIncomingItem:arg1 updateReplyCounts:arg2];
}
@end
