//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>
#import <MediaPlayer/_MPActiveUserChangeMonitorDelegate-Protocol.h>

@class ICUserIdentity, ML3MusicLibrary, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSPointerArray, NSString, NSURL, QueryCriteriaResultsCache, _MPActiveUserChangeMonitor;
@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;

@interface MPMediaLibrary : NSObject
{
    id _libraryDataProvider;
    NSObject *_entityCacheQueue;
    NSObject *_fixedQueue;
    NSArray *_notificationObservers;
    QueryCriteriaResultsCache *_itemsForCriteriaCache;
    QueryCriteriaResultsCache *_hasItemsForCriteriaCache;
    QueryCriteriaResultsCache *_countOfItemsForCriteriaCache;
    QueryCriteriaResultsCache *_itemResultSetsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsForCriteriaCache;
    QueryCriteriaResultsCache *_hasCollectionsForCriteriaCache;
    QueryCriteriaResultsCache *_countOfCollectionsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsResultSetsForCriteriaCache;
    NSMutableDictionary *_hasItemsDidLoadForCriteria;
    NSMutableDictionary *_hasCollectionsDidLoadForCriteria;
    NSMutableDictionary *_countOfCollectionsDidLoadForCriteria;
    NSMutableDictionary *_countOfItemsDidLoadForCriteria;
    NSMutableArray *_additionalLibraryFilterPredicates;
    NSObject *_additionalLibraryFilterPredicatesAccessQueue;
    NSPointerArray *_connectionAssertions;
    NSObject *_connectionAssertionsQueue;
    _Bool _disconnectAfterReleasingAssertions;
    float _connectionProgress;
    long long _removalReason;
    unsigned int _determinedHasMedia:1;
    unsigned int _hasMedia:1;
    unsigned int _determinedHasSongs:1;
    unsigned int _hasSongs:1;
    unsigned int _determinedHasGeniusMixes:1;
    unsigned int _hasGeniusMixes:1;
    unsigned int _determinedHasPlaylists:1;
    unsigned int _hasPlaylists:1;
    unsigned int _determinedHasComposers:1;
    unsigned int _hasComposers:1;
    unsigned int _determinedHasPodcasts:1;
    unsigned int _hasPodcasts:1;
    unsigned int _determinedHasUbiquitousBookmarkableItems:1;
    unsigned int _hasUbiquitousBookmarkableContent:1;
    unsigned int _determinedHasAudiobooks:1;
    unsigned int _hasAudiobooks:1;
    long long _cloudFilteringType;
    _Bool _filteringDisabled;
    _Bool _hasVideos;
    _Bool _determinedHasVideos;
    _Bool _hasMusicVideos;
    _Bool _determinedHasMusicVideos;
    _Bool _hasAudibleAudioBooks;
    _Bool _determinedHasAudibleAudioBooks;
    _Bool _hasMovies;
    _Bool _determinedHasMovies;
    _Bool _hasCompilations;
    _Bool _determinedHasCompilations;
    _Bool _hasITunesU;
    _Bool _determinedHasITunesU;
    _Bool _hasVideoITunesU;
    _Bool _determinedHasVideoITunesU;
    _Bool _hasMovieRentals;
    _Bool _determinedHasMovieRentals;
    _Bool _hasTVShows;
    _Bool _determinedHasTVShows;
    _Bool _hasHomeVideos;
    _Bool _determinedHasHomeVideos;
    _Bool _hasVideoPodcasts;
    _Bool _determinedHasVideoPodcasts;
    unsigned char _originalCellNetworkFlags;
    unsigned char _originalWiFiNetworkFlags;
    struct os_unfair_lock_s __MLCoreStorageLock;
    id __MLCoreStorage;
    ICUserIdentity *_userIdentity;
    long long _libraryChangeObservers;
    _MPActiveUserChangeMonitor *_activeUserChangeMonitor;
    struct os_unfair_lock_s *__MLCoreStorageLockPointer;
}

