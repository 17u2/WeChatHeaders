//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EJCanvasContext.h"

@class EJJavaScriptView;

@interface EJCanvasContextWebGL : EJCanvasContext
{
    unsigned int viewFrameBuffer;
    unsigned int viewRenderBuffer;
    unsigned int msaaFrameBuffer;
    unsigned int msaaRenderBuffer;
    unsigned int boundFrameBuffer;
    unsigned int boundRenderBuffer;
    unsigned int depthStencilBuffer;
    int bufferWidth;
    int bufferHeight;
    EJJavaScriptView *scriptView;
}

- (void)setHeight:(short)arg1;
- (void)setWidth:(short)arg1;
- (void)bindRenderbuffer:(int)arg1 toTarget:(unsigned int)arg2;
- (void)bindFramebuffer:(int)arg1 toTarget:(unsigned int)arg2;
- (void)clear;
- (void)prepare;
- (void)dealloc;
- (void)create;
- (void)resizeAuxiliaryBuffers;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (id)initWithScriptView:(id)arg1 width:(short)arg2 height:(short)arg3;
@property(nonatomic) _Bool needsPresenting;

@end

