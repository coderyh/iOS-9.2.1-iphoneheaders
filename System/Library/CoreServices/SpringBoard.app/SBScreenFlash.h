/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIScreen, UIWindow, UIView;

@interface SBScreenFlash : NSObject {

	NSMutableArray* _flashCompletionBlocks;
	UIScreen* _screen;
	UIWindow* _flashWindow;
	UIView* _flashView;
	BOOL _windowVisible;

}
+(id)mainScreenFlasher;
-(void)flashColor:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_orderWindowOut:(id)arg1 ;
-(void)_orderWindowFront:(id)arg1 withColor:(id)arg2 ;
-(void)_animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_createUIWithColor:(id)arg1 ;
-(void)flashWhiteWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithScreen:(id)arg1 ;
-(void)_tearDown;
@end

