//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMComponent.h"

#import "IFavoritesExt.h"
#import "INetworkStatusMgrExt.h"

@class FavoritesItem, MMFavHeadComponent, MMFavImgComponent, MMFavNameComponent, MMFavTagComponent, MMFavThumbComponent, MMFavUrlComponent, MMFavVoiceComponent, MMUIImageView, NSString, UIImageView, UIView;

@interface MMFavCellComponent : MMComponent <IFavoritesExt, INetworkStatusMgrExt>
{
    MMFavHeadComponent *_headCom;
    MMFavTagComponent *_tagCom;
    MMFavNameComponent *_nameCom;
    MMFavThumbComponent *_thumbCom;
    MMFavUrlComponent *_urlCom;
    MMFavVoiceComponent *_voiceCom;
    MMFavImgComponent *_imgCom;
    MMUIImageView *m_selectedView;
    MMUIImageView *m_deselectedView;
    UIImageView *_failIcon;
    UIView *m_contentView;
    _Bool m_editing;
    id <MyFavoritesBaseCellDelegate> _favBaseCellDelegate;
    FavoritesItem *_favItem;
}

+ (_Bool)isUseNewUI;
+ (double)calHeightWithComData:(id)arg1;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(nonatomic) __weak id <MyFavoritesBaseCellDelegate> favBaseCellDelegate; // @synthesize favBaseCellDelegate=_favBaseCellDelegate;
- (void).cxx_destruct;
- (id)getIconView;
- (id)getThumbComponent;
- (void)OnStartDownloadFavoritesItem:(id)arg1;
- (void)OnStartUploadFavoritesItem:(id)arg1;
- (void)OnRestartAllUploadFailItems;
- (void)updateSyncStatus;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)changeEditingStatus:(_Bool)arg1 animated:(_Bool)arg2;
- (void)changeSelectStatu:(_Bool)arg1;
- (void)configSelectView;
- (void)OnHeadImgLongPress:(id)arg1;
- (void)configContentLayout;
- (_Bool)isPadStyle;
- (void)configFavCell;
- (void)setHighlightWord:(id)arg1 Detail:(id)arg2;
- (void)configVoiceComponent;
- (void)configImgComponent;
- (void)configThumbAndUrlComponent;
- (void)configTagComponent;
- (void)configHeadAndNameComponent;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

