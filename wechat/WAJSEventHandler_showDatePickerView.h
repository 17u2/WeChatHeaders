//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WADateTimePickerDelegate.h"

@class MMPickerMaskView, NSString, WADateTimePickerView;

@interface WAJSEventHandler_showDatePickerView : WAJSEventHandler_BaseEvent <WADateTimePickerDelegate>
{
    WADateTimePickerView *_picker;
    MMPickerMaskView *_mask;
    NSString *_current;
    NSString *_field;
    NSString *_start;
    NSString *_end;
    double _pickerTime;
}

- (void).cxx_destruct;
- (void)onConfirm:(id)arg1;
- (void)onCancel;
- (void)hidePicker:(_Bool)arg1;
- (void)showDateTimeView:(long long)arg1;
- (void)dealloc;
- (void)touchMask:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

