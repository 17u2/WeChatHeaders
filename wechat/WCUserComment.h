//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCUserComment : NSObject <NSCoding>
{
    NSString *commentID;
    NSString *comment64ID;
    NSString *username;
    NSString *nickname;
    NSString *content;
    int source;
    int type;
    unsigned int createTime;
    int isLocalAdded;
    NSString *refCommentID;
    NSString *refComment64ID;
    NSString *refUserName;
    NSString *contentPattern;
    int isRichText;
    _Bool bDeleted;
    NSString *m_cpKeyForComment;
    _Bool m_isCommentUnsafe;
    _Bool isHBComment;
    _Bool _isAdvertiserComment;
    _Bool _isRefAdvertiserComment;
    int commentFlag;
    NSString *_dataItemUsrName;
    NSString *_dataItemNickName;
}

+ (id)fromServerCommentObj:(id)arg1;
+ (id)fromServerObj:(id)arg1;
+ (id)fromCommentUploadItem:(id)arg1;
@property(retain, nonatomic) NSString *dataItemNickName; // @synthesize dataItemNickName=_dataItemNickName;
@property(retain, nonatomic) NSString *dataItemUsrName; // @synthesize dataItemUsrName=_dataItemUsrName;
@property(nonatomic) _Bool isRefAdvertiserComment; // @synthesize isRefAdvertiserComment=_isRefAdvertiserComment;
@property(nonatomic) _Bool isAdvertiserComment; // @synthesize isAdvertiserComment=_isAdvertiserComment;
@property(nonatomic) int commentFlag; // @synthesize commentFlag;
@property(nonatomic) _Bool isHBComment; // @synthesize isHBComment;
@property(nonatomic) _Bool isCommentUnsafe; // @synthesize isCommentUnsafe=m_isCommentUnsafe;
@property(retain, nonatomic) NSString *cpKeyForComment; // @synthesize cpKeyForComment=m_cpKeyForComment;
@property(nonatomic) _Bool bDeleted; // @synthesize bDeleted;
@property(nonatomic) int isRichText; // @synthesize isRichText;
@property(retain, nonatomic) NSString *contentPattern; // @synthesize contentPattern;
@property(retain, nonatomic) NSString *refUserName; // @synthesize refUserName;
@property(retain, nonatomic) NSString *refComment64ID; // @synthesize refComment64ID;
@property(retain, nonatomic) NSString *refCommentID; // @synthesize refCommentID;
@property(nonatomic) int isLocalAdded; // @synthesize isLocalAdded;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) int source; // @synthesize source;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(retain, nonatomic) NSString *comment64ID; // @synthesize comment64ID;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID;
- (void).cxx_destruct;
- (long long)compareTime:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)descriptionForKeyPaths;
- (id)keyPaths;
- (_Bool)isAtedAdvertiserComment;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

