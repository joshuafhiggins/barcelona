//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class NSMutableDictionary, UIView;

@interface MPAVClippingTableView : UITableView
{
    UIView *_headerBackgroundView;
    UIView *_footerBackgroundView;
    NSMutableDictionary *_sectionBackgroundViews;
}


@property(retain, nonatomic) NSMutableDictionary *sectionBackgroundViews; // @synthesize sectionBackgroundViews=_sectionBackgroundViews;
@property(retain, nonatomic) UIView *footerBackgroundView; // @synthesize footerBackgroundView=_footerBackgroundView;
@property(retain, nonatomic) UIView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
- (id)_createBackgroundView;
- (id)backgroundViewForSection:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

