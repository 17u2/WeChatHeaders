//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IContactLabelMgrExt.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCCreateNewGroupDemoViewControllerDelegate.h"

@class MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCCreateNewGroupDemoViewController;

@interface WCGroupTagDemoViewController : MMUIViewController <WCCreateNewGroupDemoViewControllerDelegate, IContactLabelMgrExt, MultiSelectContactsViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate>
{
    int m_originProviacy;
    _Bool m_privacyGroupHidden;
    NSMutableArray *m_arrAllLabelName;
    NSMutableSet *m_selectedVisibleLabelName;
    NSMutableSet *m_selectedInvisibleLabelName;
    NSMutableSet *m_originSelectedVisibleLabelName;
    NSMutableSet *m_originSelectedInvisibleLabelName;
    MMTableView *m_tableView;
    _Bool m_hasTryTransferLabel;
    NSMutableDictionary *m_dicGroupLabel;
    unsigned int m_transferEventId;
    int m_transferPrivacy;
    double m_originContentOffset;
    _Bool m_bShowDetail;
    WCCreateNewGroupDemoViewController *newGroup;
    unsigned int _createTagEventId;
    id <WCGroupTagViewControllerDelegate> m_delegate;
    NSString *m_title;
    NSArray *_tmpSelectContact;
    NSString *_createTagName;
    NSArray *_undeterminedTempContacts;
    NSArray *_originTmpSelectContacts;
}

@property(retain, nonatomic) NSArray *originTmpSelectContacts; // @synthesize originTmpSelectContacts=_originTmpSelectContacts;
@property(retain, nonatomic) NSArray *undeterminedTempContacts; // @synthesize undeterminedTempContacts=_undeterminedTempContacts;
@property(retain, nonatomic) NSString *createTagName; // @synthesize createTagName=_createTagName;
@property(nonatomic) unsigned int createTagEventId; // @synthesize createTagEventId=_createTagEventId;
@property(retain, nonatomic) NSArray *tmpSelectContact; // @synthesize tmpSelectContact=_tmpSelectContact;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(nonatomic) _Bool m_privacyGroupHidden; // @synthesize m_privacyGroupHidden;
@property(nonatomic) __weak id <WCGroupTagViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)handleCreateToSetContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)handleCreateContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)deleteOldSnsGroup;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)sortAndSaveSnsGroupLabel;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)createNewLabel:(id)arg1;
- (void)selectContacts;
- (void)onAllTagNameUpdate;
- (void)editContactLabels;
- (void)onDone;
- (void)onReturn;
- (void)keepOriginPrivacy;
- (_Bool)hasChangePrivacy;
- (void)onDataChange;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showTransferTip;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)isSelected:(int)arg1 postPrivacy:(int)arg2 indexPath:(id)arg3;
- (int)getCellType:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)loadAllTagNameList;
- (void)willShow;
- (void)onWCGroupUpdated;
- (void)reloadAllTableView;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTmpSelectContacts:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

