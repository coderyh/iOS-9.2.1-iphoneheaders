/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegListController.h>
#import <libobjc.A.dylib/CNFRegWizardControllerDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@class NSString;

@interface CKSettingsMessagesController : CNFRegListController <CNFRegWizardControllerDelegate, AKAppleIDAuthenticationDelegate> {

	BOOL _showingChildViewController;
	int _profileToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)currentMessageAutoKeepForType:(int)arg1 ;
+(id)currentKeepMessages;
+(int)currentMessageAutoKeepOptionForType:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)bundle;
-(id)controllerForSpecifier:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)logName;
-(BOOL)wantsWiFiChooser;
-(BOOL)shouldShowBlacklistSettings;
-(void)_showAuthKitSignInIfNecessary;
-(void)_setupAccountHandlers;
-(void)_updateSwitch;
-(void)_setupAccountHandlersForDisabling;
-(void)_showSignInController;
-(BOOL)_allAccountsAreDeactivated;
-(void)_updateSwitchDelayed;
-(void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(BOOL)shouldShowSMSRelaySettings;
-(void)_startListeningForProfileChanges;
-(void)_stopListeningForProfileChanges;
-(BOOL)shouldShowMadridSwitch;
-(id)madridSwitchSpecifierIdentifiers;
-(id)_switchFooterText:(BOOL*)arg1 ;
-(BOOL)shouldShowDeliveryReceipts;
-(id)deliveryReceiptSpecifierIdentifiers;
-(BOOL)shouldShowReadReceipts;
-(id)readReceiptSpecifierIdentifiers;
-(BOOL)shouldShowContactPhotoSettings;
-(id)contactPhotoSettingsSpecifierIdentifiers;
-(BOOL)shouldShowMadridAccounts;
-(id)madridAccountsSpecifierIdentifiers;
-(id)characterCountSpecifierIdentifiers;
-(id)blacklistSettingsSpecifierIdentifiers;
-(BOOL)shouldShowSendAsSMS;
-(id)sendAsSMSIdentifiers;
-(BOOL)shouldShowAudioMessageSettings;
-(id)audioMessageSettingsSpecifierIdentifiers;
-(BOOL)shouldShowRaiseToListenSwitch;
-(id)raiseToListenSpecifierIdentifiers;
-(BOOL)shouldShowiMessageFilteringSettings;
-(id)iMessageFilteringSpecifierIdentifiers;
-(BOOL)shouldShowVideoMessageSettings;
-(id)videoMessageSettingsSpecifierIdentifiers;
-(id)smsRelaySettingsSpecifierIdentifiers;
-(BOOL)shouldShowGenericSettings;
-(id)genericSettingsSpecifierIdentifiers;
-(BOOL)shouldShowMadridSignin;
-(id)madridSigninSpecifiers;
-(BOOL)_isMadridAccountOperational;
-(BOOL)_isSMSDevice;
-(id)isDeliveryReportsEnabled:(id)arg1 ;
-(BOOL)_isRaiseGestureSupported;
-(id)_syncManager;
-(BOOL)_isMadridSwitchOn;
-(void)_showMadridSetupIfNecessary:(BOOL)arg1 ;
-(void)_showMadridSetupIfNecessary;
-(void)_updateUIWithError:(id)arg1 ;
-(id)_madridSettingsController;
-(id)_smsRelayDevicesController;
-(void)setSpecifierLoading:(id)arg1 loading:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setDeliveryReportsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isMMSEnabled:(id)arg1 ;
-(void)setMMSEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)willSendGroupMMS:(id)arg1 ;
-(void)setWillSendGroupMMS:(id)arg1 specifier:(id)arg2 ;
-(id)getRaiseToListenEnabled:(id)arg1 ;
-(void)setRaiseToListenEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getAudioMessageAutoKeep:(id)arg1 ;
-(void)setAudioMessageAutoKeep:(id)arg1 specifier:(id)arg2 ;
-(id)getVideoMessageAutoKeep:(id)arg1 ;
-(void)setVideoMessageAutoKeep:(id)arg1 specifier:(id)arg2 ;
-(id)isMadridEnabled:(id)arg1 ;
-(void)setMadridEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isConversationListFilteringEnabled:(id)arg1 ;
-(void)setConversationListFilteringEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)areReadReceiptsEnabled:(id)arg1 ;
-(void)setReadReceiptsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getAccountSummaryForSpecifier:(id)arg1 ;
-(void)madridSigninTappedWithSpecifier:(id)arg1 ;
-(id)madridSigninButtonTextForSpecifier:(id)arg1 ;
-(id)getSMSRelayDevicesSummary:(id)arg1 ;
-(id)getKeepMessages:(id)arg1 ;
-(void)setKeepMessages:(id)arg1 specifier:(id)arg2 ;
-(BOOL)shouldShowCharacterCount;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
-(void)newCarrierNotification;
-(id)specifiers;
@end

