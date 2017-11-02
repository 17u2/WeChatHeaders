//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "CNContactPickerDelegate.h"

@class NSString, UIButton, UILabel;

@interface WCMallTelephoneTextFieldItem : WCBaseTextFieldItem <ABPeoplePickerNavigationControllerDelegate, CNContactPickerDelegate>
{
    id <MMUIViewControllerDelegate> m_vcDelegate;
    UIButton *m_btnSelectContact;
    UILabel *m_labelName;
}

- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)onSelectContact;
- (void)setViewController:(id)arg1;
- (void)setTelephoneText:(id)arg1;
- (id)getValue;
- (id)getLabelName;
- (void)setLabelName:(id)arg1;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

