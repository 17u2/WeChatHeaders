//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface SREReportData : NSObject <PBCoding>
{
    unsigned int siriSessionId;
    unsigned int success;
    unsigned int siriOpCode;
    unsigned int receiverType;
    unsigned int matchStatus;
    unsigned int multiReceiverOpCode;
}

+ (void)initialize;
@property(nonatomic) unsigned int multiReceiverOpCode; // @synthesize multiReceiverOpCode;
@property(nonatomic) unsigned int matchStatus; // @synthesize matchStatus;
@property(nonatomic) unsigned int receiverType; // @synthesize receiverType;
@property(nonatomic) unsigned int siriOpCode; // @synthesize siriOpCode;
@property(nonatomic) unsigned int success; // @synthesize success;
@property(nonatomic) unsigned int siriSessionId; // @synthesize siriSessionId;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

