//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVPlayerItem, AVPlayerItemAccessLog, ICMusicSubscriptionLeaseStatus, MPAlternateTracks, MPMediaItem, MPModelGenericObject, MPModelPlayEvent, MPNowPlayingContentItem, MPQueueFeeder, NSArray, NSDictionary, NSError, NSNumber, NSString, NSURL;
@protocol MPAVItemObserver, OS_dispatch_queue;

@interface MPAVItem : NSObject
{
    AVAsset *_asset;
    NSObject *_assetQueue;
    AVPlayerItem *_avPlayerItem;
    _Bool _isAssetLoaded;
    MPQueueFeeder *_feeder;
    float _soundCheckVolumeNormalization;
    NSArray *_chapterTimeMarkers;
    NSArray *_artworkTimeMarkers;
    NSArray *_urlTimeMarkers;
    NSArray *_closedCaptionTimeMarkers;
    MPAlternateTracks *_alternateTracks;
    double _cachedDuration;
    double _cachedPlayableDuration;
    NSArray *_cachedSeekableTimeRanges;
    double _seekableTimeRangesCacheTime;
    long long _type;
    MPNowPlayingContentItem *_contentItem;
    float _defaultPlaybackRate;
    unsigned int _advancedDuringPlayback:1;
    unsigned int _handledFinishTime:1;
    unsigned int _hasPlayedThisSession:1;
    unsigned int _wasCountedAsSkipped:1;
    unsigned int _isStreamable:2;
    unsigned int _watchingAttributes:1;
    unsigned int _userChangedItemsDuringPlayback:1;
    unsigned int _lyricsAvailable:1;
    unsigned int _timeMarkersNeedLoading:1;
    NSObject *_accessQueue;
    _Bool _hasLoadedHasProtectedContent;
    _Bool _hasLoadedPlaybackMode;
    _Bool _hasPostedNaturalSizeChange;
    _Bool _hasRegisteredForCaptionsAppearanceChanged;
    _Bool _hasValidPlayerItemDuration;
    double _lastLoggedTotalDuration;
    long long _likedState;

    long long _exportableArtworkRevision;
    _Bool _meetsPlaybackHistoryThreshold;
    _Bool _assetLoaded;
    _Bool _didAttemptToLoadAsset;
    _Bool _canReusePlayerItem;
    _Bool _likedStateEnabled;
    _Bool _supportsLikedState;
    _Bool _prefersSeekOverSkip;
    _Bool _hasProtectedContent;
    _Bool _tailPlaceholder;
    _Bool _startItem;
    _Bool _shouldPreventPlayback;
    _Bool _allowsAirPlayFromCloud;
    _Bool _allowsExternalPlayback;
    _Bool _requiresLoadedAssetForAirPlayProperties;
    _Bool _hasFinishedDownloading;
    _Bool _hasPerformedErrorResolution;
    _Bool _activeItem;
    _Bool _externalDisplay;
    float _currentPlaybackRate;
    float _loudnessInfoVolumeNormalization;
    id _observer;
    NSError *_itemError;
    NSString *_queueIdentifier;
    long long _playbackMode;
    long long _albumStoreID;
    NSArray *_buyOffers;
    NSString *_copyrightText;
    NSString *_externalContentIdentifier;
    long long _storeItemInt64ID;
    long long _storeSubscriptionAdamID;
    MPMediaItem *_mediaItem;
    NSString *_explicitBadge;
    MPModelGenericObject *_modelGenericObject;
    NSString *_aggregateDictionaryItemIdentifier;
    NSString *_storeFrontIdentifier;
    NSNumber *_storeAccountID;
    NSNumber *_useListeningHistory;
    long long _leasePlaybackPreventionState;
    ICMusicSubscriptionLeaseStatus *_leaseStatus;
    NSString *_contentItemID;
}

