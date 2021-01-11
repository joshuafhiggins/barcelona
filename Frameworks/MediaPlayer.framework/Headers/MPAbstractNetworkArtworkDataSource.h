//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPArtworkDataSource-Protocol.h>
#import <MediaPlayer/NSURLSessionDataDelegate-Protocol.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface MPAbstractNetworkArtworkDataSource : NSObject
{
    _Bool _usesFallbackCache;
    NSObject *_accessQueue;
    NSObject *_callbackQueue;
    NSCache *_fallbackArtworkRepresentationCache;
    NSMapTable *_catalogTaskMap;
    NSMutableDictionary *_pendingRequestURLToCompletionHandlers;
    NSURLSession *_URLSession;
}

+ (void)_applyURLCachePolicy:(unsigned long long)arg1 cacheDiskPath:(id)arg2 toConfiguration:(id)arg3;

@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) NSMutableDictionary *pendingRequestURLToCompletionHandlers; // @synthesize pendingRequestURLToCompletionHandlers=_pendingRequestURLToCompletionHandlers;
@property(retain, nonatomic) NSMapTable *catalogTaskMap; // @synthesize catalogTaskMap=_catalogTaskMap;
@property(retain, nonatomic) NSCache *fallbackArtworkRepresentationCache; // @synthesize fallbackArtworkRepresentationCache=_fallbackArtworkRepresentationCache;
@property(retain, nonatomic) NSObject *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(nonatomic) _Bool usesFallbackCache; // @synthesize usesFallbackCache=_usesFallbackCache;
- (void)_performSyncBlock:(id)arg1;
- (void)_performAsyncBarrierBlock:(id)arg1;
- (id)_requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)_existingRepresentativeObjectForArtworkCatalog:(id)arg1 handler:(id)arg2;
- (_Bool)_isRepresentationSize:(struct CGSize)arg1 validForCatalog:(id)arg2;
- (id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg1 immediateImageDecompressionAllowed:(_Bool)arg2;
- (id)_artworkRepresentationWithImageFromData:(id)arg1 forURLResponse:(id)arg2 size:(struct CGSize)arg3 immediateImageDecompressionAllowed:(_Bool)arg4;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(id)arg4 completionHandler:(id)arg5;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id)arg2;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (_Bool)wantsBackgroundImageDecompression;
- (_Bool)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)supportedSizesForCatalog:(id)arg1;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)updateURLSessionWithCachePolicy:(unsigned long long)arg1 cachePath:(id)arg2;
@property(readonly, nonatomic) NSURLSessionConfiguration *URLSessionConfiguration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

