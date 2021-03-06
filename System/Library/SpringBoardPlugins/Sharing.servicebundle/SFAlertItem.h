/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/Sharing.servicebundle/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>
#import <Sharing/SFProgressAlertViewDelegate.h>

@class BBBulletin, SFAirDropTransferData, NSMutableArray, UIViewController, NSString;

@interface SFAlertItem : SBAlertItem <SFProgressAlertViewDelegate> {

	BBBulletin* _bulletin;
	SFAirDropTransferData* _transferData;
	NSMutableArray* _actions;
	UIViewController* _accessoryViewController;
	BOOL _accessoryVCSetUpComplete;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BBBulletin * bulletin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBulletin:(id)arg1 andTransferData:(id)arg2 ;
-(void)progressAlertViewTransferFinished:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)accessoryViewController;
-(BOOL)reappearsAfterUnlock;
-(BBBulletin *)bulletin;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
@end

