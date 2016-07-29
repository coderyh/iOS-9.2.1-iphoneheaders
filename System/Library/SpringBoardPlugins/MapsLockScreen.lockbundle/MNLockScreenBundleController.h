/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <libobjc.A.dylib/SBPluginBundleController.h>

@class CPDistributedMessagingCenter, MNBannerSource;

@interface MNLockScreenBundleController : NSObject <SBPluginBundleController> {

	CPDistributedMessagingCenter* _eventsCenter;
	CFSetRef _observers;
	MNBannerSource* _bannerSource;

}
+(id)sharedInstance;
+(id)rootViewController;
-(void)_remoteViewDidInvalidate:(id)arg1 userInfo:(id)arg2 ;
-(void)_remoteViewDidBecomeAvailable:(id)arg1 userInfo:(id)arg2 ;
-(void)_guidanceChanged:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end
