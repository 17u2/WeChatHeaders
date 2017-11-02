//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface MMWCResDataChunk : MMObject
{
    void *_bytes;
    unsigned long long _length;
    long long _fileOffset;
}

@property(nonatomic) long long fileOffset; // @synthesize fileOffset=_fileOffset;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) void *bytes; // @synthesize bytes=_bytes;
- (_Bool)flush;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1 fileOffset:(long long)arg2 length:(unsigned long long)arg3;

@end

