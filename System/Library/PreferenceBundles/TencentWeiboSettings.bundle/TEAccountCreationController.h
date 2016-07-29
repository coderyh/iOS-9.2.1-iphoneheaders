/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/TencentWeiboSettings.bundle/TencentWeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@protocol TEAccountCreationDelegate;
@class NSString, PSTextFieldSpecifier, PSSpecifier;

@interface TEAccountCreationController : ACUIViewController {

	NSString* _screenName;
	NSString* _nickName;
	NSString* _email;
	NSString* _password;
	NSString* _verify;
	NSString* _gender;
	BOOL _geoEnabled;
	PSTextFieldSpecifier* _emailSpecifier;
	PSTextFieldSpecifier* _userIDSpecifier;
	PSSpecifier* _signUpSpecifier;
	PSSpecifier* _legalSpecifier;
	id<TEAccountCreationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TEAccountCreationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_errorForErrorCode:(id)arg1 ;
-(id)screenNameWithSpecifier:(id)arg1 ;
-(void)_incrementNewAccountCounter;
-(id)locationWithSpecifier:(id)arg1 ;
-(void)setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_presentPasswordTooLongAlert;
-(void)_presentPasswordTooSimpleAlert;
-(void)_presentResponseError:(id)arg1 ;
-(BOOL)_isPasswordValid;
-(void)setScreenName:(id)arg1 withSpecifier:(id)arg2 ;
-(BOOL)_isPasswordBlackListed;
-(BOOL)_isScreenNameValid;
-(id)emailWithSpecifier:(id)arg1 ;
-(BOOL)_haveEnoughValuesForValidation;
-(void)_presentScreenNameInvalidAlert;
-(void)_presentErrorCreatingAccount;
-(void)_legalTermsOfServiceLinkTapped:(id)arg1 ;
-(id)verifyWithSpecifier:(id)arg1 ;
-(void)_setGeotagAccountSetting:(BOOL)arg1 ;
-(void)_presentScreenNameTooShortAlert;
-(int)numericValueForGender:(id)arg1 ;
-(void)setLocation:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_presentNickNameTooLongAlert;
-(void)_presentNickNameTooShortAlert;
-(void)setGender:(id)arg1 withSpecifier:(id)arg2 ;
-(void)setNickName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)genderWithSpecifier:(id)arg1 ;
-(void)setVerify:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_createAccount;
-(void)_presentScreenNameTooLongAlert;
-(id)nickNameWithSpecifier:(id)arg1 ;
-(void)setEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(BOOL)_validateValues;
-(BOOL)_isEmailAddressValid;
-(void)_presentInvalidEmailAddressAlert;
-(void)_presentPasswordVerifyDoNotMatchAlert;
-(BOOL)validateAccountCreationReturnObject:(id)arg1 ;
-(void)_signUpButtonClicked:(id)arg1 ;
-(void)_presentInvalidPasswordAlert;
-(void)_presentPasswordTooShortAlert;
-(id)passwordWithSpecifier:(id)arg1 ;
-(void)setDelegate:(id<TEAccountCreationDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<TEAccountCreationDelegate>)delegate;
-(void)viewDidLoad;
-(id)gender;
-(void)setGender:(id)arg1 ;
-(void)returnPressedAtEnd;
-(void)_cancelButtonClicked:(id)arg1 ;
-(void)_updateDoneButton;
-(id)specifiers;
-(void)propertyValueChanged:(id)arg1 ;
-(void)updateNavButtons;
@end
