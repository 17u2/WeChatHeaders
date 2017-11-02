//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayAuthenticationPay : NSObject
{
    unsigned int m_flag;
    _Bool m_bRetry;
    NSString *m_1bankType;
    NSString *m_1cardHolderName;
    NSString *m_1IDCardNumber;
    NSString *m_1IDCardType;
    NSString *m_1phoneNumber;
    NSString *m_1bankCardID;
    NSString *m_1cvv2;
    NSString *m_1validDate;
    NSString *m_1payKey;
    NSString *m_2bankType;
    NSString *m_2cardHolderName;
    NSString *m_2IDCardNumber;
    NSString *m_2IDCardType;
    NSString *m_2phoneNumber;
    NSString *m_2bankCardID;
    NSString *m_2cvv2;
    NSString *m_2validDate;
    NSString *m_2payPassword;
    NSString *m_2payKey;
    NSString *m_2hBindSerial;
    NSString *m_2hBindCardTail;
    NSString *m_3payPassword;
    NSString *m_3bankType;
    NSString *m_3bindID;
    NSString *m_3payKey;
    _Bool m_3resetFlag;
    NSString *m_3resetMobile;
    NSString *m_3resetCVV2;
    NSString *m_3resetValidDate;
    _Bool m_3simpleRegFlag;
    NSString *m_4WCLanguage;
    NSString *m_4firstName;
    NSString *m_4lastName;
    NSString *m_4country;
    NSString *m_4city;
    NSString *m_4area;
    NSString *m_4zipcode;
    NSString *m_4address;
    NSString *m_4phoneNumber_Overseas;
    NSString *m_4email;
    NSString *m_4bankType;
    NSString *m_4bankCardID;
    NSString *m_4cvv2;
    NSString *m_4validDate;
    NSString *m_4payKey;
    NSString *m_5WCLanguage;
    NSString *m_5firstName;
    NSString *m_5lastName;
    NSString *m_5country;
    NSString *m_5city;
    NSString *m_5area;
    NSString *m_5zipcode;
    NSString *m_5address;
    NSString *m_5phoneNumber_Overseas;
    NSString *m_5email;
    NSString *m_5bankType;
    NSString *m_5bankCardID;
    NSString *m_5cvv2;
    NSString *m_5validDate;
    NSString *m_5payKey;
    NSString *m_5payPassword;
    NSString *m_6bankType;
    NSString *m_6payPassword;
    NSString *m_6bindID;
    NSString *m_6payKey;
    _Bool m_6resetFlag;
    NSString *m_6resetMobile;
    NSString *m_6resetCVV2;
    NSString *m_6resetValidDate;
    _Bool m_freeSMSFlag;
    NSString *m_payToken;
    unsigned int m_payScene;
    unsigned int m_payChannel;
    NSString *m_partnerID;
    NSString *m_package;
    NSString *m_uuid;
    NSString *m_appName;
    NSString *m_appSource;
    NSString *m_appID;
    NSString *m_nsDefaultFavorComposedID;
    NSString *m_nsFavorComposedID;
    _Bool m_bIsAutoDeduct;
    _Bool _m_bTouchIDAuth;
    _Bool _mustCheckMessage;
    _Bool _bIsOfflinePayConfirm;
    _Bool _bIsLQTPay;
    NSString *m_touchFingerData;
    NSString *_m_arriveType;
    NSString *_mobileFlag;
    NSString *_bindSerial;
    NSString *_bankType;
    NSString *_autoDeductBankType;
    NSString *_autoDeductBankSerial;
    NSString *_orderReqKey;
}

