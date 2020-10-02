//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "CAAnimationDelegate.h"
#import "LPTapToLoadViewDelegate.h"
#import "LPThemeClient.h"
#import "QLPreviewMenuItemDelegate.h"

@class LPCaptionBarPresentationProperties, LPCaptionButtonPresentationProperties, LPImage, LPImagePresentationProperties, LPInlineMediaPlaybackInformation, LPLinkMetadata, LPLinkViewComponents, LPTheme, LPVideo, NSArray, NSColor, NSHashTable, NSImmediateActionGestureRecognizer, NSMutableArray, NSString, NSURL;

@interface LPLinkView : NSObject
{
    unsigned int _loggingID;
    NSHashTable *_pendingMetadataProviders;
    LPLinkMetadata *_metadata;
    NSArray *_multipleMetadata;
    NSArray *_multipleURLs;
    LPTheme *_theme;
    NSMutableArray *_tapGestureRecognizers;
    NSMutableArray *_highlightGestureRecognizers;
    NSView *_highlightView;
    BOOL _isPreliminary;
    long long _style;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    LPCaptionButtonPresentationProperties *_captionButton;
    NSString *_quotedText;
    LPImage *_image;
    LPImagePresentationProperties *_imageProperties;
    NSArray *_alternateImages;
    LPVideo *_video;
    NSColor *_backgroundColor;
    NSColor *_overrideBackgroundColor;
    LPInlineMediaPlaybackInformation *_inlinePlaybackInformation;
    double _minimumHeight;
    LPLinkViewComponents *_components;
    LPLinkViewComponents *_componentsForSizing;
    NSView *_contentView;
    NSView *_animationView;
    NSImmediateActionGestureRecognizer *_immediateActionGestureRecognizer;
    BOOL _hasEverBuilt;
    BOOL _needsRebuild;
    BOOL _usesDeferredLayout;
    BOOL _shouldAnimateDuringNextBuild;
    BOOL _hasValidPresentationProperties;
    BOOL _hasSetDisableHighlightGesture;
    BOOL _hasSetDisablePreviewGesture;
    BOOL _mayReceiveAdditionalMetadata;
    BOOL _usesComputedPresentationProperties;
    BOOL _asynchronouslyLoadingMetadataFields;
    BOOL _metadataIsComplete;
    BOOL _disableAnimations;
    BOOL _needsMessagesTranscriptPushCounterAnimation;
    BOOL _disableTapGesture;
    BOOL _disableHighlightGesture;
    BOOL _disablePreviewGesture;
    BOOL _disableAutoPlay;
    BOOL _disablePlayback;
    BOOL _disablePlaybackControls;
    BOOL _allowsTapToLoad;
    BOOL _forceFlexibleWidth;
    BOOL _applyCornerRadius;
    long long _animationOrigin;
    unsigned long long _preferredSizeClass;
    NSString *_sourceBundleIdentifier;
    id _delegate;
    NSURL *_URL;
    id _textSafeAreaInset;
    id _contentInset;
}


