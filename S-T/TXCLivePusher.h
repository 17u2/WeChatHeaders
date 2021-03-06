//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXIAudioRecordDelegate.h"
#import "TXICameraCapturerDelegate.h"
#import "TXINotifyDelegate.h"
#import "TXIQoSDelegate.h"
#import "TXIUploaderDelegate.h"
#import "TXIVideoEncoderDelegate.h"
#import "TXIVideoPreprocessorDelegate.h"

@class NSDictionary, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSThread, TXCCameraCapturer, TXCQoS, TXCRenderView, TXCStreamUploader, TXCVideoEncoder, TXCVideoPreprocessor, TXCameraFocusSquare, TXLivePushStatsCollection, TXReplayKitMixer, TXSNALPacket, UIImage;

@interface TXCLivePusher : NSObject <TXIAudioRecordDelegate, TXICameraCapturerDelegate, TXIVideoPreprocessorDelegate, TXIVideoEncoderDelegate, TXIUploaderDelegate, TXIQoSDelegate, TXINotifyDelegate>
{
    TXCCameraCapturer *_cameraCapturer;
    TXCStreamUploader *_streamUploader;
    TXCQoS *_qos;
    TXLivePushStatsCollection *_pushStats;
    TXCameraFocusSquare *_focusSquare;
    TXReplayKitMixer *_rpMixer;
    NSDictionary *_networkStatus;
    NSObject<OS_dispatch_queue> *_pusherQueue;
    unsigned long long _frameIndex;
    unsigned long long _pauseTS;
    NSMutableArray *_sampleBufferArray;
    NSThread *_sampleBufferLoopThread;
    _Bool _publishPaused;
    NSLock *_audioBufferLock;
    char *_audioBuffer;
    int _audioBufferOffset;
    _Bool _focusBySDK;
    _Bool _enableAudioRecord;
    _Bool _enableCameraCapturer;
    _Bool _frontCamera;
    _Bool _flashEnable;
    _Bool _enableVideoHWAcceleration;
    _Bool _enableAudioHWAcceleration;
    _Bool _autoSampleBufferSize;
    _Bool _enableAutoBitrate;
    _Bool _mirror;
    _Bool _mute;
    _Bool _enablePureAudioPush;
    _Bool _enableAudioPreview;
    _Bool _isPushing;
    _Bool _enableNearestIP;
    _Bool _realTimeMode;
    int _reverbType;
    int _rtmpChannelType;
    long long _audioSampleRate;
    long long _audioChannels;
    long long _beautyStyle;
    long long _beautyLevel;
    long long _whiteningLevel;
    long long _eyeScaleLevel;
    long long _faceScaleLevel;
    long long _ruddinessLevel;
    long long _faceVLevel;
    long long _chinLevel;
    long long _faceShortlevel;
    long long _noseSlimLevel;
    double _filterMixLevel;
    UIImage *_filterImage;
    NSString *_motionTemplate;
    NSString *_greenScreenFile;
    UIImage *_watermark;
    long long _videoBitrateFix;
    long long _videoBitrateMax;
    long long _videoBitrateMin;
    long long _videoResolution;
    long long _videoFPS;
    long long _videoEncodeGop;
    long long _connectRetryCount;
    long long _connectRetryInterval;
    long long _autoAdjustStrategy;
    long long _homeOrientation;
    long long _rotation;
    long long _pauseFPS;
    long long _pauseTime;
    id <TXINotifyDelegate> _notifyDelegate;
    id <TXICustomPreprocessDelegate> _customPreprocessDelegate;
    UIImage *_pauseImage;
    TXCVideoPreprocessor *_videoPreproccessor;
    NSObject<OS_dispatch_source> *_timer;
    TXSNALPacket *_backgroundNAL;
    TXCRenderView *_renderView;
    TXCVideoEncoder *_videoEncoder;
    struct CGPoint _watermarkPos;
    struct CGSize _sampleBufferSize;
    struct CGSize _videoSize;
}

