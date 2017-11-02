//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXIAudioPlayDelegate.h"

@class NSMutableArray, NSString;

@interface TXCAudioPlayer : NSObject <TXIAudioPlayDelegate>
{
    NSMutableArray *_playPackets;
    struct TXCAudioSpeeder *_audioSpeeder;
    struct TXCPlayProcessor *_audioProcessor;
    struct TXCAudioPlayerCallback *_playerCallback;
    struct TXCMutex _audioPlayLock;
    long long _audioType;
    long long _cacheDuration;
    _Bool _enableAEC;
    _Bool _isHWAcceleration;
    _Bool _autojustCache;
    _Bool _isRealPlay;
    _Bool _canSpeed;
    _Bool _isPlaying;
    _Bool _isPause;
    _Bool _isMute;
    float _playRate;
    unsigned int _playCache;
    float _cacheTime;
    float _autoAdjustMaxCache;
    float _autoAdjustMinCache;
    id <TXIAudioPlayDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
}

+ (void)setAudioMode:(long long)arg1;
@property _Bool isMute; // @synthesize isMute=_isMute;
@property(readonly) _Bool isPause; // @synthesize isPause=_isPause;
@property(readonly) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool canSpeed; // @synthesize canSpeed=_canSpeed;
@property(nonatomic) _Bool isRealPlay; // @synthesize isRealPlay=_isRealPlay;
@property(nonatomic) float autoAdjustMinCache; // @synthesize autoAdjustMinCache=_autoAdjustMinCache;
@property(nonatomic) float autoAdjustMaxCache; // @synthesize autoAdjustMaxCache=_autoAdjustMaxCache;
@property(nonatomic) _Bool autojustCache; // @synthesize autojustCache=_autojustCache;
@property(nonatomic) float cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) __weak id <TXIAudioPlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isHWAcceleration; // @synthesize isHWAcceleration=_isHWAcceleration;
@property(nonatomic) unsigned int playCache; // @synthesize playCache=_playCache;
@property(nonatomic) float playRate; // @synthesize playRate=_playRate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getReportInfo;
- (id)queryData;
- (long long)stopPlay;
- (long long)resetPlay;
- (long long)resumePlay;
- (long long)pausePlay;
- (long long)playAudio:(id)arg1;
- (long long)startPlay;
@property(readonly, nonatomic) long long cacheDuration;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

