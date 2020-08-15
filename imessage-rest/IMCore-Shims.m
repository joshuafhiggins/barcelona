//
//  IMCore-Shims.m
//  imessage-rest
//
//  Created by Eric Rabil on 8/11/20.
//  Copyright © 2020 Eric Rabil. All rights reserved.
//

#import <CommunicationsFilter/CommunicationsFilter.h>

@implementation CNGeminiManager: NSObject
@end

CommunicationsFilterBlockList* ERSharedBlockList() {
    return [NSClassFromString(@"CommunicationsFilterBlockList") sharedInstance];
}
