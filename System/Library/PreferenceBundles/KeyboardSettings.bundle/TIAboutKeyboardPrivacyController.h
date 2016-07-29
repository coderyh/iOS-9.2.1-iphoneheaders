/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeyboardSettings/KeyboardSettings-Structs.h>
#import <UIKit/UITextViewDelegate.h>

@class PSSpecifier, PSListController, NSString;

@interface TIAboutKeyboardPrivacyController : NSObject <UITextViewDelegate> {

	BOOL _asHeader;
	PSSpecifier* _specifier;
	PSListController* _listController;

}

@property (nonatomic,retain) PSSpecifier * specifier;                        //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,retain) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic) BOOL asHeader;                                  //@synthesize asHeader=_asHeader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)listController;
-(void)setListController:(PSListController *)arg1 ;
-(id)initWithGroupSpecifier:(id)arg1 asHeader:(BOOL)arg2 inListController:(id)arg3 ;
-(void)addPrivacyLinkViewIfNecessaryToHeaderView:(id)arg1 forSection:(long long)arg2 ;
-(void)setupSpecifier;
-(BOOL)asHeader;
-(void)aboutDonePressed;
-(void)setAsHeader:(BOOL)arg1 ;
@end
