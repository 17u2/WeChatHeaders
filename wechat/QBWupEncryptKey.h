//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QBWupEncryptKey : NSObject
{
    NSString *_aesKey;
    NSString *_qbKey;
    NSString *_token;
}

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *qbKey; // @synthesize qbKey=_qbKey;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
- (void).cxx_destruct;
- (id)init;

@end

