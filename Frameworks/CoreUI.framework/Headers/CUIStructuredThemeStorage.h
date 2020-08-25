//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class CUIThemeRendition, NSDictionary, NSString;

@protocol CUIStructuredThemeStorage
- (NSDictionary *)catalogGlobals;
- (unsigned int)authoredWithSchemaVersion;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;
- (CUIThemeRendition *)renditionWithKey:(const struct _renditionkeytoken *)arg1 usingKeySignature:(NSString *)arg2;
- (CUIThemeRendition *)renditionWithKey:(const struct _renditionkeytoken *)arg1;
- (double)fontSizeForFontSizeType:(NSString *)arg1;
- (BOOL)getFontName:(id )arg1 baselineOffset:(double *)arg2 forFontType:(NSString *)arg3;
- (BOOL)hasPhysicalColorWithName:(NSString *)arg1;
- (BOOL)getPhysicalColor:(struct _colordef *)arg1 withName:(NSString *)arg2;

@optional
- (unsigned long long)colorSpaceID;
@end

