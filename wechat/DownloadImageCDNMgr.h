//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"

@class CdnTaskInfo, NSMutableArray, NSMutableDictionary, NSString;

@interface DownloadImageCDNMgr : NSObject <ICdnComMgrExt>
{
    NSMutableArray *m_arrQueue;
    CdnTaskInfo *m_oCurTaskInfo;
    NSMutableDictionary *m_dicDownloadImageCache;
}

@property(retain, nonatomic) CdnTaskInfo *m_oCurTaskInfo; // @synthesize m_oCurTaskInfo;
- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (id)GetTempFilePath:(id)arg1;
- (id)GetFilePath:(id)arg1;
- (void)DownloadOK;
- (void)saveImageToAlbum;
- (void)DownloadFail:(int)arg1;
- (void)DownloadFail:(int)arg1 Expired:(_Bool)arg2;
- (void)StopDownloadImageByUsrName:(id)arg1 FromDelMsg:(_Bool)arg2;
- (void)StopCurDownload;
- (void)StartDownloadImage:(id)arg1 HD:(_Bool)arg2 AutoDownload:(_Bool)arg3 SaveAlbum:(_Bool)arg4;
- (void)StartDownloadImage:(id)arg1 HD:(_Bool)arg2 AutoDownload:(_Bool)arg3;
- (void)StartDownloadHDImageForSaveAlbum:(id)arg1;
- (void)StopImageDownloadTaskWithMsg:(id)arg1;
- (void)CheckQueue;
- (void)deleteCacheForChatName:(id)arg1;
- (_Bool)CheckForLocalCache:(id)arg1;
- (void)RemoveCacheByLRU;
- (void)SaveCacheData;
- (void)LoadCacheData;
- (id)GetImageCachePath;
- (id)GetCacheKeyByMD5:(id)arg1 HD:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