+ (void)libraryPathDidChangeForDataProvider:(id)arg1;
+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1;
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1;
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)arg1;
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1;
+ (void)postEntitiesAddedOrRemovedNotificationForLibraryDataProvider:(id)arg1;
+ (void)reloadLibraryDataProvider:(id)arg1;
+ (void)removeLibraryDataProvider:(id)arg1 removalReason:(long long)arg2;
+ (void)addLibraryDataProvider:(id)arg1;
+ (id)libraryDataProviders;
+ (id)_libraryDataProviders;
+ (id)_libraryForDataProvider:(id)arg1;
+ (id)mediaLibraryWithUniqueIdentifier:(id)arg1;
+ (id)sharedMediaLibraries;
+ (id)mediaLibraries;
+ (id)_mediaLibraries;
+ (void)_endDiscoveringMediaLibrariesIfAllowed;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (void)setLibraryServerDisabled:(_Bool)arg1;
+ (_Bool)isLibraryServerDisabled;
+ (void)requestAuthorization:(id)arg1;
+ (void)validatePermissionsExpiryWithCompletion:(id)arg1;
+ (long long)authorizationStatus;
+ (void)endDiscoveringMediaLibraries;
+ (void)beginDiscoveringMediaLibraries;
+ (void)_postNotificationName:(id)arg1 library:(id)arg2 userInfo:(id)arg3;
+ (void)_postNotificationName:(id)arg1 library:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)_deviceMediaLibraryWithUserIdentity:(id)arg1 createIfRequired:(_Bool)arg2;
+ (id)deviceMediaLibraryWithUserIdentity:(id)arg1;
+ (id)deviceMediaLibrary;
+ (void)setDefaultMediaLibrary:(id)arg1;
+ (id)defaultMediaLibrary;
+ (void)initialize;

