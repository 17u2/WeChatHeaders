//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSJSEventDelegate.h"
#import "WCCanvasDynamicDataLoaderDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"
#import "WSActionSheetDelegate.h"
#import "WSMusicDelegate.h"

@class FTSWebSearchMgr, MMUIViewController, NSDictionary, NSString, WAWebSearchMgr, WCCanvasDynamicDataLoader, WSActionSheet;

@interface WSJSEventHandler : NSObject <WCCommentDetailViewControllerFBDelegate, WSMusicDelegate, WSActionSheetDelegate, WCCanvasDynamicDataLoaderDelegate, FTSJSEventDelegate>
{
    MMUIViewController *_baseViewController;
    id <WSJSEventHandleDelegate> _delegate;
    FTSWebSearchMgr *_webSearchMgr;
    WSActionSheet *_actionSheet;
    WAWebSearchMgr *_waSearchMgr;
    WCCanvasDynamicDataLoader *_dataLoader;
    NSDictionary *_userInfo;
}

@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) WAWebSearchMgr *waSearchMgr; // @synthesize waSearchMgr=_waSearchMgr;
@property(retain, nonatomic) WSActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(nonatomic) __weak id <WSJSEventHandleDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMUIViewController *baseViewController; // @synthesize baseViewController=_baseViewController;
- (void).cxx_destruct;
- (void)startMusicPlayer:(id)arg1;
- (void)notifyPageOfMusicStatusChanged:(id)arg1;
- (void)onDeleteData;
- (void)onCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onOpenWAWidgetLogViewWithParams:(id)arg1;
- (void)onOpenSearchCanvas:(id)arg1;
- (void)onOpenADCanvasPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onReportWeAppSearchRealTime:(id)arg1;
- (void)onTapWAWidgetWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onDoSearchOpLog:(id)arg1;
- (void)onCancelSearchActionSheet:(id)arg1;
- (id)onShowSearchActionSheet:(id)arg1;
- (void)onUpdateWAWidgetWithParams:(id)arg1;
- (void)onRemoveWAWidgetWithParams:(id)arg1;
- (id)onInsertWAWidgetWithParams:(id)arg1;
- (id)onGetBaseViewController;
- (void)onInsertHistoryOperation:(id)arg1;
- (void)onOperateVideoPlayerWithParams:(id)arg1;
- (void)onUpdateVideoPlayerWithParams:(id)arg1;
- (void)onRemoveVideoPlayerWithParams:(id)arg1;
- (id)onInsertVideoPlayerWithParams:(id)arg1;
- (void)onSearchHotWord:(id)arg1;
- (void)onSwitchSearchContext:(id)arg1;
- (void)onClearHistoryOperation:(id)arg1;
- (void)onOpenEmotionPage:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onRequestLocalSuggestion:(id)arg1;
- (void)onClickRecmdWord:(id)arg1;
- (void)onOpenContact:(id)arg1;
- (void)onOpenSnsDetail:(id)arg1;
- (void)onOpenMsgSession:(id)arg1;
- (void)onOpenBrandContact:(id)arg1 withParams:(id)arg2;
- (void)onLaunchPage:(id)arg1 withParams:(id)arg2;
- (void)onLaunchDetailPageForWeApp:(id)arg1;
- (id)onGetSearchHistory:(id)arg1;
- (void)onDeleteSearchHistory:(id)arg1;
- (void)onViewTypeChange:(id)arg1;
- (void)onMakePhoneCall:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)didFinishLoadWebView:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (void)onFailReceiveJson;
- (void)onReceiveJson:(id)arg1;
- (void)enableSearchBar;
- (void)hideKeyboard;
- (void)registerWSMusicHandler;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

