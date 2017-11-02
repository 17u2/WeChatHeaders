//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface WAPackageInfoCacheLogic : NSObject
{
    NSMutableDictionary *_dicCacheFileInfo;
    NSMutableDictionary *_dicUnpackedPackageInfo;
    NSMutableSet *_setUnpackedPkgFilePath;
}

- (void).cxx_destruct;
- (_Bool)unpackPublicResPkgFromPath:(id)arg1 isDebugMode:(unsigned long long)arg2;
- (id)getCacheFileInfoWithFullUrl:(id)arg1;
- (void)removePackageFilePathCache:(id)arg1;
- (void)clearAllPkgInfo;
- (_Bool)hasUnpackedPackageWithAppId:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned long long)arg3;
- (_Bool)unpackPkgFromPath:(id)arg1 appid:(id)arg2 version:(unsigned long long)arg3 isDebugMode:(unsigned long long)arg4 packageType:(unsigned long long)arg5;
- (void)removePackageCacheIfDifferentPackageType:(unsigned long long)arg1 appId:(id)arg2 version:(unsigned long long)arg3 isDebugMode:(unsigned long long)arg4;
- (_Bool)unpackPkgWithFilePath:(id)arg1 unpackLib:(struct WXAPkg *)arg2;
- (id)getCacheFileInfoKeyWithSubPath:(id)arg1 appid:(id)arg2 version:(unsigned long long)arg3 isDebugMode:(unsigned long long)arg4;
- (void)dealloc;
- (id)init;

@end

