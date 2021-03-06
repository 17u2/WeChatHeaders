//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "IDownloadImageExt.h"
#import "IMMAssetICloudExt.h"
#import "IMessageWrapImgExt.h"

@class ImageMessageViewModel, MMLoadingView, NSString, UIImageView, UILabel, YYAsyncImageView;

@interface ImageMessageCellView : CommonMessageCellView <IDownloadImageExt, IMessageWrapImgExt, IMMAssetICloudExt>
{
    YYAsyncImageView *m_imageView;
    UIImageView *m_imageDownloadFailView;
    MMLoadingView *m_imageLoadingView;
    _Bool m_bhasDownloadComplete;
    UIImageView *m_icloudImageIcon;
    UIImageView *m_icloudBackground;
    UILabel *m_icloudLabel;
}

- (void).cxx_destruct;
- (void)logExpLogWhenShowImage;
- (void)onAppear;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (id)viewControllerForPreview:(id)arg1;
- (_Bool)canPeek;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)OnDownloadImageOk:(id)arg1;
- (void)onThumbImageSave:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onTouchEnded;
- (void)onEdit:(id)arg1;
- (void)showImageNeedEdit:(_Bool)arg1;
- (void)showImage;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (void)removeICloudIcon;
- (void)addICloudIcon;
- (void)addLoadingView;
- (void)addDownloadFailView;
- (id)getCoverImage;
- (void)initImageView;
- (struct CGRect)showRectForMenuController;
- (id)displayViewForImageBrowser;
- (void)updateStatus;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) ImageMessageViewModel *viewModel; // @dynamic viewModel;

@end

