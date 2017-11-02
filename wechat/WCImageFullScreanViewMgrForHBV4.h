//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WCImageFullScreenWindowDelegate.h"

@class NSString, WCImageFullScreenWindowForHBV4;

@interface WCImageFullScreanViewMgrForHBV4 : MMService <MMService, WCImageFullScreenWindowDelegate>
{
    WCImageFullScreenWindowForHBV4 *m_view;
}

- (void).cxx_destruct;
- (void)onWindowAnimationHide;
- (void)onWindowAnimationWillHide;
- (void)showErrorTip:(id)arg1;
- (void)stopLoading;
- (void)startLoadingBlocked;
- (void)cancelCaptureFakeWindow;
- (void)captureFakeWindow;
- (_Bool)isWindowShown;
- (void)animationHideToLeft;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (void)animationShowWithHint:(id)arg1;
- (void)forceHideWindow;
- (id)getWCImageFullScreenView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

