//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CdnTimelineMediaOfSightInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    _Bool m_bHaveThumb;
    NSString *m_nsThumbFilePath;
}

@property(retain, nonatomic) NSString *m_nsThumbFilePath; // @synthesize m_nsThumbFilePath;
@property(nonatomic) _Bool m_bHaveThumb; // @synthesize m_bHaveThumb;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (void).cxx_destruct;

@end

