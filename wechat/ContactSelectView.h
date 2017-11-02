//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ContactsDataLogicDelegate.h"
#import "MMSearchBarDelegate.h"
#import "MMTableViewIndexViewDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class ContactsDataLogic, MMSearchBar, MMTableView, NSDictionary, NSMutableDictionary, NSString;

@interface ContactSelectView : UIView <MMTableViewIndexViewDelegate, UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource, MMSearchBarDelegate, WCActionSheetDelegate, ContactsDataLogicDelegate>
{
    id <ContactSelectViewDelegate> m_delegate;
    MMTableView *m_tableView;
    NSDictionary *m_dicExistContact;
    _Bool m_bShowHistoryGroup;
    _Bool m_bShowRadarCreateRoom;
    _Bool m_bMultiSelect;
    _Bool m_bMakeTopCell;
    NSMutableDictionary *m_dicMultiSelect;
    ContactsDataLogic *m_contactsDataLogic;
    unsigned int m_uiGroupScene;
    UIView *_tableFooterView;
    NSString *nsCurrentSearchText;
    MMSearchBar *m_mmSearchBar;
    _Bool m_bSearchSnsContact;
    _Bool _m_bHideSearchBar;
    _Bool _m_bShowMomentStatus;
    _Bool _m_bMultiShowContactInfo;
    _Bool _m_bUseSystemIndexBar;
    NSString *_m_selectedUsername;
}

@property(nonatomic) _Bool m_bUseSystemIndexBar; // @synthesize m_bUseSystemIndexBar=_m_bUseSystemIndexBar;
@property(retain, nonatomic) NSString *m_selectedUsername; // @synthesize m_selectedUsername=_m_selectedUsername;
@property(nonatomic) _Bool m_bMultiShowContactInfo; // @synthesize m_bMultiShowContactInfo=_m_bMultiShowContactInfo;
@property(nonatomic) _Bool m_bShowMomentStatus; // @synthesize m_bShowMomentStatus=_m_bShowMomentStatus;
@property(nonatomic) _Bool m_bHideSearchBar; // @synthesize m_bHideSearchBar=_m_bHideSearchBar;
@property(nonatomic) _Bool m_bMakeTopCell; // @synthesize m_bMakeTopCell;
@property(nonatomic) _Bool m_bSearchSnsContact; // @synthesize m_bSearchSnsContact;
@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(nonatomic) unsigned int m_uiGroupScene; // @synthesize m_uiGroupScene;
@property(nonatomic) _Bool m_bShowRadarCreateRoom; // @synthesize m_bShowRadarCreateRoom;
@property(nonatomic) _Bool m_bShowHistoryGroup; // @synthesize m_bShowHistoryGroup;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(nonatomic) __weak id <ContactSelectViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)searchTextFieldDidBeginEditing;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)onContactAsynSearchSectionResultChanged:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataNeedChange;
- (void)onContactsDataChange;
- (void)reloadContacts;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)loadHeaderViewSelection;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getTableView;
- (void)reloadTableView;
- (unsigned long long)getTotalSelectCount;
- (void)handleSelectWhatEverCell;
- (void)handleSelectTopCell;
- (void)handleSelectRadarCreateRoom;
- (void)handleSelectHistoryGroup;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (void)makeHistoryGroupCell:(id)arg1;
- (void)makeMultiTalkSessionCell:(id)arg1;
- (void)makeRadarCreateRoomCell:(id)arg1;
- (void)makeTopCell:(id)arg1;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeGroupCell:(id)arg1 head:(id)arg2 title:(id)arg3;
- (void)showInfo:(id)arg1;
- (void)makeWhatEverCell:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2 showMatchTip:(_Bool)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (int)getSectionType:(long long)arg1;
- (long long)getNormalContactSection;
- (void)dealloc;
- (void)initView;
- (void)initTableView;
- (void)initSearchBar;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)initData:(unsigned int)arg1;
- (void)removeContact:(id)arg1 index:(id)arg2;
- (void)updateMultiSelectView;
- (_Bool)isSelectAll;
- (unsigned int)getContactCount;
- (void)setSelectAll:(_Bool)arg1;
- (_Bool)updateMultiSelect:(id)arg1;
- (void)addSelect:(id)arg1;
- (id)getCellTextView:(id)arg1;
- (id)getCellImage:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (_Bool)isExisted:(id)arg1;
- (void)multiSelectWithSearchResult:(id)arg1;
- (id)getMatchTipForUsername:(id)arg1;
- (void)removeSelect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
