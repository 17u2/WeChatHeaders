//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"

@class CdnTaskInfo, NSMutableArray, NSString, WCPreloadVideoCleanLogic;

@interface WCDownloadVideoCDNMgr : NSObject <ICdnComMgrExt>
{
    NSMutableArray *_arrDownloadTask;
    NSMutableArray *_arrPreloadTask;
    CdnTaskInfo *_curTaskInfo;
    _Bool _bEnablePreload;
    WCPreloadVideoCleanLogic *_preloadCacheCleanLogic;
}

- (void).cxx_destruct;
- (void)downloadVideoError;
- (void)downloadVideoSucess:(id)arg1;
- (void)videoSourceChange:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnVideoDownloadToEnd:(id)arg1;
- (void)OnCdnVideoMoovReady:(id)arg1;
- (void)OnCdnDownloadPartialData:(id)arg1;
- (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 durationSec:(unsigned int)arg4;
- (_Bool)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (void)KVStatPreloadVideoFinish:(id)arg1 kbPerSec:(unsigned int)arg2;
- (void)ReloadPreloadRecord;
- (void)CleanOutOfDatePreloadTempFile;
- (void)RemovePreloadRecord:(id)arg1 shouldRemoveFile:(_Bool)arg2;
- (void)AddPreloadRecord:(id)arg1;
- (_Bool)IsNextPreloadOverDailyMaxCount;
- (void)ResumePreload;
- (void)PausePreload;
- (void)realStartDownload:(id)arg1;
- (void)CheckQueue;
- (void)downloadCurrentTask;
- (void)StopDownloadVideo:(id)arg1 Result:(struct C2CDownloadResult *)arg2;
- (void)reportKVVideoArgsWithResult:(struct C2CDownloadResult *)arg1;
- (void)StopCurDownload:(struct C2CDownloadResult *)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (unsigned long long)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2 requestPercent:(unsigned int)arg3;
- (void)StartPreloadVideo:(id)arg1;
- (unsigned long long)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (unsigned long long)StartDownloadVideo:(id)arg1;
- (void)updateVideoDownloadModeWithMediaId:(id)arg1 downloadMode:(unsigned long long)arg2;
- (id)getDownloadReferUrl:(id)arg1;
- (unsigned long long)GetMediaVideoDownloadingModeWithMediaItem:(id)arg1;
- (_Bool)checkDownloadState:(id)arg1;
- (_Bool)IsMediaItemInDownloadQueue:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

