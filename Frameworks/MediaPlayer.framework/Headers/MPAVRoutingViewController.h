//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/CARSessionObserving-Protocol.h>
#import <MediaPlayer/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaPlayer/MPAVRoutingTableViewCellDelegate-Protocol.h>
#import <MediaPlayer/UITableViewDataSource-Protocol.h>
#import <MediaPlayer/UITableViewDelegate-Protocol.h>
#import <MediaPlayer/_MPStateDumpPropertyListTransformable-Protocol.h>

@class CARSessionStatus, MPAVClippingTableView, MPAVEndpointRoute, MPAVRoute, MPAVRoutingController, MPAVRoutingViewControllerUpdate, MPSectionedCollection, MPVolumeGroupSliderCoordinator, MPWeakTimer, NSArray, NSMapTable, NSNumber, NSString, UIColor, UITableView;
@protocol MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate;

@interface MPAVRoutingViewController : UIViewController <CARSessionObserving, UITableViewDataSource, UITableViewDelegate, MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, _MPStateDumpPropertyListTransformable>
{
    MPAVClippingTableView *_tableView;
    MPAVRoutingViewControllerUpdate *_pendingUpdate;
    _Bool _isAnimatingUpdate;
    MPAVRoute *_displayedEndpointRoute;
    MPSectionedCollection *_routingViewItems;
    NSArray *_cachedPickedRoutes;
    NSArray *_cachedDisplayableAvailableRoutes;
    NSArray *_cachedPendingPickedRoutes;
    NSArray *_cachedDisplayAsPickedRoutes;
    NSArray *_cachedVolumeCapableRoutes;
    MPWeakTimer *_updateTimer;
    MPAVRoutingController *_routingController;
    long long _routeDiscoveryMode;
    UIColor *_tableCellsBackgroundColor;
    UIColor *_tableCellsContentColor;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    _Bool _airPlayPasswordAlertDidAppearTokenIsValid;
    _Bool _needsDisplayedRoutesUpdate;
    _Bool _suspendedDiscoveryModeDueToApplicationState;
    _Bool _shouldAutomaticallyUpdateRoutesList;
    _Bool _shouldPickRouteOnSelection;
    _Bool _onScreen;
    _Bool _hasUserSelections;
    CARSessionStatus *_carPlayStatus;
    unsigned long long _updatesSincePresentation;
    long long _discoveryModeBeforeEnteringBackground;
    _Bool _sortByIsVideoRoute;
    unsigned long long _style;
    id _delegate;
    long long _avItemType;
    unsigned long long _mirroringStyle;
    unsigned long long _iconStyle;
    NSNumber *_discoveryModeOverride;
    id _themeDelegate;
    MPAVEndpointRoute *_endpointRoute;
    NSMapTable *_outputDeviceVolumeSliders;
    MPVolumeGroupSliderCoordinator *_groupSliderCoordinator;
}


@property(nonatomic) _Bool sortByIsVideoRoute; // @synthesize sortByIsVideoRoute=_sortByIsVideoRoute;
@property(retain, nonatomic) MPVolumeGroupSliderCoordinator *groupSliderCoordinator; // @synthesize groupSliderCoordinator=_groupSliderCoordinator;
@property(retain, nonatomic) NSMapTable *outputDeviceVolumeSliders; // @synthesize outputDeviceVolumeSliders=_outputDeviceVolumeSliders;
@property(retain, nonatomic) MPAVEndpointRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
@property(nonatomic) __weak id themeDelegate; // @synthesize themeDelegate=_themeDelegate;
@property(copy, nonatomic) NSNumber *discoveryModeOverride; // @synthesize discoveryModeOverride=_discoveryModeOverride;
@property(nonatomic) unsigned long long iconStyle; // @synthesize iconStyle=_iconStyle;
@property(nonatomic) unsigned long long mirroringStyle; // @synthesize mirroringStyle=_mirroringStyle;
@property(nonatomic, setter=setAVItemType:) long long avItemType; // @synthesize avItemType=_avItemType;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)_stateDumpObject;
- (id)_createSectionedCollection:(id)arg1 withPickedRoutes:(id)arg2;
- (void)_endUpdates;
- (id)_createVolumeSlider;
- (_Bool)_shouldDisplayRouteAsPicked:(id)arg1;
- (double)_tableViewFooterViewHeight;
- (double)_tableViewHeaderViewHeight;
- (void)_applyUpdate:(id)arg1;
- (id)_createReloadUpdate;
- (void)_enqueueUpdate:(id)arg1;
- (void)_updateDisplayedRoutes;
- (id)_volumeCapableRoutesInRoutes:(id)arg1;
- (id)_displayAsPickedRoutesInRoutes:(id)arg1;
- (id)_displayableRoutesInRoutes:(id)arg1;
- (void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1;
- (void)_setNeedsDisplayedRoutesUpdate;
- (void)_setNeedsRouteDiscoveryModeUpdate;
- (void)_setRouteDiscoveryMode:(long long)arg1;
- (void)_setupUpdateTimerIfNecessary;
- (void)_endRouteDiscovery;
- (void)_beginRouteDiscovery;
- (void)_unregisterNotifications;
- (void)_registerCarPlayObserver;
- (void)_registerNotifications;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (double)_tableViewHeightAccordingToDataSource;
- (void)_diplayShareAudioDisabledAlertForReason:(id)arg1;
- (_Bool)_wouldShareAudioForPickedRoute:(id)arg1 operation:(long long)arg2 pickedRoutes:(id)arg3;
@property(nonatomic, setter=_setShouldPickRouteOnSelection:) _Bool _shouldPickRouteOnSelection;
@property(nonatomic, setter=_setShouldAutomaticallyUpdateRoutesList:) _Bool _shouldAutomaticallyUpdateRoutesList;
@property(retain, nonatomic, setter=_setTableCellsContentColor:) UIColor *_tableCellsContentColor;
@property(retain, nonatomic, setter=_setTableCellsBackgroundColor:) UIColor *_tableCellsBackgroundColor;
@property(readonly, nonatomic) UITableView *_tableView;
@property(readonly, nonatomic) double _normalCellHeight;
@property(readonly, nonatomic) double _expandedCellHeight;
@property(readonly, nonatomic) MPAVRoutingController *_routingController;
- (void)enqueueRefreshUpdate;
- (void)sessionDidDisconnect:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(_Bool)arg2;
- (void)routingController:(id)arg1 shouldHijackRoute:(id)arg2 alertStyle:(long long)arg3 busyRouteName:(id)arg4 presentingAppName:(id)arg5 completion:(id)arg6;
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (_Bool)shouldOverrideContentSizeCategory:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)resetScrollPosition;
- (void)resetDisplayedRoutes;
- (_Bool)isInVehicle;
- (_Bool)hasCarKitRoute;
@property(readonly, nonatomic, getter=isInCarPlay) _Bool inCarPlay;
@property(nonatomic) _Bool allowMirroring;
- (void)dealloc;
- (id)initWithStyle:(unsigned long long)arg1 routingController:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_initWithStyle:(unsigned long long)arg1 routingController:(id)arg2;
- (id)_crashLogDateFormatter;
- (id)_alertControllerForUpdateDisplayedRoutesCrashWithLogFileURL:(id)arg1 exception:(id)arg2;
- (id)_writeToDiskWithUpdateDisplayedRoutesStatePropertyList:(id)arg1 error:(id )arg2;
- (id)_generatePropertyListFromUpdateDisplayedRoutesState:(id)arg1 exception:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

