//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPMediaItemArtwork : NSObject
{
    struct CGSize _bounds;
    id _requestHandler;
}


- (id)pngDataFromImage:(id)arg1;
- (id)pngDataWithSize:(struct CGSize)arg1;
- (id)jpegDataWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGRect imageCropRect;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)initWithBoundsSize:(struct CGSize)arg1 requestHandler:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)init;

@end

