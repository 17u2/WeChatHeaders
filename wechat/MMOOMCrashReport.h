//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MonoServiceLogicExt.h"

@class NSString;

@interface MMOOMCrashReport : NSObject <MonoServiceLogicExt>
{
}

+ (void)reportFoomScene;
+ (void)reportIDKEYByTypeOS:(unsigned long long)arg1;
+ (void)reportIDKEYByType:(unsigned long long)arg1;
+ (void)userHasWatch:(_Bool)arg1;
+ (id)lastDumpFileName;
+ (void)setDumpFileName:(id)arg1;
+ (void)isForegroundMainThreadBlock:(_Bool)arg1;
+ (id)lastTimeFOOMScene;
+ (_Bool)isLastTimeFOOM;
+ (_Bool)isOSReboot;
+ (unsigned long long)getSystemLaunchTimeStamp;
+ (_Bool)isOSChange;
+ (_Bool)isAppChange;
+ (id)appModificationDate;
+ (void)enterForeground;
+ (void)willSuspend;
+ (void)enterBackground;
+ (void)registerExtension;
+ (void)setScene:(id)arg1;
+ (void)setFlag:(id)arg1;
+ (void)checkAndReport;
+ (void)checkRebootType;
+ (void)initialize;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

