//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtobufEventHandler.h"

@class CMMDB, NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface SyncCmdHandler : ProtobufEventHandler
{
    NSMutableArray *m_arrMsgList;
    NSMutableDictionary *m_dicWebWxClearUnRead;
    NSMutableArray *m_arrContactList;
    NSMutableDictionary *m_dicChatroomMemberList;
    NSMutableArray *m_arrChatroomContactList;
    NSMutableArray *m_arrMsgDigest;
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
    _Bool _m_ignoreSession;
}

@property(nonatomic) _Bool m_ignoreSession; // @synthesize m_ignoreSession=_m_ignoreSession;
- (void).cxx_destruct;
- (void)HandleModUsrImg:(id)arg1;
- (void)BatchModChatroomMember;
- (void)BatchModContact;
- (id)HandleMemContactDetail:(id)arg1 isSimplify:(_Bool)arg2;
- (void)HandleModContact:(id)arg1;
- (_Bool)AddHelloMessageToDB:(id)arg1 HelloUser:(id)arg2 MsgWrap:(id)arg3 Des:(unsigned int)arg4 OpCode:(unsigned int)arg5 GetChangeDisplay:(_Bool *)arg6;
- (_Bool)AddHelloMsg:(id)arg1 HelloUser:(id)arg2 ChatName:(id)arg3 Des:(unsigned int)arg4 OpCode:(unsigned int)arg5 DBRet:(_Bool *)arg6 GetChangeDisplay:(_Bool *)arg7;
- (_Bool)HandleHelloMsg:(id)arg1 SpcialSession:(id)arg2 NotAddDBSession:(id)arg3 GetChangeDisplay:(_Bool *)arg4;
- (void)AddSpecialMsg:(id)arg1 ChatName:(id)arg2 MsgWrap:(id)arg3;
- (id)ParseMsgClusterType:(id)arg1;
- (void)ParseStatusNotify:(id)arg1 map:(id)arg2;
- (id)StatusNotifyWebWxClearUnRead:(struct XmlReaderNode_t *)arg1 msg:(id)arg2;
- (_Bool)BatchAddMsg:(_Bool)arg1 ShowPush:(_Bool)arg2;
- (_Bool)processSpecialMessage:(id)arg1;
- (_Bool)handleBatchMessages:(id)arg1;
- (_Bool)HandleBatch:(_Bool)arg1 ShowPush:(_Bool)arg2;
- (_Bool)handleCmds:(id)arg1 isFromPushData:(_Bool)arg2 showLocalPush:(_Bool)arg3;
- (id)init;

@end

