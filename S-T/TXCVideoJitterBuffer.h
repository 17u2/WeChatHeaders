//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface TXCVideoJitterBuffer : NSObject
{
    NSMutableArray *_nalArray;
    long long _bufferFrames;
    long long _fps;
    unsigned long long _lastPlayTime;
    long long _totalFPS;
    long long _fpsCount;
    unsigned long long _lastFrameTS;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _working;
    double _interval;
    long long _fixTime;
    long long _cacheTimeMS;
    long long _speedTimeMS;
    id <TXIVideoJitterBufferDelegate> _delegate;
}

@property(nonatomic) __weak id <TXIVideoJitterBufferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)calcFPS:(unsigned long long)arg1;
- (id)queryNAL;
- (long long)getVideoFrameRenderInterval;
- (long long)getDecoderFrames;
- (long long)getBufferFrames;
- (long long)getBufferDuration;
- (void)nalConsumed:(long long)arg1;
- (id)pullNAL;
- (void)pushNAL:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)clear;
- (void)stop;
- (void)start;
- (void)scheduleQuery;
- (id)init;

@end
