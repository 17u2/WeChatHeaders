//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "INewABTestMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CMMDB, NSDate, NSRecursiveLock, NSString, OplogDataLogic;

@interface NewSyncService : MMService <INewABTestMgrExt, MMKernelExt, MMService, MessageObserverDelegate, PBMessageObserverDelegate>
{
    _Bool m_bNeedSync;
    _Bool m_bHasSync;
    _Bool m_bHasInit;
    unsigned int m_uiSelector;
    unsigned int m_uiSyncScene;
    unsigned int m_uiSyncContinueCount;
    NSString *m_lastSyncKeyMd5;
    NSDate *m_tLastNotify;
    NSDate *m_tLastLongConnDisconnect;
    CMMDB *m_oMMDB;
    NSString *m_nsDocPath;
    NSRecursiveLock *m_oLock;
    NSRecursiveLock *m_oHandleSyncLock;
    id <NotifyFromEventDelegate> m_delSyncHandler;
    OplogDataLogic *m_oplogData;
    _Bool m_bNeedSyncOplog;
    _Bool m_bSyncOplog;
    _Bool m_bSyncOpError;
    _Bool m_bIsSyncPause;
    _Bool m_bIsSyncing;
    _Bool m_bNewInitUsePBEvent;
    _Bool m_bNewSyncUsePBEvent;
    _Bool _m_bFirstSyncAfterBgfgChange;
}

@property _Bool m_bFirstSyncAfterBgfgChange; // @synthesize m_bFirstSyncAfterBgfgChange=_m_bFirstSyncAfterBgfgChange;
@property unsigned int m_uiSyncScene; // @synthesize m_uiSyncScene;
@property _Bool m_bHasSync; // @synthesize m_bHasSync;
@property _Bool m_bNeedSync; // @synthesize m_bNeedSync;
- (void).cxx_destruct;
- (_Bool)handleBatchMessages:(id)arg1 ignoreSession:(_Bool)arg2;
- (void)makeSyncResume;
- (void)makeSyncPause;
- (unsigned int)StartOplog:(unsigned int)arg1 Oplog:(id)arg2;
- (void)HandleOplog:(id)arg1 Event:(unsigned int)arg2;
- (void)NeedToSyncOplog;
- (void)checkSyncOplog;
- (_Bool)InsertOplog:(unsigned int)arg1 Oplog:(id)arg2 Sync:(_Bool)arg3;
- (void)startSyncOplog;
- (void)HandleNewSyncPushNew:(id)arg1;
- (void)HandleSyncResp:(id)arg1 handleResult:(_Bool)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callExtensionByMessage:(unsigned int)arg1 MessageInfo:(id)arg2;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (_Bool)HandleSyncResp:(id)arg1 Push:(_Bool)arg2 ShowPush:(_Bool)arg3 Scene:(unsigned int)arg4;
- (void)HandleNewSyncPush:(id)arg1;
- (_Bool)CheckSelector:(unsigned int)arg1;
- (void)SetSelector:(unsigned int)arg1;
- (unsigned int)GetSelector;
- (void)AfterManualAuthNotifySync;
- (_Bool)VOIPPushAwakeToSync;
- (_Bool)BackGroundFetchToSync;
- (void)ProcessStartSync;
- (void)BackGroundToForeGroundSync;
- (void)ApnsNotifySync;
- (void)NeedToSync;
- (_Bool)NotifyToSync;
- (unsigned int)creatPBNewSyncEvent:(unsigned int)arg1;
- (_Bool)InternalCreateSync:(unsigned int)arg1;
- (_Bool)StartNewInit:(unsigned int)arg1;
- (void)onWillSuspend;
- (void)onAuthOKWithShowStyle:(id)arg1;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)SetLastLongConnDisconectTime:(id)arg1;
- (void)SetLastNotifyTime:(id)arg1;
- (_Bool)IsSyncing;
- (void)InitDB:(id)arg1 Lock:(id)arg2 DocPath:(id)arg3 SyncHandlerDelegate:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

