//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "PBMessageObserverDelegate.h"

@interface WAJSEventHandler_verifyPlugin : WAJSEventHandler_BaseEvent <PBMessageObserverDelegate>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onVerifyPluginResponse:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

@end

