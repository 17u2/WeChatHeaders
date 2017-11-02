//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ForwardMessageLogicDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CMessageWrap, ForwardMessageLogicController, MMCursorView, MMMagnifiterView, MMUIViewController, NSArray, NSMutableArray, NSString, UIColor, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView<MMRichTextCoverViewDelegate>;

@interface MMRichTextCoverView : UIView <WCActionSheetDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, ForwardMessageLogicDelegate>
{
    struct _NSRange _selectedRange;
    UIImage *_magnifiterImage;
    struct CGPoint m_TouchPoint;
    _Bool m_bScrolling;
    UIPanGestureRecognizer *m_oPanGestureRecognizer;
    UILongPressGestureRecognizer *m_oLongPressGestureRecognizer;
    ForwardMessageLogicController *m_forwardLogicController;
    MMUIViewController *m_forwardFromViewController;
    id <MMRichTextCopyEventDelegate> _textCopyEventDelegate;
    UIView<MMRichTextCoverViewDelegate> *_delegate;
    UIColor *_selectedColor;
    UIColor *_cursorColor;
    CMessageWrap *_msgWrap;
    NSArray *_searchKeyWords;
    NSArray *_originMenuItems;
    unsigned long long _coverModel;
    NSMutableArray *_pathRects;
    MMCursorView *_leftCursor;
    MMCursorView *_rightCursor;
    MMMagnifiterView *_magnifiterView;
    NSString *_textString;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)canRespondsToMenuAction:(SEL)arg1 menusItems:(id)arg2;
+ (void)setStaticMenuItems:(id)arg1;
@property(retain, nonatomic) NSString *textString; // @synthesize textString=_textString;
@property(retain, nonatomic) MMMagnifiterView *magnifiterView; // @synthesize magnifiterView=_magnifiterView;
@property(retain, nonatomic) MMCursorView *rightCursor; // @synthesize rightCursor=_rightCursor;
@property(retain, nonatomic) MMCursorView *leftCursor; // @synthesize leftCursor=_leftCursor;
@property(retain, nonatomic) NSMutableArray *pathRects; // @synthesize pathRects=_pathRects;
@property(nonatomic) unsigned long long coverModel; // @synthesize coverModel=_coverModel;
@property(retain, nonatomic) NSArray *originMenuItems; // @synthesize originMenuItems=_originMenuItems;
@property(retain, nonatomic) NSArray *searchKeyWords; // @synthesize searchKeyWords=_searchKeyWords;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) UIColor *cursorColor; // @synthesize cursorColor=_cursorColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) __weak UIView<MMRichTextCoverViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMRichTextCopyEventDelegate> textCopyEventDelegate; // @synthesize textCopyEventDelegate=_textCopyEventDelegate;
- (void).cxx_destruct;
- (void)onBecomeActive;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollDown;
- (void)scrollUp;
- (void)removeMaginfierView;
- (void)removeCursor;
- (void)showCursor;
- (void)resetCursor:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)showTextMessageOriginMenu:(id)arg1;
- (void)showMenuUI;
- (void)hideMenuUI;
- (_Bool)CTRectContainsPointError:(struct CGRect)arg1 point:(struct CGPoint)arg2 error:(double)arg3;
- (_Bool)pointIsVisableInScreen:(struct CGPoint)arg1;
- (struct CGPoint)getLongPressSelectCenter;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsReloadView;
- (void)searchAndHighlightKeyWord:(id)arg1;
- (void)longPressAction:(id)arg1;
- (_Bool)touchPointInSelectPath:(struct CGPoint)arg1;
- (_Bool)onClickPreViewWithPoint:(struct CGPoint)arg1 DoubleClick:(_Bool)arg2;
- (void)richTextViewExit;
- (void)onDoubleTap:(id)arg1;
- (void)onPanAction:(id)arg1;
- (void)selectAllTextWithShowMenu:(_Bool)arg1;
- (void)onSelectAll:(id)arg1;
- (void)onTextFavorite:(id)arg1;
- (void)onTextCopy:(id)arg1;
- (void)onTextForward:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardingMenuAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)addGestureRecognizer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

