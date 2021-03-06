/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileCalSettings.bundle/MobileCalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface CSTimeZoneController : PSListController {

	PSSpecifier* _calendarTimeZoneSpecifier;
	PSSpecifier* _timeZoneSupportSpecifier;
	BOOL _timeZoneSupportEnabled;

}
-(id)specifiers;
-(id)timeZoneSupportEnabled:(id)arg1 ;
-(void)setCalendarTimeZone:(id)arg1 specifier:(id)arg2 ;
-(BOOL)_timeZoneSupportEnabled;
-(void)setTimeZoneSupportEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)calendarTimeZone:(id)arg1 ;
@end

