//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary;

@interface WCSnsLocalCacheMgr : MMObject
{
    _Bool m_hadLoadedCache;
    NSMutableDictionary *m_dicLocalCache;
}

- (void).cxx_destruct;
- (void)saveDicLocalCache;
- (void)tryLoadDicLocalCache;
- (id)pathForDicLocalCache;
- (void)callServiceMemoryWarning;
- (void)callServiceTerminate;
- (void)callServiceEnterBackground;
- (void)callServiceReload;
- (void)callServiceInit;
- (void)saveSnsLocalCache;
- (void)mergeSnsOperationsWithFeedId:(id)arg1 feedCreateTime:(unsigned int)arg2 snsOperationsData:(id)arg3;
- (void)updateOperationsWithFeedId:(id)arg1 createTime:(unsigned int)arg2 snsOperations:(id)arg3;
- (id)getSnsOperationWrapWithFeedId:(id)arg1;
- (id)getSnsOperationsWithFeedId:(id)arg1;
- (void)setShowTime:(unsigned int)arg1 WithFeedId:(id)arg2;
- (void)setDelayShowInfoNeedDelay:(id)arg1;
- (void)clearDelayShowInfoCache;

@end
