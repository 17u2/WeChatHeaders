//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol TXLivePushListener <NSObject>
- (void)onNetStatus:(NSDictionary *)arg1;
- (void)onPushEvent:(int)arg1 withParam:(NSDictionary *)arg2;
@end

