//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TXLiveBase : NSObject
{
    id <TXLiveBaseDelegate> _delegate;
}

+ (id)getSDKVersionStr;
+ (void)setAppVersion:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) __weak id <TXLiveBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end