@property(nonatomic) _Bool bIsLQTPay; // @synthesize bIsLQTPay=_bIsLQTPay;
@property(retain, nonatomic) NSString *orderReqKey; // @synthesize orderReqKey=_orderReqKey;
@property(nonatomic) _Bool bIsOfflinePayConfirm; // @synthesize bIsOfflinePayConfirm=_bIsOfflinePayConfirm;
@property(copy, nonatomic) NSString *autoDeductBankSerial; // @synthesize autoDeductBankSerial=_autoDeductBankSerial;
@property(copy, nonatomic) NSString *autoDeductBankType; // @synthesize autoDeductBankType=_autoDeductBankType;
@property(nonatomic) _Bool mustCheckMessage; // @synthesize mustCheckMessage=_mustCheckMessage;
@property(copy, nonatomic) NSString *bankType; // @synthesize bankType=_bankType;
@property(copy, nonatomic) NSString *bindSerial; // @synthesize bindSerial=_bindSerial;
@property(copy, nonatomic) NSString *mobileFlag; // @synthesize mobileFlag=_mobileFlag;
@property(nonatomic) _Bool m_bTouchIDAuth; // @synthesize m_bTouchIDAuth=_m_bTouchIDAuth;
@property(retain, nonatomic) NSString *m_arriveType; // @synthesize m_arriveType=_m_arriveType;
@property(retain, nonatomic) NSString *m_touchFingerData; // @synthesize m_touchFingerData;
@property(nonatomic) _Bool m_bIsAutoDeduct; // @synthesize m_bIsAutoDeduct;
@property(retain, nonatomic) NSString *m_nsFavorComposedID; // @synthesize m_nsFavorComposedID;
@property(retain, nonatomic) NSString *m_nsDefaultFavorComposedID; // @synthesize m_nsDefaultFavorComposedID;
@property(retain, nonatomic) NSString *m_appID; // @synthesize m_appID;
@property(retain, nonatomic) NSString *m_appSource; // @synthesize m_appSource;
@property(retain, nonatomic) NSString *m_uuid; // @synthesize m_uuid;
@property(retain, nonatomic) NSString *m_appName; // @synthesize m_appName;
@property(nonatomic) unsigned int m_payChannel; // @synthesize m_payChannel;
@property(nonatomic) unsigned int m_payScene; // @synthesize m_payScene;
@property(retain, nonatomic) NSString *m_package; // @synthesize m_package;
@property(retain, nonatomic) NSString *m_partnerID; // @synthesize m_partnerID;
@property(retain, nonatomic) NSString *m_payToken; // @synthesize m_payToken;
@property(nonatomic) _Bool m_freeSMSFlag; // @synthesize m_freeSMSFlag;
@property(retain, nonatomic) NSString *m_6resetValidDate; // @synthesize m_6resetValidDate;
@property(retain, nonatomic) NSString *m_6resetMobile; // @synthesize m_6resetMobile;
@property(retain, nonatomic) NSString *m_6resetCVV2; // @synthesize m_6resetCVV2;
@property(nonatomic) _Bool m_6resetFlag; // @synthesize m_6resetFlag;
@property(retain, nonatomic) NSString *m_6payKey; // @synthesize m_6payKey;
@property(retain, nonatomic) NSString *m_6bindID; // @synthesize m_6bindID;
@property(retain, nonatomic) NSString *m_6payPassword; // @synthesize m_6payPassword;
@property(retain, nonatomic) NSString *m_6bankType; // @synthesize m_6bankType;
@property(retain, nonatomic) NSString *m_5payPassword; // @synthesize m_5payPassword;
@property(retain, nonatomic) NSString *m_5payKey; // @synthesize m_5payKey;
@property(retain, nonatomic) NSString *m_5validDate; // @synthesize m_5validDate;
@property(retain, nonatomic) NSString *m_5cvv2; // @synthesize m_5cvv2;
@property(retain, nonatomic) NSString *m_5bankCardID; // @synthesize m_5bankCardID;
@property(retain, nonatomic) NSString *m_5email; // @synthesize m_5email;
@property(retain, nonatomic) NSString *m_5bankType; // @synthesize m_5bankType;
@property(retain, nonatomic) NSString *m_5phoneNumber_Overseas; // @synthesize m_5phoneNumber_Overseas;
@property(retain, nonatomic) NSString *m_5address; // @synthesize m_5address;
@property(retain, nonatomic) NSString *m_5zipcode; // @synthesize m_5zipcode;
@property(retain, nonatomic) NSString *m_5city; // @synthesize m_5city;
@property(retain, nonatomic) NSString *m_5area; // @synthesize m_5area;
@property(retain, nonatomic) NSString *m_5country; // @synthesize m_5country;
@property(retain, nonatomic) NSString *m_5lastName; // @synthesize m_5lastName;
@property(retain, nonatomic) NSString *m_5firstName; // @synthesize m_5firstName;
@property(retain, nonatomic) NSString *m_5WCLanguage; // @synthesize m_5WCLanguage;
@property(retain, nonatomic) NSString *m_4payKey; // @synthesize m_4payKey;
@property(retain, nonatomic) NSString *m_4validDate; // @synthesize m_4validDate;
@property(retain, nonatomic) NSString *m_4cvv2; // @synthesize m_4cvv2;
@property(retain, nonatomic) NSString *m_4bankCardID; // @synthesize m_4bankCardID;
@property(retain, nonatomic) NSString *m_4email; // @synthesize m_4email;
@property(retain, nonatomic) NSString *m_4bankType; // @synthesize m_4bankType;
@property(retain, nonatomic) NSString *m_4phoneNumber_Overseas; // @synthesize m_4phoneNumber_Overseas;
@property(retain, nonatomic) NSString *m_4zipcode; // @synthesize m_4zipcode;
@property(retain, nonatomic) NSString *m_4address; // @synthesize m_4address;
@property(retain, nonatomic) NSString *m_4area; // @synthesize m_4area;
@property(retain, nonatomic) NSString *m_4city; // @synthesize m_4city;
@property(retain, nonatomic) NSString *m_4country; // @synthesize m_4country;
@property(retain, nonatomic) NSString *m_4lastName; // @synthesize m_4lastName;
@property(retain, nonatomic) NSString *m_4firstName; // @synthesize m_4firstName;
@property(retain, nonatomic) NSString *m_4WCLanguage; // @synthesize m_4WCLanguage;
@property(nonatomic) _Bool m_3simpleRegFlag; // @synthesize m_3simpleRegFlag;
@property(retain, nonatomic) NSString *m_3resetValidDate; // @synthesize m_3resetValidDate;
@property(retain, nonatomic) NSString *m_3resetMobile; // @synthesize m_3resetMobile;
@property(retain, nonatomic) NSString *m_3resetCVV2; // @synthesize m_3resetCVV2;
@property(nonatomic) _Bool m_3resetFlag; // @synthesize m_3resetFlag;
@property(retain, nonatomic) NSString *m_3payPassword; // @synthesize m_3payPassword;
@property(retain, nonatomic) NSString *m_3payKey; // @synthesize m_3payKey;
@property(retain, nonatomic) NSString *m_3bindID; // @synthesize m_3bindID;
@property(retain, nonatomic) NSString *m_2hBindSerial; // @synthesize m_2hBindSerial;
@property(retain, nonatomic) NSString *m_2hBindCardTail; // @synthesize m_2hBindCardTail;
@property(retain, nonatomic) NSString *m_2validDate; // @synthesize m_2validDate;
@property(retain, nonatomic) NSString *m_2payPassword; // @synthesize m_2payPassword;
@property(retain, nonatomic) NSString *m_2phoneNumber; // @synthesize m_2phoneNumber;
@property(retain, nonatomic) NSString *m_2payKey; // @synthesize m_2payKey;
@property(retain, nonatomic) NSString *m_2IDCardNumber; // @synthesize m_2IDCardNumber;
@property(retain, nonatomic) NSString *m_2cvv2; // @synthesize m_2cvv2;
@property(retain, nonatomic) NSString *m_2cardHolderName; // @synthesize m_2cardHolderName;
@property(retain, nonatomic) NSString *m_2bankCardID; // @synthesize m_2bankCardID;
@property(retain, nonatomic) NSString *m_1validDate; // @synthesize m_1validDate;
@property(retain, nonatomic) NSString *m_1phoneNumber; // @synthesize m_1phoneNumber;
@property(retain, nonatomic) NSString *m_1payKey; // @synthesize m_1payKey;
@property(retain, nonatomic) NSString *m_1IDCardNumber; // @synthesize m_1IDCardNumber;
@property(retain, nonatomic) NSString *m_1cvv2; // @synthesize m_1cvv2;
@property(retain, nonatomic) NSString *m_1cardHolderName; // @synthesize m_1cardHolderName;
@property(retain, nonatomic) NSString *m_1bankCardID; // @synthesize m_1bankCardID;
@property(nonatomic) unsigned int m_flag; // @synthesize m_flag;
@property(retain, nonatomic) NSString *m_3bankType; // @synthesize m_3bankType;
@property(retain, nonatomic) NSString *m_2IDCardType; // @synthesize m_2IDCardType;
@property(retain, nonatomic) NSString *m_2bankType; // @synthesize m_2bankType;
@property(retain, nonatomic) NSString *m_1IDCardType; // @synthesize m_1IDCardType;
@property(retain, nonatomic) NSString *m_1bankType; // @synthesize m_1bankType;
@property(nonatomic) _Bool m_bRetry; // @synthesize m_bRetry;
- (void).cxx_destruct;
- (_Bool)isWrongFlag;
- (void)dealloc;

@end

