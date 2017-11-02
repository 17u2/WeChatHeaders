//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMImageLoaderObserver.h"
#import "MMService.h"

@class GameCenterMsgDb, NSString;

@interface GameCenterMsgMgr : MMService <MMService, IMsgExt, MMImageLoaderObserver>
{
    _Bool shouldClearDb;
    _Bool shouldClearNotify;
    GameCenterMsgDb *_db;
}

@property(retain, nonatomic) GameCenterMsgDb *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (void)wepkgEndWith:(id)arg1 bSuccess:(_Bool)arg2;
- (void)onWekgOperateSuccess:(id)arg1;
- (void)reportCoverNotify:(id)arg1 OldMsg:(id)arg2 NewCoverOld:(_Bool)arg3;
- (void)statMsgReceived:(id)arg1;
- (_Bool)clearMsgDb:(id)arg1;
- (void)clearMsgList;
- (void)clearAllRedDot;
- (void)clearPushNewAllRedDot;
- (id)getMsgDbModelList;
- (id)getMsgDbModelByLocalId:(unsigned int)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (_Bool)isEntryIconDownloading:(unsigned int)arg1;
- (_Bool)downloadEntryIconIfNeed:(id)arg1;
- (_Bool)urlSameWithFindFriendEntry:(id)arg1 DownloadTime:(int *)arg2 LocalId:(unsigned int *)arg3;
- (void)onServiceReloadData;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (int)getDownloadTime:(unsigned int)arg1;
- (_Bool)setDownloadTime:(unsigned int)arg1 DownloadTime:(int)arg2;
- (id)getDownloadTimeKey:(unsigned int)arg1;
- (_Bool)setKeyAtPosition:(id)arg1 Value:(unsigned int)arg2;
- (_Bool)clearKeyAtPosition:(id)arg1;
- (unsigned int)getKeyAtPosition:(id)arg1;
- (id)getMsgWithLocalId:(unsigned int)arg1;
- (_Bool)waitingForWePkgDownload:(id)arg1;
- (id)getNotifyWithKey:(id)arg1;
- (_Bool)canClearMsgNotify:(unsigned int)arg1;
- (_Bool)underWeakNetStrategy:(id)arg1;
- (_Bool)deleteMsgBeforeTimeStamp:(unsigned int)arg1;
- (_Bool)deleteMsgByLocalId:(int)arg1;
- (_Bool)deleteAllMsg;
- (_Bool)setMsgCenterAllRead;
- (id)getMsgCenterListForJsApi:(int)arg1 lastLocalId:(int)arg2 onlyUnRead:(_Bool)arg3 maxCount:(int)arg4;
- (id)getMsgCenterList:(int)arg1 maxCount:(int)arg2;
- (id)getMsgCenterReadListBefore:(unsigned int)arg1;
- (id)getMsgCenterUnreadList;
- (_Bool)clearGameCenterGiftRedDot;
- (_Bool)clearGameCenterMsgCenterAllRedDot;
- (_Bool)clearGameCenterH5FloatLayer:(unsigned int)arg1;
- (_Bool)clearGameCenterBubble:(unsigned int)arg1;
- (_Bool)clearFindFriendEntry;
- (unsigned int)getLastMsgKey;
- (id)getGameCenterGiftRedDot;
- (id)getGameCenterMsgCenterRedDot;
- (id)getGameCenterH5FloatLayer;
- (id)getGameCenterBubble;
- (id)getFindFriendEntryNotify;
- (_Bool)coverNotify:(id)arg1;
- (_Bool)shouldCoverNotify:(id)arg1;
- (_Bool)appendUserInfoToMsg:(id)arg1 WithXmlSection:(id)arg2;
- (_Bool)replaceJumpInfoSection:(id)arg1 JumpInfoSection:(id)arg2;
- (_Bool)refreshJumpInfoXmlSection:(id)arg1;
- (_Bool)mergeJumpInfo:(id)arg1 JumpInfoDic:(id)arg2;
- (_Bool)mergeUserInfo:(id)arg1 DbMsg:(id)arg2 UserJumpInfoDic:(id)arg3;
- (void)filterUserInfoList:(id)arg1 DbMsg:(id)arg2;
- (_Bool)mergeOriginXmlFromDB:(id)arg1;
- (unsigned int)saveMsg:(id)arg1;
- (void)wePkgMsgReceived:(struct XmlReaderNode_t *)arg1;
- (void)notifyMsgReceived:(id)arg1 RootNode:(struct XmlReaderNode_t *)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

