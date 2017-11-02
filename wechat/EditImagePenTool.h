//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "EditImageToolDelegate.h"

@class CAShapeLayer, NSString, UIColor, UIImage, UIImageView;

@interface EditImagePenTool : MMObject <EditImageToolDelegate>
{
    struct CGPath *_path;
    struct CGPoint _initialPoint;
    _Bool _initial;
    CAShapeLayer *slayer;
    UIImageView *tView;
    UIImage *_cacheImg;
    struct CGPath *_subpath;
    _Bool _useLayerOnly;
    struct CGPath *_relayPath;
    CAShapeLayer *_tmpLayer;
    struct CGPath *_tmpPath;
    _Bool _renderDone;
    unsigned int _penCountLimit;
    unsigned int _penCount;
    UIColor *_lineColor;
    double _lineWidth;
    id __delegate;
}

@property(nonatomic) __weak id _delegate; // @synthesize _delegate=__delegate;
@property(nonatomic) unsigned int _penCount; // @synthesize _penCount;
@property(nonatomic) double _lineWidth; // @synthesize _lineWidth;
@property(retain, nonatomic) UIColor *_lineColor; // @synthesize _lineColor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawLayer;
- (void)updateCachedImage;
- (struct CGRect)addPathWithP2Point:(struct CGPoint)arg1 withP1Point:(struct CGPoint)arg2 withCPoint:(struct CGPoint)arg3;
- (void)setInitialPoint:(struct CGPoint)arg1;
- (id)createView:(struct CGRect)arg1;
- (id)createLayer:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

