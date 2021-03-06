/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBMainAlertManager, SBRemoteAlertAdapter, SBAppStatusBarSettingsAssertion, SBWindowSelfHostWrapper, UIView, NSArray;

@interface SBUIAnimationFadeAppsToRemoteAlert : SBUIMainScreenAnimationController {

	SBMainAlertManager* _alertManager;
	SBRemoteAlertAdapter* _alert;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBWindowSelfHostWrapper* _appContextHostWrapper;
	UIView* _alertContextHostView;
	NSArray* _accessoryHostViews;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)_getTransitionWindow;
-(void)_animationFinished;
-(void)dealloc;
-(double)animationDuration;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_startAnimation;
@end

