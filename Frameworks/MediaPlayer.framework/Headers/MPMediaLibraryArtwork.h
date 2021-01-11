//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3Artwork, MPMediaLibraryArtworkRequest, NSArray, NSDictionary, NSURL;

@interface MPMediaLibraryArtwork : NSObject
{
    struct os_unfair_lock_s _stateLock;
    NSArray *_validSizes;
    MPMediaLibraryArtworkRequest *_artworkRequest;
    ML3Artwork *_artwork;
}

+ (void)fetchArtworkInfoForRequest:(id)arg1 completionHandler:(id)arg2;
+ (void)cancelFetchingArtworkForRequest:(id)arg1;
+ (void)fetchArtworkForRequest:(id)arg1 completionHandler:(id)arg2;
+ (id)availableArtworkWithRequest:(id)arg1;
+ (_Bool)needsToFetchArtworkForRequest:(id)arg1;
+ (_Bool)artworkExistsForRequest:(id)arg1;

@property(readonly, nonatomic) struct os_unfair_lock_s stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) ML3Artwork *artwork; // @synthesize artwork=_artwork;
@property(nonatomic) __weak MPMediaLibraryArtworkRequest *artworkRequest; // @synthesize artworkRequest=_artworkRequest;
@property(copy, nonatomic) NSDictionary *effectsMetadata;
@property(readonly, nonatomic) NSArray *validSizes; // @synthesize validSizes=_validSizes;
- (id)imageFileURLForEffect:(id)arg1;
- (id)imageFileURLForSize:(struct CGSize)arg1;
@property(readonly, copy, nonatomic) NSURL *originalFileURL;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

