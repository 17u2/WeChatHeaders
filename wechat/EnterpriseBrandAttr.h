//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface EnterpriseBrandAttr : MMObject <WCTTableCoding>
{
    unsigned int _qyUin;
    unsigned int _userUin;
    unsigned int _userFlag;
    unsigned int _wwExposeTimes;
    unsigned int _wwMaxExposeTimes;
    NSString *_userName;
    unsigned long long _wwCorpId;
    unsigned long long _wwUserVid;
}

+ (const struct WCTProperty *)wwUserVid;
+ (const struct WCTProperty *)wwCorpId;
+ (const struct WCTProperty *)wwMaxExposeTimes;
+ (const struct WCTProperty *)wwExposeTimes;
+ (const struct WCTProperty *)userFlag;
+ (const struct WCTProperty *)userUin;
+ (const struct WCTProperty *)qyUin;
+ (const struct WCTProperty *)userName;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned long long wwUserVid; // @synthesize wwUserVid=_wwUserVid;
@property(nonatomic) unsigned long long wwCorpId; // @synthesize wwCorpId=_wwCorpId;
@property(nonatomic) unsigned int wwMaxExposeTimes; // @synthesize wwMaxExposeTimes=_wwMaxExposeTimes;
@property(nonatomic) unsigned int wwExposeTimes; // @synthesize wwExposeTimes=_wwExposeTimes;
@property(nonatomic) unsigned int userFlag; // @synthesize userFlag=_userFlag;
@property(nonatomic) unsigned int userUin; // @synthesize userUin=_userUin;
@property(nonatomic) unsigned int qyUin; // @synthesize qyUin=_qyUin;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

