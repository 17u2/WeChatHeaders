//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface MMResSignatureInfo : MMObject <PBCoding>
{
    unsigned int version;
    NSData *signatureData;
}

+ (void)initialize;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData;
@property(nonatomic) unsigned int version; // @synthesize version;
- (void).cxx_destruct;
- (void)dealloc;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