@property(readonly, nonatomic) struct os_unfair_lock_s *_MLCoreStorageLockPointer; // @synthesize _MLCoreStorageLockPointer=__MLCoreStorageLockPointer;
@property(retain, nonatomic) _MPActiveUserChangeMonitor *activeUserChangeMonitor; // @synthesize activeUserChangeMonitor=_activeUserChangeMonitor;
@property(readonly, nonatomic) struct os_unfair_lock_s _MLCoreStorageLock; // @synthesize _MLCoreStorageLock=__MLCoreStorageLock;
@property(retain, nonatomic, setter=_setMLCoreStorage:) id _MLCoreStorage; // @synthesize _MLCoreStorage=__MLCoreStorage;
- (_Bool)recordPlayEventForPlaylistPersistentID:(long long)arg1;
- (_Bool)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg1 completion:(id)arg2;
- (void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(id)arg2;
- (void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(_Bool)arg2 completion:(id)arg3;
- (_Bool)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (void)addTracksToMyLibrary:(id)arg1;
- (void)addPlaylistStoreItemsWithMetadata:(id)arg1 completion:(id)arg2;
- (void)getPlaylistWithUUID:(id)arg1 creationMetadata:(id)arg2 completionHandler:(id)arg3;
- (void)performStoreItemLibraryImport:(id)arg1 withCompletion:(id)arg2;
- (void)addAdvertisementItemWithDictionary:(id)arg1 completion:(id)arg2;
- (void)addStoreItemIDs:(id)arg1 referralObject:(id)arg2 andAddTracksToCloudLibrary:(_Bool)arg3 withCompletion:(id)arg4;
- (void)addStoreItemIDs:(id)arg1 andAddTracksToCloudLibrary:(_Bool)arg2 withCompletion:(id)arg3;
- (void)addStoreItem:(long long)arg1 andAddTracksToCloudLibrary:(_Bool)arg2 withCompletion:(id)arg3;
- (id)completeMyCollectionArtworkDataSource;
- (id)artworkDataSource;
- (id)libraryDataProvider;
- (id)_initWithLibraryDataProvider:(id)arg1;
@property(readonly, nonatomic) long long libraryChangeObservers; // @synthesize libraryChangeObservers=_libraryChangeObservers;
@property(readonly, copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) ML3MusicLibrary *ml3Library;
- (void)_tearDownNotifications;
- (void)_setupNotifications;
- (void)_disconnect;
- (void)_removeConnectionAssertion:(id)arg1;
- (id)_collectionsForQueryCriteria:(id)arg1;
- (void)_setLibraryFilterPredicates;
- (long long)cloudFilteringType;
- (void)setCloudFilteringType:(long long)arg1;
- (void)_clearPendingDisconnection;
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1;
- (unsigned long long)_countOfCollectionsForQueryCriteria:(id)arg1;
- (unsigned long long)_countOfItemsForQueryCriteria:(id)arg1;
- (_Bool)_hasCollectionsForQueryCriteria:(id)arg1;
- (_Bool)_hasItemsForQueryCriteria:(id)arg1;
- (id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(id)arg5 loadValueFromDataProviderBlock:(id)arg6;
- (id)_itemsForQueryCriteria:(id)arg1;
- (_Bool)collectionExistsContainedWithinSyncIDs:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (_Bool)collectionExistsWithCloudUniversalLibraryID:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (_Bool)collectionExistsWithSagaID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (_Bool)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (_Bool)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (_Bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long *)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long *)arg4;
- (void)_performBlockOnLibraryHandlingTheSameAccount:(id)arg1;
- (_Bool)_handlesSameAccountAs:(id)arg1;
- (void)activeUserChangeDidFinish;
- (unsigned long long)_persistentIDForAssetURL:(id)arg1;
- (id)pathForAssetURL:(id)arg1;
- (_Bool)isValidAssetURL:(id)arg1;
- (id)entityWithPersistentID:(long long)arg1 entityType:(long long)arg2;
- (id)entityWithSpotlightIdentifier:(id)arg1;
- (id)entityWithLibraryURL:(id)arg1;
- (id)entityWithMultiverseIdentifier:(id)arg1;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (_Bool)deleteDatabaseProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (id)entityCache;
- (id)syncValidity;
- (float)connectionProgress;
- (_Bool)isCurrentThreadInTransaction;
- (void)performReadTransactionWithBlock:(id)arg1;
- (_Bool)performTransactionWithBlock:(id)arg1;
- (id)connectionAssertionWithIdentifier:(id)arg1;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id)arg2;
- (_Bool)requiresAuthentication;
- (id)preferredSubtitleLanguages;
- (id)preferredAudioLanguages;
- (_Bool)isGeniusEnabled;
- (void)geniusItemsForSeedItem:(id)arg1 completion:(id)arg2;
- (void)setValues:(id)arg1 forProperties:(id)arg2 forItemPersistentIDs:(id)arg3;
- (void)clearLocationPropertiesOfItem:(id)arg1;
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 completionBlock:(id)arg4;
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3;
- (void)downloadAsset:(id)arg1 completionHandler:(id)arg2;
- (_Bool)removePlaylist:(id)arg1;
- (_Bool)removeItems:(id)arg1;
- (_Bool)deleteItems:(id)arg1;
- (id)URLForHomeSharingRequest:(id)arg1;
- (unsigned int)homeSharingDatabaseID;
- (unsigned long long)syncPlaylistId;
- (void)setSyncPlaylistId:(unsigned long long)arg1;
- (id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(_Bool)arg2;
- (id)addPlaylistWithName:(id)arg1;
- (id)playlistWithPersistentID:(unsigned long long)arg1;
- (id)playbackHistoryPlaylist;
- (id)localizedSectionIndexTitles;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)newPlaylistWithPersistentID:(unsigned long long)arg1;
- (id)decodeItemWithCoder:(id)arg1;
- (id)itemWithStoreID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(_Bool)arg2;
- (id)itemWithPersistentID:(unsigned long long)arg1;
- (id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 verifyExistence:(_Bool)arg3;
- (id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (_Bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (_Bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (_Bool)itemExistsInDatabaseWithPersistentID:(unsigned long long)arg1;
- (_Bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (_Bool)hasUserPlaylistsContainingAppleMusicContent;
- (_Bool)hasAddedToLibraryAppleMusicContent;
- (_Bool)hasUserPlaylists;
- (_Bool)hasVideoPodcasts;
- (_Bool)hasHomeVideos;
- (_Bool)hasTVShows;
- (_Bool)hasMovieRentals;
- (_Bool)hasVideoITunesUContent;
- (_Bool)hasAudioITunesUContent;
- (_Bool)hasITunesUContent;
- (_Bool)hasCompilations;
- (_Bool)hasMovies;
- (_Bool)hasAudibleAudioBooks;
- (_Bool)hasMusicVideos;
- (_Bool)hasVideos;
- (_Bool)_checkHasContent:(_Bool *)arg1 determined:(_Bool *)arg2 mediaType:(unsigned long long)arg3 queryHasEntitiesBlock:(id)arg4;
- (_Bool)_checkHasContent:(_Bool *)arg1 determined:(_Bool *)arg2 queryHasEntitiesBlock:(id)arg3;
- (_Bool)hasAudiobooks;
- (_Bool)hasComposers;
- (_Bool)hasGenres;
- (_Bool)hasUbiquitousBookmarkableItems;
- (_Bool)hasPodcasts;
- (_Bool)hasSongs;
- (_Bool)hasAlbums;
- (_Bool)hasArtists;
- (_Bool)hasPlaylists;
- (_Bool)hasGeniusMixes;
- (_Bool)hasMedia;
- (_Bool)hasMediaOfType:(unsigned long long)arg1;
- (id)databasePath;
- (id)uniqueIdentifier;
@property(nonatomic) long long removalReason;
- (id)name;
- (void)removeLibraryFilterPredicate:(id)arg1;
- (void)addLibraryFilterPredicate:(id)arg1;
- (id)additionalLibraryFilterPredicates;
- (long long)status;
- (_Bool)writable;
- (_Bool)isHomeSharingLibrary;
- (_Bool)isDeviceLibrary;
- (long long)playlistGeneration;
- (unsigned long long)syncGenerationID;
- (unsigned long long)currentEntityRevision;
- (void)addItemWithProductID:(id)arg1 completionHandler:(id)arg2;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
- (void)disconnect;
- (void)connectWithCompletionHandler:(id)arg1;
- (void)endGeneratingLibraryChangeNotifications;
- (void)beginGeneratingLibraryChangeNotifications;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;
- (void)_activeUserDidChangeNotification:(id)arg1;
- (void)_reloadLibraryForPathChange;
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForRestrictionsChange;
- (void)_scheduleLibraryChangeNotificationPostingBlock:(id)arg1;
- (void)_clearCachedContentDataAndResultSets:(_Bool)arg1;
- (void)_clearCachedEntitiesIncludingResultSets:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithUserIdentity:(id)arg1;
- (id)init;
@property(readonly, nonatomic) shared_ptr_0f3dbfb3 _MediaLibrary_coreLibrary;
@property(readonly, nonatomic) NSURL *protectedContentSupportStorageURL;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(id)arg2;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(long long)arg2 usingBlock:(id)arg3;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(long long)arg2 inUsersLibrary:(_Bool)arg3 usingBlock:(id)arg4;
@property(readonly, nonatomic) NSString *_syncValidity;
- (id)errorResolverForItem:(id)arg1;
- (void)clearSagaLastPlaylistPlayDataUploadDate;
- (void)clearSagaLastItemPlayDataUploadDate;
- (void)clearSagaCloudAccountID;
@property(copy, nonatomic) NSDate *sagaLastSubscribedContainersUpdateTime;
@property(copy, nonatomic) NSDate *sagaLastLibraryUpdateTime;
@property(nonatomic) long long sagaOnDiskDatabaseRevision;
@property(copy, nonatomic) NSString *storefrontIdentifier;
@property(nonatomic) long long sagaDatabaseUserVersion;
@property(copy, nonatomic) NSDate *sagaLastPlaylistPlayDataUploadDate;
@property(copy, nonatomic) NSDate *sagaLastItemPlayDataUploadDate;
@property(copy, nonatomic) NSNumber *sagaAccountID;
- (unsigned long long)filterAvailableContentGroups:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

