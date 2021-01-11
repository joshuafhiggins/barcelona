//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPSwipableView, UIEvent, UIView, UIWindow;

@protocol MPSwipableViewDelegate

@optional
- (void)swipableViewHadActivity:(MPSwipableView *)arg1;
- (void)swipableView:(MPSwipableView *)arg1 pinchedToScale:(double)arg2 withVelocity:(double)arg3;
- (void)swipableView:(MPSwipableView *)arg1 tappedWithCount:(unsigned long long)arg2;
- (void)swipableView:(MPSwipableView *)arg1 tappedWithCount:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3;
- (void)swipableView:(MPSwipableView *)arg1 swipedInDirection:(long long)arg2;
- (UIView *)swipableView:(MPSwipableView *)arg1 overrideHitTest:(struct CGPoint)arg2 withEvent:(UIEvent *)arg3;
- (void)swipableView:(MPSwipableView *)arg1 willMoveToWindow:(UIWindow *)arg2;
- (void)swipableView:(MPSwipableView *)arg1 didMoveToSuperview:(UIView *)arg2;
- (void)swipableView:(MPSwipableView *)arg1 willMoveToSuperview:(UIView *)arg2;
@end

