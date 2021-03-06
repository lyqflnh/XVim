//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
// UUID: 08A96362-C3A5-39DA-BFD1-541F89B65DCD
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 1390.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol DADiagnosticSaveNotesDelegate
- (void)saveNotesInBackground:(NSString *)arg1;
@end

@protocol DAValidityCheckConsumer <NSObject>
- (void)account:(DAAccount *)arg1 isValid:(_Bool)arg2 validationError:(NSError *)arg3;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol UIActionSheetDelegate <NSObject>

@optional
- (void)actionSheet:(UIActionSheet *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(UIActionSheet *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentActionSheet:(UIActionSheet *)arg1;
- (void)willPresentActionSheet:(UIActionSheet *)arg1;
- (void)actionSheetCancel:(UIActionSheet *)arg1;
- (void)actionSheet:(UIActionSheet *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

@protocol UIAlertViewDelegate <NSObject>

@optional
- (_Bool)alertViewShouldEnableFirstOtherButton:(UIAlertView *)arg1;
- (void)alertView:(UIAlertView *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(UIAlertView *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentAlertView:(UIAlertView *)arg1;
- (void)willPresentAlertView:(UIAlertView *)arg1;
- (void)alertViewCancel:(UIAlertView *)arg1;
- (void)alertView:(UIAlertView *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

@protocol UIModalViewDelegate <NSObject>

@optional
- (void)modalView:(UIModalView *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)modalView:(UIModalView *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentModalView:(UIModalView *)arg1;
- (void)willPresentModalView:(UIModalView *)arg1;
- (void)modalViewCancel:(UIModalView *)arg1;
- (void)modalView:(UIModalView *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

@interface DADiagnosticsNotesController : PSDetailController
{
}

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;
- (void)_okButtonPressed;
- (void)_cancelButtonPressed;
- (void)_enableButtons;
- (void)_disableButtons;

@end

@interface DADiagnosticsNotesPane : PSEditingPane
{
    UITextView *_notesView;
}

- (void).cxx_destruct;
- (id)preferenceValue;
- (_Bool)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface DADiagnosticsPSController : PSListController <DADiagnosticSaveNotesDelegate, UIAlertViewDelegate>
{
    UIAlertView *_simpleAlert;
    UIAlertView *_savingDataAlert;
    SEL _simpleConfirmSheetDismissedSEL;
}

+ (id)dumpRuntimeStateSpecifiers;
+ (id)linkSpecifier;
+ (_Bool)diagnosticsVisible;
- (void).cxx_destruct;
- (void)purgeFileAtPath:(id)arg1;
- (id)pathsOfPurgableFiles;
- (id)pathsOfAllLogFiles;
- (void)handleClearAllLogsForSpecifier:(id)arg1;
- (void)suspend;
- (void)handleSaveAllLogsForSpecifier:(id)arg1;
- (void)_dismissSavingDataAlert;
- (void)handleSaveAllLogsStep2;
- (void)_presentNotesController;
- (void)saveNotesInBackground:(id)arg1;
- (void)saveLogsWithNotes:(id)arg1;
- (_Bool)saveFileAtPath:(id)arg1 toDirectory:(id)arg2 withExtension:(id)arg3 error:(id *)arg4;
- (id)savedLogsDirectoryNameForSpecifier:(id)arg1;
- (void)handleDumpRuntimeStateForSpecifier:(id)arg1;
- (_Bool)isLoggingEnabledForSpecifier:(id)arg1;
- (void)setLoggingEnabled:(_Bool)arg1 forSpecifier:(id)arg2;
- (id)booleanPropertyWithSpecifier:(id)arg1;
- (void)setBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2 dismissedSelector:(SEL)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)specifiers;
- (id)diagnosticSpecifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface DASettingsAccountsUIController : ACUIViewController <DAValidityCheckConsumer, UIActionSheetDelegate, UIAlertViewDelegate>
{
    DAAccount *_account;
    _Bool _didSetFullHostURL;
    _Bool _needsSave;
    _Bool _attemptedValidation;
    _Bool _isSettingUpNewAccount;
    _Bool _accountNeedsAdd;
    _Bool _validatedSuccessfully;
    _Bool _confirmedUnvalidatedAccount;
    _Bool _haveRegisteredForAccountsChanged;
    _Bool _transitioningToFinishedAccountSetup;
}

@property(nonatomic) _Bool transitioningToFinishedAccountSetup; // @synthesize transitioningToFinishedAccountSetup=_transitioningToFinishedAccountSetup;
@property(nonatomic) _Bool haveRegisteredForAccountsChanged; // @synthesize haveRegisteredForAccountsChanged=_haveRegisteredForAccountsChanged;
@property(nonatomic) _Bool confirmedUnvalidatedAccount; // @synthesize confirmedUnvalidatedAccount=_confirmedUnvalidatedAccount;
@property(nonatomic) _Bool validatedSuccessfully; // @synthesize validatedSuccessfully=_validatedSuccessfully;
@property(nonatomic) _Bool accountNeedsAdd; // @synthesize accountNeedsAdd=_accountNeedsAdd;
@property(nonatomic) _Bool isSettingUpNewAccount; // @synthesize isSettingUpNewAccount=_isSettingUpNewAccount;
@property(retain, nonatomic) DAAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool attemptedValidation; // @synthesize attemptedValidation=_attemptedValidation;
@property(nonatomic) _Bool needsSave; // @synthesize needsSave=_needsSave;
@property(nonatomic) _Bool didSetFullHostURL; // @synthesize didSetFullHostURL=_didSetFullHostURL;
- (void).cxx_destruct;
- (void)deleteAccountButtonTapped;
- (id)localizedAccountTitleString;
- (id)localizedAccountSetupTitleString;
- (id)localizedConfirmSaveUnvalidatedAccountMessageString;
- (id)localizedConfirmSaveUnvalidatedAccountTitleString;
- (id)localizedValidationFailureTitleString;
- (id)lastGroupSpecifierInSpecifiers:(id)arg1;
- (id)currentlyEditingCell;
- (int)indexOfCurrentlyEditingCell;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)hideProgressWithPrompt:(id)arg1;
- (_Bool)isRunningFromMobileMailApp;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)_saveAccountDismissWhenDone:(_Bool)arg1;
- (void)_finishSaveAccountDismissWhenDone:(_Bool)arg1;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)_deleteAccount;
- (void)_dismissAndUpdateParent;
- (id)accountBooleanPropertyWithSpecifier:(id)arg1;
- (void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (id)accountPropertyWithSpecifier:(id)arg1;
- (void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setHostString:(id)arg1;
- (id)_defaultAccountDescription;
- (void)propertyValueChanged:(id)arg1;
- (_Bool)haveEnoughValues;
- (_Bool)transitionsAfterInitialSetup;
- (_Bool)dismissesAfterInitialSetup;
- (void)updateDoneButton;
- (void)setNeedsSaveAndValidation:(_Bool)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)finishedAccountSetup;
- (void)account:(id)arg1 isValid:(_Bool)arg2 validationError:(id)arg3;
- (void)_beginAccountValidation;
- (void)_confirmSaveUnvalidatedAccount;
- (void)didConfirmSaveUnvalidatedAccount:(_Bool)arg1;
- (void)didConfirmTryWithoutSSL:(_Bool)arg1;
- (void)showSSLFailureView;
- (void)showIdenticalAccountFailureView;
- (_Bool)validateAccount;
- (void)viewWillAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)accountSpecifiers;
- (id)specifiers;
- (id)newDefaultAccount;
- (id)daAccountWithBackingAccountInfo:(id)arg1;
- (id)accountFromSpecifier;
- (void)reloadAccount;
- (void)_accountsChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController <UIModalViewDelegate>
{
    DAAccount *_daAccount;
    _Bool _haveRegisteredForAccountsChanged;
}

@property(retain, nonatomic) DAAccount *daAccount; // @synthesize daAccount=_daAccount;
- (void).cxx_destruct;
- (void)cancelButtonClicked:(id)arg1;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (_Bool)shouldVerifyBeforeAccountSave;
- (Class)accountInfoControllerClass;
- (id)otherSpecifiers;
- (id)specifiers;
- (void)_accountsChanged:(id)arg1;
- (id)accountFromSpecifier;
- (void)reloadAccount;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_listenForAccountsChangedNotifications;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)_navTitle;
- (id)accountDescriptionForFirstTimeSetup;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface PSSpecifier (DASettingsAdditions)
+ (id)buttonSpecifierWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 confirmationInfo:(id)arg4;
+ (id)switchSpecifierWithTitle:(id)arg1 target:(id)arg2 setter:(SEL)arg3 getter:(SEL)arg4 key:(id)arg5;
@end

