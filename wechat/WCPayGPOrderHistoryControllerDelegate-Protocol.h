//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AAListRecord;

@protocol WCPayGPOrderHistoryControllerDelegate <NSObject>
- (void)onOrderHistoryViewControllerChangeScene:(unsigned long long)arg1;
- (void)onOrderHistoryViewControllerUserSelectRecord:(AAListRecord *)arg1;
- (void)loadMoreOrderHistoryWithOffset:(unsigned int)arg1;
- (void)onOrderHistoryViewControllerCancel;
@end
