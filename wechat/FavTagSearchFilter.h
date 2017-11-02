//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "FavTagEditViewDelegate.h"
#import "FavTypeItemsViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class FavBarButton, FavTagListView, FavTypeItemsView, MMScrollView, NSMutableArray, NSString, UILabel, UIView;

@interface FavTagSearchFilter : MMUIView <FavTagEditViewDelegate, UIScrollViewDelegate, FavTypeItemsViewDelegate>
{
    UIView *m_backgroundView;
    MMScrollView *m_scrollView;
    UILabel *m_label;
    FavTagListView *m_tagListView;
    FavTypeItemsView *m_typeItemsView;
    FavBarButton *m_favBarBtn;
    NSMutableArray *currentTags;
    id <FavTagSearchFilterDelegate> m_delegate;
    int m_currentType;
}

@property(nonatomic) __weak id <FavTagSearchFilterDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) int m_currentType; // @synthesize m_currentType;
- (void).cxx_destruct;
- (void)onSelectFavItemsByType:(int)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (id)getCurrentTypeName;
- (void)removeAllTags;
- (void)removeLastTag;
- (id)getTagList;
- (void)onDeleteButton:(id)arg1;
- (void)onAddButton:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateTagList;
- (void)ontap;
- (void)goToCapacityViewController;
- (id)getCapcityString;
- (void)initView;
- (void)layoutSubviews;
- (void)addBlurEffectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

