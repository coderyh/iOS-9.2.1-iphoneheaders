/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class _UIBackdropView, UITextView, MPAVItem, NSString;

@interface MusicNowPlayingLyricsViewController : UIViewController <UIViewControllerTransitioningDelegate> {

	_UIBackdropView* _backdropView;
	UITextView* _textView;
	MPAVItem* _currentItem;

}

@property (nonatomic,readonly) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) UITextView * textView;                       //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) MPAVItem * currentItem;                        //@synthesize currentItem=_currentItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setCurrentItem:(MPAVItem *)arg1 ;
-(MPAVItem *)currentItem;
-(UITextView *)textView;
-(_UIBackdropView *)backdropView;
-(void)_updateLyrics;
@end

