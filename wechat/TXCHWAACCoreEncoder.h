//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TXCHWAACCoreEncoder : NSObject
{
    struct OpaqueAudioConverter *m_converter;
    char *aacBuf;
    struct AudioStreamBasicDescription _audioStreamBasicDescription;
}

@property struct AudioStreamBasicDescription audioStreamBasicDescription; // @synthesize audioStreamBasicDescription=_audioStreamBasicDescription;
- (_Bool)createAudioConvert:(struct AudioStreamBasicDescription *)arg1;
- (void)stopEncoder;
- (id)encodeBuffer:(char *)arg1 length:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

