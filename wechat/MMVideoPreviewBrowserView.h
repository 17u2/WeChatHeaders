//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "FullScreenGestureDelegate.h"
#import "IMMAssetICloudExt.h"
#import "MMAssetPickerBrowserViewProtocol.h"
#import "SightAssetPreviewViewDelegate.h"

@class AVAsset, MMAssetInfo, MMAssetPickerBrowserStateInfo, NSString, NSURL, SightAssetPreviewView, SightDraft, UIButton, UIImageView, UILabel, UIView, WXFullScreenGestureRecognizer;

@interface MMVideoPreviewBrowserView : MMUIScrollView <IMMAssetICloudExt, SightAssetPreviewViewDelegate, FullScreenGestureDelegate, MMAssetPickerBrowserViewProtocol>
{
    NSURL *m_originUrl;
    AVAsset *m_avAsset;
    NSURL *_videoOutputURL;
    SightDraft *_sightDraft;
    _Bool _isPlaying;
    _Bool _isSending;
    UIView *_maskView;
    SightAssetPreviewView *_playerView;
    UIButton *_playBigButton;
    UIImageView *m_icloudImageIcon;
    UILabel *m_icloudLabel;
    UIImageView *m_thumbImageView;
    WXFullScreenGestureRecognizer *_gestureView;
    id <MMImagePickerControlCenter> controlCenter;
    MMAssetInfo *assetInfo;
    id <MMAssetPickerBrowserViewDelegate> browserDelegate;
    MMAssetPickerBrowserStateInfo *m_stateInfo;
    id <WCDragToCloseDelegate> _touchDelegate;
}

@property(nonatomic) __weak id <WCDragToCloseDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(readonly, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo; // @synthesize stateInfo=m_stateInfo;
@property(nonatomic) __weak id <MMAssetPickerBrowserViewDelegate> browserDelegate; // @synthesize browserDelegate;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
- (void).cxx_destruct;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
@property(nonatomic) _Bool enableDragToClose;
- (void)onAssetVideoDonwloadFailed:(id)arg1;
- (void)onAssetVideoDownloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)systemResigned:(id)arg1;
- (void)sightAssetPreviewView:(id)arg1 didFailWithError:(id)arg2;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(id)arg1;
- (void)sightAssetPreviewViewDidFinishPreparing:(id)arg1;
- (void)OnPlay:(id)arg1;
- (void)changePlayStatus:(_Bool)arg1 needNotify:(_Bool)arg2;
- (void)checkVideo;
- (void)onGetVideoAssetFinishedWithAsset:(id)arg1 url:(id)arg2;
- (void)onBeginToChangePage;
- (void)loadAsset;
- (void)showThumbImageViewWithThumb:(id)arg1;
- (void)initMaskView;
- (void)initPlayButton;
- (void)initPlayerView;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
@property(readonly, nonatomic) SightAssetPreviewView *playerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

