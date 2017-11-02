//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "FaceRecog3rdVerifyConfirmViewControllerDelegate.h"

@class NSString;

@interface WAJSEventHandler_startFacialRecognitionVerifyAndUploadVideo : WAJSEventHandler_BaseEvent <FaceRecog3rdVerifyConfirmViewControllerDelegate>
{
    unsigned long long _startTime;
    unsigned int _tryCount;
}

- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (void)faceRecogDidResultWithTryCount:(unsigned int)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

