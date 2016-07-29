/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class NSArray;

@interface AXKeyboardsController : AccessibilityBaseListController {

	NSArray* _stickyKeysSpecificSpecifiers;

}

@property (nonatomic,retain) NSArray * stickyKeysSpecificSpecifiers;              //@synthesize stickyKeysSpecificSpecifiers=_stickyKeysSpecificSpecifiers - In the implementation block
-(id)stickyKeysEnabled:(id)arg1 ;
-(void)setStickyKeysSpecificSpecifiers:(NSArray *)arg1 ;
-(NSArray *)stickyKeysSpecificSpecifiers;
-(void)setLowerCase:(id)arg1 specifier:(id)arg2 ;
-(id)lowercaseString:(id)arg1 ;
-(id)keyRepeatEnabled:(id)arg1 ;
-(id)slowKeysEnabled:(id)arg1 ;
-(void)_stickyKeysEnabledDidChange;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end
