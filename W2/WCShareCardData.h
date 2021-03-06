//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCCardDataSource.h"
#import "WCTTableCoding.h"

@class NSString, WCCardDataCardInfo, WCCardDataCardTPInfo;

@interface WCShareCardData : MMObject <WCTTableCoding, WCCardDataSource>
{
    _Bool bNearby;
    _Bool isAutoIncrement;
    _Bool _bNew;
    unsigned int localCardId;
    unsigned int stateFlag;
    unsigned int updateTime;
    unsigned int localUpdateTime;
    unsigned int shareTime;
    unsigned int expireTime;
    unsigned int _IntRes1;
    unsigned int _IntRes2;
    unsigned int _IntRes3;
    NSString *announceMent;
    NSString *cardId;
    NSString *cardTpId;
    NSString *appId;
    unsigned long long updateSeq;
    unsigned long long localUpdateSeq;
    NSString *shareUserName;
    NSString *markUserName;
    NSString *shareCardTPInfoForDB;
    NSString *shareCardInfoForDB;
    NSString *shareCardShareInfoForDB;
    NSString *shareCardLogoName;
    NSString *shareCardTitle;
    NSString *shareCardFromUser;
    NSString *shareCardContent;
    WCCardDataCardInfo *shareCardInfo;
    WCCardDataCardTPInfo *shareCardTPInfo;
    long long lastInsertedRowID;
    NSString *_encryptCode;
    NSString *_cardExt;
    NSString *_StrRes1;
    NSString *_StrRes2;
    NSString *_StrRes3;
}

+ (void)initialize;
+ (const struct WCTProperty *)StrRes3;
+ (const struct WCTProperty *)StrRes2;
+ (const struct WCTProperty *)StrRes1;
+ (const struct WCTProperty *)IntRes3;
+ (const struct WCTProperty *)IntRes2;
+ (const struct WCTProperty *)IntRes1;
+ (const struct WCTProperty *)shareCardContent;
+ (const struct WCTProperty *)shareCardFromUser;
+ (const struct WCTProperty *)shareCardTitle;
+ (const struct WCTProperty *)shareCardLogoName;
+ (const struct WCTProperty *)shareCardShareInfoForDB;
+ (const struct WCTProperty *)shareCardInfoForDB;
+ (const struct WCTProperty *)shareCardTPInfoForDB;
+ (const struct WCTProperty *)markUserName;
+ (const struct WCTProperty *)expireTime;
+ (const struct WCTProperty *)shareUserName;
+ (const struct WCTProperty *)shareTime;
+ (const struct WCTProperty *)localUpdateTime;
+ (const struct WCTProperty *)updateTime;
+ (const struct WCTProperty *)localUpdateSeq;
+ (const struct WCTProperty *)updateSeq;
+ (const struct WCTProperty *)stateFlag;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)cardTpId;
+ (const struct WCTProperty *)cardId;
+ (const struct WCTProperty *)localCardId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *StrRes3; // @synthesize StrRes3=_StrRes3;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2=_StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1=_StrRes1;
@property(nonatomic) unsigned int IntRes3; // @synthesize IntRes3=_IntRes3;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2=_IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1=_IntRes1;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *encryptCode; // @synthesize encryptCode=_encryptCode;
@property(nonatomic) _Bool bNew; // @synthesize bNew=_bNew;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(retain, nonatomic) WCCardDataCardTPInfo *shareCardTPInfo; // @synthesize shareCardTPInfo;
@property(retain, nonatomic) WCCardDataCardInfo *shareCardInfo; // @synthesize shareCardInfo;
@property(retain, nonatomic) NSString *shareCardContent; // @synthesize shareCardContent;
@property(retain, nonatomic) NSString *shareCardFromUser; // @synthesize shareCardFromUser;
@property(retain, nonatomic) NSString *shareCardTitle; // @synthesize shareCardTitle;
@property(retain, nonatomic) NSString *shareCardLogoName; // @synthesize shareCardLogoName;
@property(retain, nonatomic) NSString *shareCardShareInfoForDB; // @synthesize shareCardShareInfoForDB;
@property(retain, nonatomic) NSString *shareCardInfoForDB; // @synthesize shareCardInfoForDB;
@property(retain, nonatomic) NSString *shareCardTPInfoForDB; // @synthesize shareCardTPInfoForDB;
@property(retain, nonatomic) NSString *markUserName; // @synthesize markUserName;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime;
@property(retain, nonatomic) NSString *shareUserName; // @synthesize shareUserName;
@property(nonatomic) unsigned int shareTime; // @synthesize shareTime;
@property(nonatomic) unsigned int localUpdateTime; // @synthesize localUpdateTime;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned long long localUpdateSeq; // @synthesize localUpdateSeq;
@property(nonatomic) unsigned long long updateSeq; // @synthesize updateSeq;
@property(nonatomic) unsigned int stateFlag; // @synthesize stateFlag;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(nonatomic) unsigned int localCardId; // @synthesize localCardId;
@property(retain, nonatomic) NSString *announceMent; // @synthesize announceMent;
@property(nonatomic) _Bool bNearby; // @synthesize bNearby;
- (void).cxx_destruct;
- (long long)compareShareTime:(id)arg1;
- (_Bool)HasBeConsumed;
- (id)getCardTpInfo;
- (id)getCardInfo;
- (id)getCardTpId;
- (id)getCardId;
- (void)parseFromJSONDic:(id)arg1;
- (void)parseFromJSONStr:(id)arg1;
- (void)setupDataBeforeWriteDB;
- (void)setupDataFromDB;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

