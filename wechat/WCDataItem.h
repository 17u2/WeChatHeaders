//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SnsObject, SnsWeAppInfo, WCActionInfo, WCAdvertiseInfo, WCAppInfo, WCContentItem, WCLocationInfo, WCMusicInfo, WCObjectOperation, WCRecommendInfo, WCRedEnvelopesInfo, WCRedEnvelopesRewardInfo, WCStreamVideoInfo, WCWeAppInfo;

@interface WCDataItem : NSObject <NSCoding>
{
    int cid;
    NSString *tid;
    int type;
    int flag;
    NSString *username;
    NSString *nickname;
    int createtime;
    NSString *sourceUrl;
    NSString *sourceUrl2;
    WCLocationInfo *locationInfo;
    WCAdvertiseInfo *advertiseInfo;
    WCRecommendInfo *recommendInfo;
    _Bool isPrivate;
    NSMutableArray *sharedGroupIDs;
    NSMutableArray *blackUsers;
    NSMutableArray *visibleUsers;
    unsigned int extFlag;
    _Bool likeFlag;
    int likeCount;
    NSMutableArray *likeUsers;
    int commentCount;
    NSMutableArray *commentUsers;
    int withCount;
    NSMutableArray *withUsers;
    WCContentItem *contentObj;
    WCAppInfo *appInfo;
    NSString *publicUserName;
    NSString *sourceUserName;
    NSString *sourceNickName;
    NSString *contentDesc;
    NSString *contentDescPattern;
    int contentDescShowType;
    int contentDescScene;
    unsigned int contentAttributeBitSetFlag;
    int sightFolded;
    WCActionInfo *actionInfo;
    WCMusicInfo *musicInfo;
    WCStreamVideoInfo *streamVideoInfo;
    WCRedEnvelopesInfo *redEnvelopesInfo;
    WCRedEnvelopesRewardInfo *redEnvelopesRewardInfo;
    WCWeAppInfo *weappInfo;
    unsigned int hash;
    SnsObject *snsObject;
    _Bool isBidirectionalFan;
    _Bool noChange;
    _Bool isRichText;
    NSMutableDictionary *extData;
    int uploadErrType;
    NSString *uploadErrMsg;
    _Bool shouldErrorIgnoreForSpam;
    NSString *statisticsData;
    WCObjectOperation *objOperation;
    NSString *m_cpKeyForContent;
    NSString *m_cpKeyForLikeUsers;
    _Bool m_isContentUnsafe;
    _Bool m_isLikeUsersUnsafe;
    int realLikeCount;
    int realCommentCount;
    int selfLikeCount;
    int selfCommentCount;
    NSString *statExtStr;
    NSString *canvasInfoXml;
    SnsWeAppInfo *snsWeAppInfo;
    NSString *shareOriginUrl;
    NSString *shareOpenUrl;
    NSString *jsAppId;
    NSMutableDictionary *statParasDic;
    SnsWeAppInfo *_snsWeAppInfo;
}