@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) struct NSEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=_setSourceBundleIdentifier:) NSString *_sourceBundleIdentifier; // @synthesize _sourceBundleIdentifier;
@property(nonatomic, setter=_setPreferredSizeClass:) unsigned long long _preferredSizeClass; // @synthesize _preferredSizeClass;
@property(nonatomic, setter=_setTextSafeAreaInset:) struct NSEdgeInsets _textSafeAreaInset; // @synthesize _textSafeAreaInset;
@property(nonatomic, setter=_setApplyCornerRadius:) BOOL _applyCornerRadius; // @synthesize _applyCornerRadius;
@property(nonatomic, setter=_setForceFlexibleWidth:) BOOL _forceFlexibleWidth; // @synthesize _forceFlexibleWidth;
@property(nonatomic, setter=_setUsesDeferredLayout:) BOOL _usesDeferredLayout; // @synthesize _usesDeferredLayout;
@property(nonatomic, setter=_setAllowsTapToLoad:) BOOL _allowsTapToLoad; // @synthesize _allowsTapToLoad;
@property(nonatomic, setter=_setAnimationOrigin:) long long _animationOrigin; // @synthesize _animationOrigin;
@property(nonatomic, setter=_setDisablePlaybackControls:) BOOL _disablePlaybackControls; // @synthesize _disablePlaybackControls;
@property(nonatomic, setter=_setDisablePlayback:) BOOL _disablePlayback; // @synthesize _disablePlayback;
@property(nonatomic, setter=_setDisableAutoPlay:) BOOL _disableAutoPlay; // @synthesize _disableAutoPlay;
@property(nonatomic, setter=_setDisableTapGesture:) BOOL _disableTapGesture; // @synthesize _disableTapGesture;
@property(nonatomic, setter=_setNeedsMessagesTranscriptPushCounterAnimation:) BOOL _needsMessagesTranscriptPushCounterAnimation; // @synthesize _needsMessagesTranscriptPushCounterAnimation;
@property(nonatomic, setter=_setDisableAnimations:) BOOL _disableAnimations; // @synthesize _disableAnimations;
- (id)accessibilityTitle;
- (id)accessibilityRole;
- (struct CGRect)menuItem:(id)arg1 itemFrameForPoint:(struct CGPoint)arg2;
- (id)menuItem:(id)arg1 previewItemAtPoint:(struct CGPoint)arg2;
- (void)immediateActionRecognizerWillPrepare:(id)arg1;
- (void)_uninstallPreviewGestureRecognizer;
- (void)_installPreviewGestureRecognizer;
- (void)tapToLoadViewWasTapped:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)_highlightRecognized:(id)arg1;
- (void)_cancelActiveHighlight;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_addHighlightRecognizerToView:(id)arg1;
- (void)_addTapRecognizerToView:(id)arg1;
@property(nonatomic, setter=_setDisablePreviewGesture:) BOOL _disablePreviewGesture; // @synthesize _disablePreviewGesture;
@property(nonatomic, setter=_setDisableHighlightGesture:) BOOL _disableHighlightGesture; // @synthesize _disableHighlightGesture;
- (void)_rebuildGestureRecognizersIfNeeded;
- (void)_uninstallTapGestureRecognizers;
- (void)_uninstallHighlightGestureRecognizers;
- (void)_installTapGestureRecognizers;
- (void)_installHighlightGestureRecognizers;
@property(readonly, nonatomic) struct CGRect _primaryCaptionBarFrame;
- (struct CGSize)_layoutLinkViewForSize:(struct CGSize)arg1 applyingLayout:(BOOL)arg2;
- (id)_createQuotedTextView;
- (id)_createMediaView;
- (id)_videoViewConfiguration;
- (id)_createTapToLoadView;
- (id)_createMediaBottomCaptionBarView;
- (id)_createMediaTopCaptionBarView;
- (id)_createCaptionBar;
- (void)_performDeferredLayout;
- (void)_invalidateLayout;
- (void)_layoutLinkView;
- (BOOL)_shouldUseAnimations;
- (void)_rebuildSubviewsWithAnimation:(BOOL)arg1;
- (id)_createComponents;
- (void)animateBackgroundColor;
- (void)animateFromOldFrame:(struct CGRect)arg1 oldMediaBackgroundFrame:(struct CGRect)arg2 oldCaptionBarView:(id)arg3;
- (void)animateInViews;
- (void)animateOutAndRemoveViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
@property(readonly, nonatomic) long long _style;
- (void)_setPresentationProperties:(id)arg1;
- (void)_computePresentationPropertiesFromMetadataIfNeeded;
- (void)_updateMetadataIsComplete;
- (void)_invalidatePresentationProperties;
- (void)_setAction:(id)arg1 withText:(id)arg2;
- (void)set_preferredSizeClass:(unsigned long long)arg1;
- (void)_setMultipleMetadata:(id)arg1;
- (void)_setMetadata:(id)arg1 isFinal:(BOOL)arg2;
@property(copy, nonatomic) LPLinkMetadata *metadata;
- (void)_setMetadataInternal:(id)arg1;
- (void)themeParametersDidChange;
- (void)viewDidChangeEffectiveAppearance;
- (void)_setupView;
- (void)setWantsLayer:(BOOL)arg1;
- (void)_fetchMetadata;
- (id)_fetchMetadataForURL:(id)arg1 withSubresources:(BOOL)arg2 completionHandler:(id)arg3;
- (void)_configureWithoutLoadingMetadataFromURLs:(id)arg1;
- (BOOL)_shouldClipAnimationView;
- (BOOL)_shouldApplyCornerRadius;
- (void)_commonInitWithURL:(id)arg1;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2;
- (id)initWithPresentationProperties:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)_initWithMultipleMetadata:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (id)_initWithMetadataLoadedFromURLs:(id)arg1;
- (id)initWithMetadataLoadedFromURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end
