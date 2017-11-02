//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol TXIVideoPreprocessorDelegate <NSObject>

@optional
- (void)onDetectFacePoints:(NSArray *)arg1;
- (void)didProcessFrame:(char *)arg1 width:(long long)arg2 height:(long long)arg3 format:(long long)arg4 timeStamp:(unsigned long long)arg5;
- (void)didProcessFrame:(struct opaqueCMSampleBuffer *)arg1 timeStamp:(unsigned long long)arg2;
- (void)onTextureDestoryed;
- (unsigned int)willAddWatermark:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3;
@end
