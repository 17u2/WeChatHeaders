//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, VideoParamsInfo;

@interface VideoDownloadStatInfo : NSObject
{
    unsigned int _sessionMember;
    unsigned int _downloadStartTime;
    unsigned int _preloadSize;
    unsigned int _preloadStatus;
    NSString *_fromUsername;
    NSString *_sessionName;
    NSString *_fileId;
    NSString *_videoNewMd5;
    VideoParamsInfo *_videoParams;
    NSString *_cdnIp;
    NSString *_snsUrl;
}

@property(nonatomic) unsigned int preloadStatus; // @synthesize preloadStatus=_preloadStatus;
@property(nonatomic) unsigned int preloadSize; // @synthesize preloadSize=_preloadSize;
@property(retain, nonatomic) NSString *snsUrl; // @synthesize snsUrl=_snsUrl;
@property(retain, nonatomic) NSString *cdnIp; // @synthesize cdnIp=_cdnIp;
@property(retain, nonatomic) VideoParamsInfo *videoParams; // @synthesize videoParams=_videoParams;
@property(nonatomic) unsigned int downloadStartTime; // @synthesize downloadStartTime=_downloadStartTime;
@property(retain, nonatomic) NSString *videoNewMd5; // @synthesize videoNewMd5=_videoNewMd5;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(nonatomic) unsigned int sessionMember; // @synthesize sessionMember=_sessionMember;
@property(retain, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
@property(retain, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;
- (void).cxx_destruct;
- (void)reportKV;
- (id)getBigVideoStatInfo;
- (void)mergeInfoFromTaskInfo:(id)arg1;
- (void)mergeInfoFromDownloadTaskInfo:(id)arg1;
- (id)init;

@end

