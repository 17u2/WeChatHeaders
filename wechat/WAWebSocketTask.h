//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SRWebSocketDelegate.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, SRWebSocket, WAWebSocketTaskDelayReleaseWrap;

@interface WAWebSocketTask : NSObject <SRWebSocketDelegate>
{
    NSString *_appID;
    NSString *_taskID;
    _Bool _isCompatibleSingleConnection;
    NSObject<OS_dispatch_queue> *_workerQueue;
    SRWebSocket *_websocket;
    _Bool _hasCalledCloseTask;
    id <WAWebSocketTaskDelegate> _delegate;
    WAWebSocketTaskDelayReleaseWrap *_weakDelayReleaseWrap;
    NSObject<OS_dispatch_source> *_delayReleaseTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *delayReleaseTimer; // @synthesize delayReleaseTimer=_delayReleaseTimer;
@property(nonatomic) __weak WAWebSocketTaskDelayReleaseWrap *weakDelayReleaseWrap; // @synthesize weakDelayReleaseWrap=_weakDelayReleaseWrap;
@property(nonatomic) __weak id <WAWebSocketTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webSocket:(id)arg1 didReceiveMessageWithData:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessageWithString:(id)arg2;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocketDidOpen:(id)arg1;
- (void)callbackEndTask;
- (void)removeDelayReleaseWrap;
- (void)onDelayReleaseTimeout;
- (void)invalidateDelayReleaseTimer;
- (void)scheduleDelayReleaseTimer;
- (void)closeTaskWithReleaseImmediately:(_Bool)arg1;
- (void)closeWithCode:(long long)arg1 reason:(id)arg2 releaseImmediately:(_Bool)arg3;
- (id)certificateArrayFromDataList:(id)arg1;
- (_Bool)sendData:(id)arg1 getError:(id *)arg2;
- (_Bool)sendString:(id)arg1 getError:(id *)arg2;
- (void)closeWithCode:(long long)arg1 reason:(id)arg2;
- (void)closeWithReason:(id)arg1;
- (void)closeAndReleaseImmediately;
- (void)close;
- (void)openWithUrl:(id)arg1 config:(id)arg2 httpHeaders:(id)arg3 subProtocols:(id)arg4;
- (_Bool)isAvailable;
- (_Bool)isCompatibleSingleConnection;
- (id)getTaskID;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 taskID:(id)arg2 compatibleSingleConnection:(_Bool)arg3 workerQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

