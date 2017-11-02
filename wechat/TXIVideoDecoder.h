//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TXIVideoDecoder : NSObject
{
    _Bool _needSortFrame;
    id <TXIVideoDecoderDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
}

@property _Bool needSortFrame; // @synthesize needSortFrame=_needSortFrame;
@property __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property __weak id <TXIVideoDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)pushNal:(id)arg1;
- (long long)stop;
- (long long)start;
- (void)sendNotifyEvent:(int)arg1;
- (id)init;

@end

