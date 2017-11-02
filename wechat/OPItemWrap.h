//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TemplateScheduleOPWrap, TemplateWeappOPWrap, UIColor;

@interface OPItemWrap : NSObject
{
    unsigned int _opType;
    unsigned int _tag;
    NSString *_word;
    NSString *_url;
    UIColor *_wordColor;
    NSString *_icon;
    TemplateWeappOPWrap *_weappOpWrap;
    TemplateScheduleOPWrap *_scheduleOpWrap;
}

@property(retain, nonatomic) TemplateScheduleOPWrap *scheduleOpWrap; // @synthesize scheduleOpWrap=_scheduleOpWrap;
@property(retain, nonatomic) TemplateWeappOPWrap *weappOpWrap; // @synthesize weappOpWrap=_weappOpWrap;
@property(nonatomic) unsigned int tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIColor *wordColor; // @synthesize wordColor=_wordColor;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
- (void).cxx_destruct;

@end

