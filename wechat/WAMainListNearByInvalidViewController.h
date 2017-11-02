//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class UILabel, UIView;

@interface WAMainListNearByInvalidViewController : MMUIViewController
{
    unsigned long long _invalidType;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) unsigned long long invalidType; // @synthesize invalidType=_invalidType;
- (void).cxx_destruct;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)onReturn;
- (void)initContentView;
- (void)updateNavigationItems;
- (void)initCustomNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithInvalidType:(unsigned long long)arg1;

@end

