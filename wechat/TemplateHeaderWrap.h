//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, UIColor;

@interface TemplateHeaderWrap : NSObject
{
    _Bool _hideTitleAndTime;
    _Bool _showIconAndDisplayName;
    _Bool _hideIconAndDisplayNameLine;
    _Bool _showComplaintButton;
    NSString *_title;
    UIColor *_titleColor;
    NSDate *_pubTime;
    NSString *_first;
    UIColor *_firstColor;
    NSString *_iconUrl;
    NSString *_displayName;
    NSString *_templateMsgId;
}

@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;
@property(nonatomic) _Bool showComplaintButton; // @synthesize showComplaintButton=_showComplaintButton;
@property(nonatomic) _Bool hideIconAndDisplayNameLine; // @synthesize hideIconAndDisplayNameLine=_hideIconAndDisplayNameLine;
@property(nonatomic) _Bool showIconAndDisplayName; // @synthesize showIconAndDisplayName=_showIconAndDisplayName;
@property(nonatomic) _Bool hideTitleAndTime; // @synthesize hideTitleAndTime=_hideTitleAndTime;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIColor *firstColor; // @synthesize firstColor=_firstColor;
@property(retain, nonatomic) NSString *first; // @synthesize first=_first;
@property(retain, nonatomic) NSDate *pubTime; // @synthesize pubTime=_pubTime;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

