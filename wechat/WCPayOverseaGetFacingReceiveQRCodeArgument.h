//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayOverseaGetFacingReceiveQRCodeArgument : NSObject
{
    unsigned int _uiIsSetAmount;
    unsigned int _uiWalletType;
    unsigned long long _uiAmount;
    NSString *_nsDesc;
}

@property(nonatomic) unsigned int uiWalletType; // @synthesize uiWalletType=_uiWalletType;
@property(retain, nonatomic) NSString *nsDesc; // @synthesize nsDesc=_nsDesc;
@property(nonatomic) unsigned long long uiAmount; // @synthesize uiAmount=_uiAmount;
@property(nonatomic) unsigned int uiIsSetAmount; // @synthesize uiIsSetAmount=_uiIsSetAmount;
- (void).cxx_destruct;
- (id)urlArgumentData;

@end

