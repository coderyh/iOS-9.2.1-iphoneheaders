/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/_UIKeyboardTextSelectionGestureControllerDelegate.h>
#import <UIKit/UISelectionInteractionAssistant.h>

@class UIView, UILongPressGestureRecognizer, UITapAndAHalfRecognizer, _UIKeyboardTextSelectionController, _UIKeyboardBasedNonEditableTextSelectionGestureController, UIWebSelectionView, UIWebSelection, NSString, UIKeyboardTaskQueue;

@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate, _UIKeyboardTextSelectionGestureControllerDelegate, UISelectionInteractionAssistant> {

	UIView* _view;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapAndAHalfRecognizer* _tapAndAHalfGestureRecognizer;
	UILongPressGestureRecognizer* _forcePressGestureRecognizer;
	_UIKeyboardTextSelectionController* _textSelectionController;
	_UIKeyboardBasedNonEditableTextSelectionGestureController* _textSelectionGestureController;
	BOOL _enabled;
	UIWebSelectionView* _selectionView;

}

@property (nonatomic,readonly) UIWebSelection * selection; 
@property (nonatomic,readonly) UIView * view;                                                             //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIWebSelectionView * selectionView;                                          //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,readonly) CGRect selectionFrame; 
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                   //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * forcePressGestureRecognizer;                  //@synthesize forcePressGestureRecognizer=_forcePressGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController;              //@synthesize textSelectionController=_textSelectionController - In the implementation block
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
-(BOOL)enabled;
-(void)dealloc;
-(UIView *)view;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)scrollView;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(UIWebSelectionView *)selectionView;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(UIWebSelection *)selection;
-(void)selectionChanged;
-(id)initWithView:(id)arg1 ;
-(void)setGestureRecognizers;
-(void)resignedFirstResponder;
-(UIKeyboardTaskQueue *)taskQueue;
-(BOOL)hasSelectablePositionAtPoint:(CGPoint)arg1 ;
-(void)clearSelection;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)layoutChangedByScrolling:(BOOL)arg1 ;
-(void)willStartScrollingOverflow;
-(void)didEndScrollingOverflow;
-(void)scaleChanged;
-(CGRect)selectionFrame;
-(void)willStartScrollingOrZoomingPage;
-(void)didEndScrollingOrZoomingPage;
-(BOOL)isSelectionGestureRecognizer:(id)arg1 ;
-(void)showSelectionCommands;
-(void)configureForSelectionMode;
-(void)configureForHighlightMode;
-(void)rangedMagnifierWithState:(long long)arg1 atPoint:(CGPoint)arg2 ;
-(void)setSelectionView:(UIWebSelectionView *)arg1 ;
-(void)_addOneFingerForceGestures:(id)arg1 toView:(id)arg2 ;
-(void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(void)initializeSelectionView;
-(void)makeWebSelection:(id)arg1 ;
-(void)addSelectionViewIfNeeded;
-(void)hideCallout;
-(void)updateSelectionRects:(BOOL)arg1 ;
-(void)tap:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 fromView:(id)arg3 ;
-(UILongPressGestureRecognizer *)forcePressGestureRecognizer;
-(void)setForcePressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
@end