+ (id)URLFromPath:(id)arg1;
+ (_Bool)isPlaceholder;
+ (double)nominalHasBeenPlayedThresholdForDuration:(double)arg1;
+ (_Bool)shouldIncrementPlayCountForElapsedTime:(double)arg1 startTime:(double)arg2 stopTime:(double)arg3;
+ (_Bool)hasNominalAmountBeenPlayedForElapsedTime:(double)arg1 startTime:(double)arg2 stopTime:(double)arg3;
+ (void)setDefaultScaleMode:(long long)arg1;
+ (long long)defaultScaleMode;

@property(copy, nonatomic) NSString *contentItemID; // @synthesize contentItemID=_contentItemID;
@property(readonly, copy, nonatomic) ICMusicSubscriptionLeaseStatus *leaseStatus; // @synthesize leaseStatus=_leaseStatus;
@property(readonly, nonatomic) long long leasePlaybackPreventionState; // @synthesize leasePlaybackPreventionState=_leasePlaybackPreventionState;
@property(readonly, nonatomic) NSNumber *useListeningHistory; // @synthesize useListeningHistory=_useListeningHistory;
@property(readonly, nonatomic) NSNumber *storeAccountID; // @synthesize storeAccountID=_storeAccountID;
@property(nonatomic, getter=hasExternalDisplay) _Bool externalDisplay; // @synthesize externalDisplay=_externalDisplay;
@property(readonly, copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(nonatomic, getter=isActiveItem) _Bool activeItem; // @synthesize activeItem=_activeItem;
@property(nonatomic) _Bool hasPerformedErrorResolution; // @synthesize hasPerformedErrorResolution=_hasPerformedErrorResolution;
@property(readonly, nonatomic) _Bool hasFinishedDownloading; // @synthesize hasFinishedDownloading=_hasFinishedDownloading;
@property(readonly, copy, nonatomic) NSString *aggregateDictionaryItemIdentifier; // @synthesize aggregateDictionaryItemIdentifier=_aggregateDictionaryItemIdentifier;
@property(readonly, nonatomic) _Bool requiresLoadedAssetForAirPlayProperties; // @synthesize requiresLoadedAssetForAirPlayProperties=_requiresLoadedAssetForAirPlayProperties;
@property(readonly, nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(readonly, nonatomic) _Bool allowsAirPlayFromCloud; // @synthesize allowsAirPlayFromCloud=_allowsAirPlayFromCloud;
@property(readonly, nonatomic) MPModelGenericObject *modelGenericObject; // @synthesize modelGenericObject=_modelGenericObject;
@property(readonly, nonatomic) _Bool shouldPreventPlayback; // @synthesize shouldPreventPlayback=_shouldPreventPlayback;
@property(nonatomic, getter=isStartItem) _Bool startItem; // @synthesize startItem=_startItem;
@property(readonly, nonatomic, getter=isTailPlaceholder) _Bool tailPlaceholder; // @synthesize tailPlaceholder=_tailPlaceholder;
@property(copy, nonatomic) NSString *explicitBadge; // @synthesize explicitBadge=_explicitBadge;
@property(readonly, nonatomic) _Bool hasProtectedContent; // @synthesize hasProtectedContent=_hasProtectedContent;
@property(readonly, nonatomic) _Bool prefersSeekOverSkip; // @synthesize prefersSeekOverSkip=_prefersSeekOverSkip;
@property(nonatomic) float loudnessInfoVolumeNormalization; // @synthesize loudnessInfoVolumeNormalization=_loudnessInfoVolumeNormalization;
@property(readonly, retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property(readonly, nonatomic) long long storeItemInt64ID; // @synthesize storeItemInt64ID=_storeItemInt64ID;
@property(readonly, nonatomic) _Bool supportsLikedState; // @synthesize supportsLikedState=_supportsLikedState;
@property(readonly, nonatomic, getter=isLikedStateEnabled) _Bool likedStateEnabled; // @synthesize likedStateEnabled=_likedStateEnabled;
@property(readonly, copy, nonatomic) NSString *externalContentIdentifier; // @synthesize externalContentIdentifier=_externalContentIdentifier;
@property(readonly, copy, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property(readonly, copy, nonatomic) NSArray *buyOffers; // @synthesize buyOffers=_buyOffers;
@property(readonly, nonatomic) long long albumStoreID; // @synthesize albumStoreID=_albumStoreID;
@property(readonly, nonatomic) long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property(retain, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(retain, nonatomic) NSError *itemError; // @synthesize itemError=_itemError;
@property(readonly, nonatomic) _Bool canReusePlayerItem; // @synthesize canReusePlayerItem=_canReusePlayerItem;
@property(readonly, nonatomic) _Bool didAttemptToLoadAsset; // @synthesize didAttemptToLoadAsset=_didAttemptToLoadAsset;
@property(readonly, nonatomic, getter=isAssetLoaded) _Bool assetLoaded; // @synthesize assetLoaded=_assetLoaded;
@property(readonly, nonatomic) _Bool meetsPlaybackHistoryThreshold; // @synthesize meetsPlaybackHistoryThreshold=_meetsPlaybackHistoryThreshold;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSArray *urlTimeMarkers; // @synthesize urlTimeMarkers=_urlTimeMarkers;
@property(nonatomic) float soundCheckVolumeNormalization; // @synthesize soundCheckVolumeNormalization=_soundCheckVolumeNormalization;
@property _Bool isAssetLoaded; // @synthesize isAssetLoaded=_isAssetLoaded;
@property(nonatomic) float defaultPlaybackRate; // @synthesize defaultPlaybackRate=_defaultPlaybackRate;
@property(nonatomic, getter=_currentPlaybackRate, setter=_setCurrentPlaybackRate:) float _currentPlaybackRate; // @synthesize _currentPlaybackRate;
@property(retain, nonatomic) NSArray *chapterTimeMarkers; // @synthesize chapterTimeMarkers=_chapterTimeMarkers;
@property(retain, nonatomic) NSArray *artworkTimeMarkers; // @synthesize artworkTimeMarkers=_artworkTimeMarkers;
@property(readonly, nonatomic) MPAlternateTracks *alternateTracks; // @synthesize alternateTracks=_alternateTracks;
- (void)_willResignActivePlayerItem;
- (void)_willBecomeActivePlayerItem;
- (void)_updateHasFinishedDownloading;
- (void)resolvePlaybackError:(id)arg1 withCompletion:(id)arg2;
- (void)replacePlayerItemWithPlayerItem:(id)arg1;
- (void)reevaluateType;
- (void)reevaluateHasProtectedContent;
@property(readonly, nonatomic) MPModelPlayEvent *modelPlayEvent;
- (void)invalidateContentItemDeviceSpecificUserInfo;
- (void)_setListeningForCaptionsAppearanceSettingsChanged:(_Bool)arg1;
- (void)_setNeedsPersistedLikedStateUpdate;
- (long long)_persistedLikedState;
- (void)_handleUpdatedLikedState:(long long)arg1 forUserIdentity:(id)arg2 completion:(id)arg3;
- (double)_expectedStopTimeWithPlaybackInfo:(id)arg1;
- (double)_expectedStartTimeWithPlaybackInfo:(id)arg1;
- (void)_applyLoudnessInfo;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (void)_updateDurationSnapshotWithElapsedTime:(double)arg1 playbackRate:(float)arg2;
- (_Bool)_isBackgroundPlaybackRestricted;
- (void)setupPlaybackInfo;
- (void)setupEQPresetWithDefaultPreset:(long long)arg1;
@property(readonly, copy, nonatomic) NSDictionary *playbackInfo;
- (void)_clearAsset;
- (id)blockForDirectAVControllerNotificationReferencingItem:(id)arg1;
- (void)_performContentItemUpdate:(id)arg1;
- (_Bool)_shouldPublishArtworkURL;
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;
- (void)_loadAssetProperties;
- (double)_playableDurationForLoadedTimeRanges:(id)arg1;
- (id)_seekableTimeRanges;
- (void)_loadAvailableMediaCharacteristicsIfNeeded;
- (id)_initialPlaybackStartTimeForPlaybackInfo:(id)arg1;
- (void)_likedStateDidChange;
- (id)_currentContentItemDeviceSpecificUserInfo;
- (void)_removeObservationsForAVPlayerItem:(id)arg1;
- (void)_addObservationsForAVPlayerItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_captionAppearanceSettingsChanged;
- (void)_itemAttributeAvailableKey:(id)arg1;
- (void)_internalLikedStateDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) double timeOfSeekableEnd;
@property(readonly, nonatomic) double timeOfSeekableStart;
@property(readonly, nonatomic) struct OpaqueCMTimebase *timebase;

@property(readonly, nonatomic) double playableDurationIfAvailable;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) double durationIfAvailable;
- (double)_durationFromExternalMetadataIfAvailable;
@property(readonly, nonatomic) _Bool durationIsValid;
@property(readonly, nonatomic) double durationFromExternalMetadata;

@property(readonly, nonatomic) _Bool shouldShowComposer;
@property(readonly, nonatomic) long long storePurchasedAdamID;
@property(readonly, nonatomic) unsigned long long composerPersistentID;
@property(readonly, nonatomic) unsigned long long genrePersistentID;
@property(readonly, nonatomic) unsigned long long artistPersistentID;
@property(readonly, nonatomic) unsigned long long albumArtistPersistentID;
@property(readonly, nonatomic) unsigned long long albumPersistentID;
@property(readonly, nonatomic) NSString *cloudAlbumID;
@property(readonly, nonatomic) NSString *cloudUniversalLibraryID;
@property(readonly, nonatomic) NSString *personID;
@property(readonly, nonatomic) unsigned long long cloudID;
@property(readonly, nonatomic) NSString *databaseID;
@property(readonly, nonatomic) unsigned long long persistentID;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, nonatomic) float userRating;
@property(readonly, nonatomic) long long type;
- (id)_imageChapterTrackIDsForAsset:(id)arg1;
- (id)closedCaptionTimeMarkerForTime:(double)arg1;
- (id)urlTimeMarkerForTime:(double)arg1;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2;
@property(retain, nonatomic) NSArray *closedCaptionTimeMarkers;
- (void)_loadTimeMarkersAsync;
- (void)_loadTimeMarkersBlocking;
@property(readonly, nonatomic) _Bool useEmbeddedChapterData;
@property(readonly, nonatomic) _Bool supportsRadioTrackActions;
@property(readonly, nonatomic) long long stationProviderID;
@property(readonly, copy, nonatomic) NSString *stationStringID;
@property(readonly, copy, nonatomic) NSString *stationName;
@property(readonly, copy, nonatomic) NSString *stationHash;
@property(readonly, nonatomic) long long stationID;
@property(readonly, nonatomic) _Bool stationAllowsItemLiking;
@property(nonatomic, getter=isInWishList) _Bool inWishList;
@property(readonly, nonatomic, getter=isRadioItem) _Bool radioItem;
@property(readonly, nonatomic) MPNowPlayingContentItem *contentItem;
@property(readonly, nonatomic) NSArray *timedMetadataIfAvailable;
- (void)_realoadEmbeddedTimeMarkers;
@property(readonly, nonatomic) _Bool supportsRating;
@property(readonly, nonatomic) _Bool supportsRewindAndFastForward15Seconds;
@property(readonly, nonatomic) NSString *storeItemID;
- (void)setSelectedAlternateTextTrack:(id)arg1;
- (void)setLikedState:(long long)arg1 forUserIdentity:(id)arg2;
@property(nonatomic) long long likedState;
- (void)setOverrideDuration:(double)arg1;
@property(nonatomic) _Bool hasPlayedThisSession;
- (float)scanIntervalForLevel:(unsigned long long)arg1 paused:(_Bool)arg2;

@property(nonatomic) __weak MPQueueFeeder *feeder; // @synthesize feeder=_feeder;
@property(readonly, nonatomic) struct CGSize presentationSize;
- (void)prepareForRate:(float)arg1 completionHandler:(id)arg2;
- (float)playbackRateForLevel:(unsigned long long)arg1 direction:(long long)arg2 paused:(_Bool)arg3;
@property(readonly, nonatomic) NSURL *podcastURL;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) NSString *mainTitle;
@property(readonly, nonatomic) _Bool allowsEQ;
@property(readonly, nonatomic) long long customAVEQPreset;
@property(readonly, nonatomic, getter=isStreamable) _Bool streamable;
@property(readonly, nonatomic, getter=isAlwaysLive) _Bool alwaysLive;
@property(readonly, nonatomic) _Bool isAd;
- (_Bool)hasDisplayableText;
- (_Bool)hasDataForItemArtwork;
- (unsigned long long)alternatesCountForTypes:(unsigned long long)arg1;
- (_Bool)hasAlternatesForTypes:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *containerUniqueID;
@property(readonly, nonatomic) _Bool hasTimeSyncedLyrics;
@property(readonly, nonatomic) _Bool hasStoreLyrics;
@property(readonly, nonatomic) NSString *libraryLyrics;
@property(readonly, nonatomic) NSString *lyrics;
@property(readonly, nonatomic) NSString *displayableText;
@property(readonly, nonatomic) _Bool displayableTextLoaded;
@property(readonly, nonatomic) _Bool usesSubscriptionLease;
@property(readonly, nonatomic) double currentTimeDisplayOverride;
@property(readonly, nonatomic) NSString *genre;
@property(readonly, nonatomic, getter=isExplicitTrack) _Bool explicitTrack;
@property(readonly, nonatomic, getter=isAssetURLValid) _Bool assetURLValid;
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;
@property(readonly, nonatomic) unsigned long long discCount;
@property(readonly, nonatomic) unsigned long long discNumber;
@property(readonly, nonatomic) NSString *composer;
@property(readonly, nonatomic) _Bool canSeedGenius;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long albumTrackCount;
@property(readonly, nonatomic) unsigned long long albumTrackNumber;
@property(readonly, nonatomic) long long artistStoreID;
@property(readonly, nonatomic) NSString *albumArtist;
@property(readonly, nonatomic) NSString *artist;
- (long long)albumYear;
@property(readonly, nonatomic) NSString *album;
@property(readonly, nonatomic) AVPlayerItemAccessLog *accessLog;
- (id)url;
- (id)path;
- (double)durationInSeconds;
@property(nonatomic) _Bool userChangedItemsDuringPlayback;
@property(nonatomic) _Bool userSkippedPlayback;
@property(nonatomic) _Bool userAdvancedDuringPlayback;
- (void)setSubtitleTrackID:(int)arg1;
- (int)subtitleTrackID;
- (void)setRating:(float)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)notePlaybackFinishedByHittingEnd;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setAlternateAudioTrackLocale:(id)arg1;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)resetBookkeeping;
@property(readonly, copy, nonatomic) NSNumber *initialPlaybackStartTime;
@property(readonly, copy, nonatomic) NSNumber *bookmarkTime;
@property(readonly, copy, nonatomic) NSError *playbackError;
@property(readonly, nonatomic) long long status;
@property(retain, nonatomic) AVPlayerItem *playerItem;
@property(readonly, nonatomic) AVAsset *asset;
- (void)_loadAssetAndPlayerItem;
- (void)loadAssetAndPlayerItem;
- (void)disableItemReuse;
@property(readonly, nonatomic) _Bool canUseLoadedAsset;
- (void)flushNowPlayingCaches;
- (void)dealloc;
- (void)_releaseAllTimeMarkers;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)init;
- (_Bool)isSupportedDefaultPlaybackSpeed:(long long)arg1;
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
- (void)setMeetsPlaybackHistoryThresholdForElapsedTime:(double)arg1 startTime:(double)arg2;
- (id)artworkCatalogBlock;
- (id)artworkCatalogForPlaybackTime:(double)arg1;

@end

