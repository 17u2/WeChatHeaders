//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSData, NSDictionary, WCPayExtensionInfo;

@interface WCPaySynthesizeSpeechMsg : MMObject
{
    WCPayExtensionInfo *m_extensionInfo;
    NSDictionary *m_payload;
    unsigned long long m_speechFormat;
    NSData *m_synthesizeSpeechData;
}

+ (id)speechMsgWithMsgType:(id)arg1 extensionInfo:(id)arg2 payload:(id)arg3;
+ (id)speechMsgWithWCPayExtensionInfo:(id)arg1;
+ (id)speechMsgWithPayload:(id)arg1;
@property(readonly, nonatomic) NSData *m_synthesizeSpeechData; // @synthesize m_synthesizeSpeechData;
@property(readonly, nonatomic) WCPayExtensionInfo *m_extensionInfo; // @synthesize m_extensionInfo;
@property(readonly, nonatomic) NSDictionary *m_payload; // @synthesize m_payload;
@property(readonly, nonatomic) unsigned long long m_speechFormat; // @synthesize m_speechFormat;
- (void).cxx_destruct;
- (void)reportCgiCostTime:(unsigned int)arg1;
- (void)reportKVForegroundPlaySoundSuccess;
- (void)reportKVPlaySoundFail;
- (void)reportKVPushSuccess;
- (void)reportIdKeyGetVoiceReqCgiError;
- (void)reportIdKeyGetVoiceReqLocalNetWorkError;
- (void)reportIdKeyGetVoiceReqSuccess;
- (void)reportIdKeyPlaySoundFailed;
- (void)reportIdKeyPlaySoundSuccess;
- (void)reportIdKeyGetVoiceReq;
- (id)soundNameOfSwitchClose;
- (id)soundNameOfSwitchOpen;
- (id)frontPartSoundPath;
- (_Bool)isSwitchOpen;
- (unsigned int)getCgiCmd;
- (_Bool)setVoiceResponse:(id)arg1;
- (id)getVoiceRequest;
- (id)getLocalNotificationInfo:(_Bool)arg1;
- (void)setPayloadWithLocalPush:(id)arg1;
- (id)initWithExtensionInfo:(id)arg1 payload:(id)arg2;
- (id)init;

@end