@property(retain) TXCVideoEncoder *videoEncoder; // @synthesize videoEncoder=_videoEncoder;
@property(retain) TXCRenderView *renderView; // @synthesize renderView=_renderView;
@property(retain) TXSNALPacket *backgroundNAL; // @synthesize backgroundNAL=_backgroundNAL;
@property(retain) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain) TXCVideoPreprocessor *videoPreproccessor; // @synthesize videoPreproccessor=_videoPreproccessor;
@property(nonatomic) _Bool realTimeMode; // @synthesize realTimeMode=_realTimeMode;
@property(nonatomic) int rtmpChannelType; // @synthesize rtmpChannelType=_rtmpChannelType;
@property(nonatomic) _Bool enableNearestIP; // @synthesize enableNearestIP=_enableNearestIP;
@property(readonly, nonatomic) _Bool isPushing; // @synthesize isPushing=_isPushing;
@property(retain, nonatomic) UIImage *pauseImage; // @synthesize pauseImage=_pauseImage;
@property(nonatomic) __weak id <TXICustomPreprocessDelegate> customPreprocessDelegate; // @synthesize customPreprocessDelegate=_customPreprocessDelegate;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) long long pauseTime; // @synthesize pauseTime=_pauseTime;
@property(nonatomic) long long pauseFPS; // @synthesize pauseFPS=_pauseFPS;
@property(nonatomic) int reverbType; // @synthesize reverbType=_reverbType;
@property(nonatomic) _Bool enableAudioPreview; // @synthesize enableAudioPreview=_enableAudioPreview;
@property(nonatomic) _Bool enablePureAudioPush; // @synthesize enablePureAudioPush=_enablePureAudioPush;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long homeOrientation; // @synthesize homeOrientation=_homeOrientation;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) long long autoAdjustStrategy; // @synthesize autoAdjustStrategy=_autoAdjustStrategy;
@property(nonatomic) _Bool enableAutoBitrate; // @synthesize enableAutoBitrate=_enableAutoBitrate;
@property(nonatomic) long long connectRetryInterval; // @synthesize connectRetryInterval=_connectRetryInterval;
@property(nonatomic) long long connectRetryCount; // @synthesize connectRetryCount=_connectRetryCount;
@property(nonatomic) long long videoEncodeGop; // @synthesize videoEncodeGop=_videoEncodeGop;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) long long videoFPS; // @synthesize videoFPS=_videoFPS;
@property(nonatomic) _Bool autoSampleBufferSize; // @synthesize autoSampleBufferSize=_autoSampleBufferSize;
@property(nonatomic) struct CGSize sampleBufferSize; // @synthesize sampleBufferSize=_sampleBufferSize;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
@property(nonatomic) long long videoBitrateMin; // @synthesize videoBitrateMin=_videoBitrateMin;
@property(nonatomic) long long videoBitrateMax; // @synthesize videoBitrateMax=_videoBitrateMax;
@property(nonatomic) long long videoBitrateFix; // @synthesize videoBitrateFix=_videoBitrateFix;
@property(nonatomic) _Bool enableAudioHWAcceleration; // @synthesize enableAudioHWAcceleration=_enableAudioHWAcceleration;
@property(nonatomic) _Bool enableVideoHWAcceleration; // @synthesize enableVideoHWAcceleration=_enableVideoHWAcceleration;
@property(nonatomic) struct CGPoint watermarkPos; // @synthesize watermarkPos=_watermarkPos;
@property(retain, nonatomic) UIImage *watermark; // @synthesize watermark=_watermark;
@property(retain, nonatomic) NSString *greenScreenFile; // @synthesize greenScreenFile=_greenScreenFile;
@property(retain, nonatomic) NSString *motionTemplate; // @synthesize motionTemplate=_motionTemplate;
@property(retain, nonatomic) UIImage *filterImage; // @synthesize filterImage=_filterImage;
@property(nonatomic) double filterMixLevel; // @synthesize filterMixLevel=_filterMixLevel;
@property(nonatomic) long long noseSlimLevel; // @synthesize noseSlimLevel=_noseSlimLevel;
@property(nonatomic) long long faceShortlevel; // @synthesize faceShortlevel=_faceShortlevel;
@property(nonatomic) long long chinLevel; // @synthesize chinLevel=_chinLevel;
@property(nonatomic) long long faceVLevel; // @synthesize faceVLevel=_faceVLevel;
@property(nonatomic) long long ruddinessLevel; // @synthesize ruddinessLevel=_ruddinessLevel;
@property(nonatomic) long long faceScaleLevel; // @synthesize faceScaleLevel=_faceScaleLevel;
@property(nonatomic) long long eyeScaleLevel; // @synthesize eyeScaleLevel=_eyeScaleLevel;
@property(nonatomic) long long whiteningLevel; // @synthesize whiteningLevel=_whiteningLevel;
@property(nonatomic) long long beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) long long beautyStyle; // @synthesize beautyStyle=_beautyStyle;
@property(nonatomic) long long audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) long long audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) _Bool flashEnable; // @synthesize flashEnable=_flashEnable;
@property(nonatomic) _Bool frontCamera; // @synthesize frontCamera=_frontCamera;
@property(nonatomic) _Bool enableCameraCapturer; // @synthesize enableCameraCapturer=_enableCameraCapturer;
@property(nonatomic) _Bool enableAudioRecord; // @synthesize enableAudioRecord=_enableAudioRecord;
- (void).cxx_destruct;
- (_Bool)setBGMVolume:(float)arg1;
- (_Bool)setMicVolume:(float)arg1;
- (int)getMusicDuration:(id)arg1;
- (_Bool)resumeBGM;
- (_Bool)pauseBGM;
- (_Bool)stopBGM;
- (_Bool)playBGM:(id)arg1 withBeginNotify:(CDUnknownBlockType)arg2 withProgressNotify:(CDUnknownBlockType)arg3 andCompleteNotify:(CDUnknownBlockType)arg4;
- (_Bool)playBGM:(id)arg1;
- (void)onRecordPcmData:(char *)arg1 dataLen:(unsigned int)arg2 timestamp:(unsigned long long)arg3;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)onEnableDropStatusChanged:(_Bool)arg1;
- (void)onEncoderParamsChangedBitrate:(long long)arg1 width:(long long)arg2 height:(long long)arg3;
- (long long)onGetVideoDropCount;
- (long long)onGetVideoQueueCurrentCount;
- (long long)onGetVideoQueueMaxCount;
- (long long)onGetQueueOutputSize;
- (long long)onGetQueueInputSize;
- (long long)onGetEncoderRealBitrate;
- (void)onEncodeNAL:(id)arg1 ErrorCode:(int)arg2;
- (void)onTextureDestoryed;
- (void)onDetectFacePoints:(id)arg1;
- (void)didProcessFrame:(struct opaqueCMSampleBuffer *)arg1 timeStamp:(unsigned long long)arg2;
- (unsigned int)willAddWatermark:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)onRecordEncData:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)onCameraCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 correctAngle:(long long)arg2 frontCamera:(_Bool)arg3 timestamp:(unsigned long long)arg4;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)sendCustomPCMData:(char *)arg1 len:(unsigned int)arg2;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (void)setSendAudioSampleBufferMuted:(_Bool)arg1;
- (void)encodeFrame:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (void)setZoom:(double)arg1;
- (void)focusTap:(id)arg1;
- (void)setTouchFocus:(_Bool)arg1;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (id)getUrl;
- (void)resumePush;
- (void)pausePush;
- (void)stopPush;
- (int)startPush:(id)arg1;
- (void)stopPreview;
- (int)startPreview:(id)arg1;
- (void)customSampleBufferLoopFun:(id)arg1;
- (void)stopCustomMode;
- (void)startCustomMode;
- (void)sendBackgroundNAL;
- (void)releaseEncoder;
- (void)initFocusSquareView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

