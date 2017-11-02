//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EnterpriseBrandContactSelectViewControllerDelegate.h"
#import "EnterpriseSessionSelectViewControllerDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"

@class EnterpriseConnectorContext, JSEvent, NSString, ShareMessageConfirmLogicHelper;

@interface EnterpriseConnectorLogic : NSObject <EnterpriseBrandContactSelectViewControllerDelegate, EnterpriseSessionSelectViewControllerDelegate, ShareMessageConfirmLogicHelperDelegate>
{
    EnterpriseConnectorContext *_context;
    NSString *_scopeBrand;
    NSString *_targetBrand;
    NSString *_targetEnterpriseChat;
    ShareMessageConfirmLogicHelper *_jsSendAppMsgHelper;
    JSEvent *_jsEvent;
    id <EnterpriseConnectorLogicDelegate> delegate;
}

@property(nonatomic) __weak id <EnterpriseConnectorLogicDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)callDelegateConnectFail;
- (void)callDelegateConnectSucceed;
- (void)errorConnect;
- (void)cancelConnect;
- (_Bool)isSendAppMessage:(id)arg1;
- (_Bool)isSendEnterpriseChat:(id)arg1;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)onEnterpriseCancelSelectBrand:(id)arg1;
- (void)onEnterpriseSelectBrandContact:(id)arg1 viewController:(id)arg2;
- (void)OnEnterpriseCancelSelectSession:(id)arg1;
- (void)OnEnterpriseSelectSession:(id)arg1 viewController:(id)arg2;
- (_Bool)checkTarget;
- (_Bool)hasEnterpriseChatContext;
- (void)connectWithMsgWrap:(id)arg1 extraData:(id)arg2;
- (void)clearTarget;
- (id)getContext;
- (void)useContextAsTarget;
- (void)selectTargetInScope:(id)arg1 viewController:(id)arg2;
- (id)initWithContextBrand:(id)arg1 contextEnterpriseChat:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

