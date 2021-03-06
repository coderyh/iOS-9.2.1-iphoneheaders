/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class MusicNowPlayingViewController, MusicUpNextViewController, UIView, NSString;

@interface MusicUpNextTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {

	/*^block*/id _transitionStartBlock;
	/*^block*/id _transitionFinishBlock;
	/*^block*/id _transitionEndBlock;
	MusicNowPlayingViewController* _nowPlayingViewController;
	MusicUpNextViewController* _upNextViewController;
	BOOL _requiresNonSpringAnimation;
	BOOL _presenting;
	UIView* _itemContainerView;

}

@property (assign,getter=isPresenting,nonatomic) BOOL presenting;              //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic,__weak) UIView * itemContainerView;                //@synthesize itemContainerView=_itemContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(BOOL)isPresenting;
-(void)setItemContainerView:(UIView *)arg1 ;
-(void)_prepareTransitionForUnderArtwork:(id)arg1 ;
-(UIView *)itemContainerView;
@end

