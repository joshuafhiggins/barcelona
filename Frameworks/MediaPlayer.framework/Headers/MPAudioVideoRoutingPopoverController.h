//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPopoverController.h>

#import <MediaPlayer/MPAVRoutingViewControllerDelegate-Protocol.h>

@class MPAVRoutingViewController, NSString;

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate>
{
    int _airPlayPasswordAlertDidAppearToken;
    _Bool _airPlayPasswordAlertDidAppearTokenIsValid;
    _Bool _mirroringIncluded;
    MPAVRoutingViewController *_routingViewController;
    _Bool _mirroringOnly;
}


@property(nonatomic) _Bool mirroringOnly; // @synthesize mirroringOnly=_mirroringOnly;
- (void)routingViewControllerDidUpdateContents:(id)arg1;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (id)routingController;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithType:(long long)arg1 includeMirroring:(_Bool)arg2;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

