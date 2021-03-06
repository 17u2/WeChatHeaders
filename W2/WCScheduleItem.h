//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSDate, NSString;

@interface WCScheduleItem : MMObject <PBCoding>
{
    NSString *username;
    NSString *content;
    long long mesSvrID;
    NSDate *date;
    NSString *_remindId;
    unsigned long long _type;
}

+ (void)initialize;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *remindId; // @synthesize remindId=_remindId;
@property(retain, nonatomic) NSDate *date; // @synthesize date;
@property(nonatomic) long long mesSvrID; // @synthesize mesSvrID;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

