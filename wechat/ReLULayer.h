//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNNKernel.h"

@interface ReLULayer : CNNKernel
{
    struct rpd_layer_info *_para;
}

- (_Bool)encodeWithCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3;
- (void)buildParamBuffer:(id)arg1;
- (id)initWithPara:(struct rpd_layer_info *)arg1 device:(id)arg2 library:(id)arg3;

@end

