//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCActionSheetDelegate.h"

@class NSString, UIButton;

@interface WCPayOrderAndProductDetailHistoryInfoViewController : WCPayBaseViewController <WCActionSheetDelegate>
{
    id <WCPayOrderAndProductDetailHistoryInfoViewControllerDelegate> m_delegate;
    _Bool m_bHideStatusSectionControlButton;
    unsigned int m_uiSelectedEvaluateValue;
    UIButton *dislikeButton;
    UIButton *likeButton;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)OnCompleteEvaluate:(unsigned int)arg1;
- (void)OnClickPannelCell:(id)arg1;
- (void)OnClickPannelButton:(id)arg1;
- (void)hiddenStatusSectionControlButton;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onOperate;
- (void)reloadNavigationBar;
- (void)OnBack;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (id)getFooterView;
- (id)getTableViewHeaderView;
- (void)addPayOrderSection;
- (void)addStatusOrderSection;
- (void)ShowNormalCellInfoView:(id)arg1;
- (void)showStatusHeaderView;
- (void)showTranscationCell;
- (void)showProductView;
- (void)makeStatusHeaderView:(id)arg1;
- (void)makeNormalCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeTranscationCell:(id)arg1;
- (void)makeProductCell:(id)arg1;
- (void)makeEvaluatedCell:(id)arg1;
- (void)makeEvaluateCell:(id)arg1;
- (void)OnDislikeButtonDown;
- (void)OnLikeButtonDown;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

