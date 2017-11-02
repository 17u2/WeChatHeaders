//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseChatCellView.h"

#import "UIViewForceTouchShakeProtocol.h"
#import "WCActionSheetDelegate.h"
#import "WCForceTouchPreviewProtocol.h"
#import "WCForceTouchTriggerLongPressProtocol.h"

@class BaseMessageViewModel, NSArray, NSString, UIImageView, UIView;

@interface BaseMessageCellView : BaseChatCellView <WCActionSheetDelegate, WCForceTouchTriggerLongPressProtocol, WCForceTouchPreviewProtocol, UIViewForceTouchShakeProtocol>
{
    NSArray *m_arrMenuItems;
    UIView *m_contentView;
    UIImageView *m_sendOKView;
    _Bool m_touchEnded;
    _Bool m_bDisableAllOperation;
    _Bool m_bIsLongPressHandled;
    _Bool m_isConverting3dTouchToLongPress;
}

- (void).cxx_destruct;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (_Bool)canPeek;
@property(readonly, nonatomic) __weak UIView *forceTouchShakeView;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchEnded;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)LongPressEvents;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isTouchInView:(id)arg1;
- (void)addSendOKView;
- (id)getContentView;
- (struct CGRect)showRectForMenuController;
- (id)displayViewForImageBrowser;
- (void)setDisableAllOperation;
- (void)showUIStatus;
- (void)hideUIStatus;
- (void)doFavorite;
- (void)doForward;
- (double)contentViewCenterY;
- (void)updateStatus;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)updateNodeStatus;
- (void)layoutContentView;
- (void)layoutFinished;
- (void)layoutInternal;
@property(nonatomic) _Bool highlighted;
- (void)dealloc;
- (void)onShowJSLogMenuItem:(id)arg1;
- (id)showJSLogMenuItem;
- (_Bool)canShowJSLogMenuItem;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)canShowMoreMenuItem;
- (void)onMore:(id)arg1;
- (id)moreMenuItem;
- (void)onRestore:(id)arg1;
- (id)restoreMenuItem;
- (_Bool)canShowShareMsgToOpenSDKMenuItem;
- (_Bool)canShowSendToDevices;
- (_Bool)canShowSendTo3rdApp;
- (void)onShareMsgToOpenSDK:(id)arg1;
- (id)shareMsgToOpenSDKMenuItem;
- (_Bool)canShowRevokeMsgMenuItem;
- (void)onRevokeMsg:(id)arg1;
- (id)revokeMsgMenuItem;
- (_Bool)canShowDeleteMenuItem;
- (void)onDelete:(id)arg1;
- (id)deleteMenuItem;
- (_Bool)canShowFavoriteMenuItem;
- (void)onFavorite:(id)arg1;
- (id)favoriteMenuItem;
- (_Bool)canShowForwardMenuItem;
- (void)onForward:(id)arg1;
- (id)forwardMenuItem;
- (_Bool)canShowScheduleMenuItem;
- (void)onSchedule:(id)arg1;
- (id)scheduleMenuItem;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)operationMenuItems;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (void)showOperationMenu;
- (id)generateOperationMenu;
- (struct CGRect)targetRectForMenuController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BaseMessageViewModel *viewModel; // @dynamic viewModel;

@end
