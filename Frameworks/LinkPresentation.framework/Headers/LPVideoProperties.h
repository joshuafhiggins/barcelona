//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class NSColor, NSString;

@interface LPVideoProperties : NSObject
{
    BOOL _hasAudio;
    NSString *_accessibilityText;
    NSColor *__overlappingControlsColor;
}


@property(retain, nonatomic, setter=_setOverlappingControlsColor:) NSColor *_overlappingControlsColor; // @synthesize _overlappingControlsColor=__overlappingControlsColor;
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) BOOL hasAudio; // @synthesize hasAudio=_hasAudio;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
