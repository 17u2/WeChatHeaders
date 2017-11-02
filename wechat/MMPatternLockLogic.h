//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMPatternLockMgrExt.h"
#import "MMPatternLockViewControllerDelegate.h"
#import "WCPayPayPwdViewControllerDelegate.h"

@class MMPatternLockViewController, MMUINavigationController, NSString;

@interface MMPatternLockLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, MMPatternLockViewControllerDelegate, MMPatternLockMgrExt>
{
    _Bool _isNeedOut2BizMain;
    _Bool _isPresent;
    _Bool _isCancel;
    id <MMPatternLockLogicDelegate> _delegate;
    long long _curScene;
    NSString *_userToken;
    NSString *_oldHash;
    MMPatternLockViewController *_lockViewController;
    MMUINavigationController *_enteranceViewController;
}

@property(retain, nonatomic) MMUINavigationController *enteranceViewController; // @synthesize enteranceViewController=_enteranceViewController;
@property(retain, nonatomic) MMPatternLockViewController *lockViewController; // @synthesize lockViewController=_lockViewController;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(retain, nonatomic) NSString *oldHash; // @synthesize oldHash=_oldHash;
@property(nonatomic) _Bool isNeedOut2BizMain; // @synthesize isNeedOut2BizMain=_isNeedOut2BizMain;
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(nonatomic) long long curScene; // @synthesize curScene=_curScene;
@property(nonatomic) __weak id <MMPatternLockLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onVerifyPatternLockPwdFail;
- (void)onVerifyPatternLockPwdError;
- (void)onVerifyPatternLockPwdCorrect;
- (void)onModifyPatternLockPwdFail;
- (void)onModifyPatternLockPwdSuccess;
- (void)onClosePatternLockPwdFail;
- (void)onClosePatternLockPwdSuccess;
- (void)onSetupNewPatternLockPwdFail;
- (void)onSetupNewPatternLockPwdSuccess;
- (_Bool)needBlockViewControllerLeftBarbuttonItemInEnteranceScene;
- (void)onPressBackOnPresnetedLockVC;
- (_Bool)isNeedSvrVerify;
- (void)onClosePatternLockPwdWithPatternHash:(id)arg1;
- (void)onModifyPatternLockWithNewPatternHash:(id)arg1;
- (void)onPatternLockVerifyPatternLockPwdWithPatternHash:(id)arg1;
- (void)onPatternLockSetupNewWithPatternHash:(id)arg1;
- (void)onPatternLockViewControllerDidErrorBeyondLimit;
- (void)onPatternLockViewControllerDidForgetPwd;
- (void)onPatternLockViewControllerDidOperateSuccess;
- (void)onPatternLockViewControllerDidOperateCancel;
- (void)goBack2EnteranceViewController;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)onPayPasswordErrorAlertViewDismiss:(id)arg1;
- (void)onAlertResetPwd:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1 andRetToken:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)OnAlertGiveUpLogic;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)showGiveUpLogicAlert;
- (void)handlePatternLockEnterUnNeedPwd;
- (void)handlePatternLockBlock;
- (void)handlePatternLockEnterance;
- (void)handlePatterLockClose;
- (void)handlePatternLockModify;
- (void)handlePatternLockForget;
- (void)handlePatternLockSetup;
- (void)showPatternLockViewControllerIsPresnet:(_Bool)arg1;
- (void)onVerifyPayPwdSuccess;
- (void)showWCPayPwdViewController;
- (_Bool)checkIsPatternLockBlock;
- (void)startLogic;
- (void)initDataWithPatternScene:(long long)arg1;
- (id)initWithPatternLockScene:(long long)arg1 andDelegate:(id)arg2 isPresent:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