+ (id)fromServerRecAdMsg:(id)arg1;
+ (void)addStatExtStr:(id)arg1 source:(unsigned int)arg2;
+ (id)fromServerRecObject:(id)arg1;
+ (id)fromSeverADObject:(id)arg1;
+ (id)fromUploadTask:(id)arg1;
+ (id)fromServerObject:(id)arg1;
+ (id)fromBuffer:(id)arg1;
@property(retain, nonatomic) SnsWeAppInfo *snsWeAppInfo; // @synthesize snsWeAppInfo=_snsWeAppInfo;
@property(nonatomic) int sightFolded; // @synthesize sightFolded;
@property(retain, nonatomic) NSString *canvasInfoXml; // @synthesize canvasInfoXml;
@property(retain, nonatomic) WCRecommendInfo *recommendInfo; // @synthesize recommendInfo;
@property(retain, nonatomic) NSString *statExtStr; // @synthesize statExtStr;
@property(nonatomic) int selfCommentCount; // @synthesize selfCommentCount;
@property(nonatomic) int selfLikeCount; // @synthesize selfLikeCount;
@property(nonatomic) int realCommentCount; // @synthesize realCommentCount;
@property(nonatomic) int realLikeCount; // @synthesize realLikeCount;
@property(nonatomic) _Bool isLikeUsersUnsafe; // @synthesize isLikeUsersUnsafe=m_isLikeUsersUnsafe;
@property(nonatomic) _Bool isContentUnsafe; // @synthesize isContentUnsafe=m_isContentUnsafe;
@property(retain, nonatomic) NSString *cpKeyForLikeUsers; // @synthesize cpKeyForLikeUsers=m_cpKeyForLikeUsers;
@property(retain, nonatomic) NSString *cpKeyForContent; // @synthesize cpKeyForContent=m_cpKeyForContent;
@property(retain, nonatomic) NSMutableDictionary *statParasDic; // @synthesize statParasDic;
@property(retain, nonatomic) NSString *jsAppId; // @synthesize jsAppId;
@property(retain, nonatomic) NSString *shareOpenUrl; // @synthesize shareOpenUrl;
@property(retain, nonatomic) NSString *shareOriginUrl; // @synthesize shareOriginUrl;
@property(retain, nonatomic) WCObjectOperation *objOperation; // @synthesize objOperation;
@property(nonatomic) unsigned int extFlag; // @synthesize extFlag;
@property(retain, nonatomic) NSArray *visibleUsers; // @synthesize visibleUsers;
@property(retain, nonatomic) NSArray *blackUsers; // @synthesize blackUsers;
@property(retain, nonatomic) WCAdvertiseInfo *advertiseInfo; // @synthesize advertiseInfo;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo;
@property(retain, nonatomic) NSString *statisticsData; // @synthesize statisticsData;
@property(nonatomic) _Bool shouldErrorIgnoreForSpam; // @synthesize shouldErrorIgnoreForSpam;
@property(retain, nonatomic) NSString *uploadErrMsg; // @synthesize uploadErrMsg;
@property(nonatomic) int uploadErrType; // @synthesize uploadErrType;
@property(retain, nonatomic) NSMutableDictionary *extData; // @synthesize extData;
@property(retain, nonatomic) NSMutableArray *sharedGroupIDs; // @synthesize sharedGroupIDs;
@property(nonatomic) _Bool isRichText; // @synthesize isRichText;
@property(nonatomic) _Bool noChange; // @synthesize noChange;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate;
@property(nonatomic) _Bool isBidirectionalFan; // @synthesize isBidirectionalFan;
@property(retain, nonatomic) WCWeAppInfo *weappInfo; // @synthesize weappInfo;
@property(retain, nonatomic) WCRedEnvelopesRewardInfo *redEnvelopesRewardInfo; // @synthesize redEnvelopesRewardInfo;
@property(retain, nonatomic) WCRedEnvelopesInfo *redEnvelopesInfo; // @synthesize redEnvelopesInfo;
@property(retain, nonatomic) WCStreamVideoInfo *streamVideoInfo; // @synthesize streamVideoInfo;
@property(retain, nonatomic) WCMusicInfo *musicInfo; // @synthesize musicInfo;
@property(retain, nonatomic) WCActionInfo *actionInfo; // @synthesize actionInfo;
@property(nonatomic) unsigned int contentAttributeBitSetFlag; // @synthesize contentAttributeBitSetFlag;
@property(nonatomic) int contentDescScene; // @synthesize contentDescScene;
@property(nonatomic) int contentDescShowType; // @synthesize contentDescShowType;
@property(retain, nonatomic) NSString *contentDescPattern; // @synthesize contentDescPattern;
@property(retain, nonatomic) NSString *contentDesc; // @synthesize contentDesc;
@property(retain, nonatomic) NSString *sourceNickName; // @synthesize sourceNickName;
@property(retain, nonatomic) NSString *sourceUserName; // @synthesize sourceUserName;
@property(retain, nonatomic) NSString *publicUserName; // @synthesize publicUserName;
@property(retain, nonatomic) WCAppInfo *appInfo; // @synthesize appInfo;
@property(retain, nonatomic) WCContentItem *contentObj; // @synthesize contentObj;
@property(retain, nonatomic) NSMutableArray *withUsers; // @synthesize withUsers;
@property(nonatomic) int withCount; // @synthesize withCount;
@property(retain, nonatomic) NSMutableArray *commentUsers; // @synthesize commentUsers;
@property(nonatomic) int commentCount; // @synthesize commentCount;
@property(retain, nonatomic) NSMutableArray *likeUsers; // @synthesize likeUsers;
@property(nonatomic) int likeCount; // @synthesize likeCount;
@property(retain, nonatomic) NSString *sourceUrl2; // @synthesize sourceUrl2;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl;
@property(retain, nonatomic) SnsObject *snsObject; // @synthesize snsObject;
@property(nonatomic) _Bool likeFlag; // @synthesize likeFlag;
@property(nonatomic) int createtime; // @synthesize createtime;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(nonatomic) int flag; // @synthesize flag;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *tid; // @synthesize tid;
@property(nonatomic) int cid; // @synthesize cid;
- (void).cxx_destruct;
- (_Bool)hasPreloadVideoTask;
- (id)genSnsStatExt;
- (void)dumpLikeAndCommentInfo;
- (void)printSimpleLikeAndCommentInfo;
- (_Bool)isContentOriginal;
- (int)getStatExtAdType;
- (id)genAdWeAppSceneNote;
- (_Bool)isLinkAdForbidFav;
- (id)getAdUserNickName;
- (unsigned int)getAdType;
- (_Bool)isAdvertiseMediaHigherThanNickLabel;
- (_Bool)shouldShowMediaIcon;
- (_Bool)shouldGetSizeForAdvertiseMedia;
- (_Bool)isLinkAd;
- (_Bool)isVoteCanvasAd;
- (_Bool)isSelectCanvasAd;
- (_Bool)isCardAd;
- (_Bool)isVideoAd;
- (_Bool)isPhotoAd;
- (_Bool)isAd;
- (int)getSnsABTestType;
- (void)parseContentForNetWithDataItem:(id)arg1;
- (void)parseContentForUI;
- (void)parsePattern;
- (void)loadPattern;
- (long long)compareTime:(id)arg1;
- (_Bool)isValid;
- (void)mergeMessage:(id)arg1 needParseContent:(_Bool)arg2;
- (void)mergeMessage:(id)arg1;
- (void)mergeRewardItem:(id)arg1;
- (void)updateBySnsAdNotInterestsMsg:(id)arg1;
- (void)mergeLikeUsers:(id)arg1;
- (id)getMediaWraps;
- (_Bool)isAtAbleAdvertsie;
- (_Bool)isRead;
- (void)setIsUploadFailed:(_Bool)arg1;
- (_Bool)isUploadFailed;
- (_Bool)isUploading;
- (id)toBuffer;
- (void)setHash:(unsigned long long)arg1;
- (unsigned long long)hash;
- (void)setSequence:(id)arg1;
- (void)setCreateTime:(unsigned int)arg1;
- (id)getDisplayCity;
- (id)sequence;
- (int)itemType;
- (id)itemID;
- (id)description;
- (id)descriptionForKeyPaths;
- (id)keyPaths;
- (long long)compareDesc:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (_Bool)hasSharedGroup;

@end

