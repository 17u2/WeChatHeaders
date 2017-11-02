//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface DBMessageExt : NSObject <WCTTableCoding>
{
    unsigned int _msgLocalId;
    unsigned int _msgFlag;
    unsigned int _ConIntRes1;
    unsigned int _ConIntRes2;
    unsigned int _ConIntRes3;
    NSString *_msgSource;
    NSString *_msgIdentify;
    NSString *_ConStrRes1;
    NSString *_ConStrRes2;
    NSString *_ConStrRes3;
}

+ (const struct WCTProperty *)ConIntRes1;
+ (const struct WCTProperty *)ConStrRes3;
+ (const struct WCTProperty *)ConStrRes2;
+ (const struct WCTProperty *)ConStrRes1;
+ (const struct WCTProperty *)msgIdentify;
+ (const struct WCTProperty *)msgSource;
+ (const struct WCTProperty *)ConIntRes3;
+ (const struct WCTProperty *)ConIntRes2;
+ (const struct WCTProperty *)msgFlag;
+ (const struct WCTProperty *)msgLocalId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3=_ConStrRes3;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2=_ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1=_ConStrRes1;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3=_ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2=_ConIntRes2;
@property(nonatomic) unsigned int ConIntRes1; // @synthesize ConIntRes1=_ConIntRes1;
@property(retain, nonatomic) NSString *msgIdentify; // @synthesize msgIdentify=_msgIdentify;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource=_msgSource;
@property(nonatomic) unsigned int msgFlag; // @synthesize msgFlag=_msgFlag;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

