/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBBannerContextViewControllerDelegate
@required
-(void)bannerViewController:(id)arg1 willSelectAction:(id)arg2 withContext:(id)arg3;
-(void)bannerViewControllerDidSelectAction:(id)arg1;
-(void)bannerViewControllerDidRequestDismissal:(id)arg1;
-(void)bannerViewControllerDidRequestSticky:(id)arg1;
-(void)bannerViewController:(id)arg1 didRequestSticky:(BOOL)arg2;
-(void)bannerViewControllerDidReceiveRaiseGesture:(id)arg1;
-(void)bannerViewControllerDidShrinkForKeyboard:(id)arg1;
-(void)bannerViewControllerDidPullDown:(id)arg1;

@end
