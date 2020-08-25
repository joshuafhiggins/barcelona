//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>
#import <CoreGraphics/CGImage.h>


@interface CUINamedImage : CUINamedLookup
{
    double _scale;
    struct _cuiniproperties {
        unsigned int isVectorBased:1;
        unsigned int hasSliceInformation:1;
        unsigned int hasAlignmentInformation:1;
        unsigned int resizingMode:2;
        unsigned int templateRenderingMode:3;
        unsigned int exifOrientation:4;
        unsigned int isAlphaCropped:1;
        unsigned int isFlippable:1;
        unsigned int isTintable:1;
        unsigned int preservedVectorRepresentation:1;
        unsigned int _reserved:16;
    } _imageProperties;
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (struct CGRect)alphaCroppedRect;
- (struct CGSize)originalUncroppedSize;
- (struct CGImage *)createImageFromPDFRenditionWithScale:(double)arg1;
- (CGImageRef) image;
- (id)baseKey;
- (id)description;
@property(readonly, nonatomic) BOOL isAlphaCropped;
@property(readonly, nonatomic) int exifOrientation;
@property(readonly, nonatomic) BOOL preservedVectorRepresentation;
@property(readonly, nonatomic) BOOL isFlippable;
@property(readonly, nonatomic) BOOL isStructured;
@property(readonly, nonatomic) long long templateRenderingMode;
@property(readonly, nonatomic) BOOL isTemplate;
@property(readonly, nonatomic) BOOL isVectorBased;
@property(readonly, nonatomic) BOOL hasAlignmentInformation;
@property(readonly, nonatomic) BOOL hasSliceInformation;
- (long long)resizingModeWithSubtype:(long long)arg1;
@property(readonly, nonatomic) long long resizingMode;
@property(readonly, nonatomic) int blendMode;
@property(readonly, nonatomic) double opacity;


- (double)positionOfSliceBoundary:(unsigned int)arg1;
@property(readonly, nonatomic) long long imageType;
@property(readonly, nonatomic) CGSize size;
@property(readonly, nonatomic) CGImage *croppedImage;
- (BOOL)_cacheRenditionProperties;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end

