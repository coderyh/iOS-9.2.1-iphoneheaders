/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface PSCellularAccountOptionsController : PSListController
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)carrierChangedNotification;
-(void)subscriptionUpdatedNotification;
-(void)addNewPlanPressed:(id)arg1 ;
-(void)selectPlanWithSpecifier:(id)arg1 ;
-(id)specifiers;
@end

