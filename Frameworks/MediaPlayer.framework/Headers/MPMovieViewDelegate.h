//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPMovieView, UIView, UIWindow;

@protocol MPMovieViewDelegate

@optional
- (void)movieView:(MPMovieView *)arg1 willMoveToSuperview:(UIView *)arg2;
- (void)movieViewDidMoveToWindow:(MPMovieView *)arg1;
- (void)movieView:(MPMovieView *)arg1 willMoveToWindow:(UIWindow *)arg2;
@end

