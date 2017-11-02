//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMidasIAPMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class MMLoadingView, MidasIAPPayRequest, NSString, UIViewController, WAIAPPayRequset;

@interface WAIAPManager : MMService <IMidasIAPMgrExt, PBMessageObserverDelegate, MMService>
{
    _Bool _isPaying;
    WAIAPPayRequset *_curReq;
    MidasIAPPayRequest *_curMidasReq;
    MMLoadingView *_loadingView;
    UIViewController *_contextVC;
    double _launchPayStartTime;
    double _requestCurrencyStartTime;
}

@property(nonatomic) double requestCurrencyStartTime; // @synthesize requestCurrencyStartTime=_requestCurrencyStartTime;
@property(nonatomic) double launchPayStartTime; // @synthesize launchPayStartTime=_launchPayStartTime;
@property(nonatomic) _Bool isPaying; // @synthesize isPaying=_isPaying;
@property(nonatomic) __weak UIViewController *contextVC; // @synthesize contextVC=_contextVC;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MidasIAPPayRequest *curMidasReq; // @synthesize curMidasReq=_curMidasReq;
@property(retain, nonatomic) WAIAPPayRequset *curReq; // @synthesize curReq=_curReq;
- (void).cxx_destruct;
- (void)reportIAPPayFail;
- (void)reportOrderFail;
- (void)reportRequestCurrencyCostTime;
- (void)reportPaySuccessCostTime;
- (void)reportIAPPayErr:(long long)arg1;
- (void)reportReqCurrencyErr:(long long)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onPayFail:(id)arg1 errInfo:(id)arg2;
- (void)onPaySuccess:(id)arg1;
- (void)onWAIAPReqFail:(id)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
- (void)hideLoadingView;
- (void)handleOrderResp:(id)arg1;
- (void)orderIAPPay:(id)arg1;
- (void)requestCurrencySymbol;
- (void)launchPay:(id)arg1 contextVC:(id)arg2;
- (void)resetPayState;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

