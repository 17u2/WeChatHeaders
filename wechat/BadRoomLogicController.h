//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BadRoomMgrExt.h"
#import "PBMessageObserverDelegate.h"

@class CBaseContact, CMMDB, CMessageWrap, MMSessionInfo, NSRecursiveLock, NSString, ProtobufCGIWrap;

@interface BadRoomLogicController : NSObject <PBMessageObserverDelegate, BadRoomMgrExt>
{
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
    CBaseContact *m_contact;
    MMSessionInfo *m_sessionInfo;
    unsigned int m_lastDeleteSequence;
    unsigned int m_initialLastMsgSeq;
    CMessageWrap *m_currentBrokenMsg;
    CMessageWrap *m_nextBrokenMsg;
    unsigned int m_nextNewMessageToGet;
    unsigned int m_firstDownGetSeq;
    _Bool m_bHasMoreNewMsg;
    _Bool m_bGettingMsg;
    _Bool m_bHasDownBrokeMsg;
    CMessageWrap *m_firstUnreadMsg;
    ProtobufCGIWrap *m_cgiWrap;
    _Bool m_hasExitRoom;
    _Bool m_hasGetFirstPage;
    _Bool _m_hasIniitialUnread;
    id <BadRoomLogicControllerDelegate> _m_delegate;
}

+ (void)clearUnReadCount:(id)arg1 clearUndeliverCount:(_Bool)arg2;
+ (void)clearSession:(id)arg1;
+ (void)clearUnReadCount:(id)arg1;
+ (void)updateSessionDB:(id)arg1;
@property(nonatomic) _Bool m_hasIniitialUnread; // @synthesize m_hasIniitialUnread=_m_hasIniitialUnread;
@property(nonatomic) __weak id <BadRoomLogicControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) unsigned int m_firstDownGetSeq; // @synthesize m_firstDownGetSeq;
- (void).cxx_destruct;
- (_Bool)hasBadRoomUnread;
- (void)onDeleteSession:(id)arg1 lastSequence:(unsigned int)arg2;
- (void)onSilenceNotify:(id)arg1 msgSequence:(unsigned int)arg2;
- (id)changeToSysMsgIfRevoked:(id)arg1;
- (void)onGetRoomOldMsg:(id)arg1 continueFlag:(_Bool)arg2;
- (_Bool)filterMsgList:(id)arg1;
- (_Bool)filterDownMsgList:(id)arg1;
- (void)stopGettingDownForUnreadMsgs;
- (void)onGetRoomNewMsg:(id)arg1 continueFlag:(_Bool)arg2 isFirstUnRead:(_Bool)arg3;
- (void)batchAddMsg:(id)arg1 ignoreSession:(_Bool)arg2;
- (void)exitRoom;
- (void)getMoreMsg;
- (_Bool)HandleGetChatRoomMsgResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getChatRoomMsg:(unsigned int)arg1 getOld:(_Bool)arg2;
- (id)getFirstUnreadMsg;
- (void)onEnterRoom:(id)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

