/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/_UIKeyboardTextSelectionGestureControllerDelegate.h>

@protocol UITextInput;
@class UIResponder, UITextSelectionView, NSMutableArray, NSMutableSet, UILongPressGestureRecognizer, UITapGestureRecognizer, UIGestureRecognizer, UIPreviewItemController, UITextChecker, _UIKeyboardTextSelectionController, _UIKeyboardBasedNonEditableTextSelectionGestureController, NSHashTable, UIScrollView, UIFieldEditor, NSString, UIKeyboardTaskQueue;

@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate, _UIKeyboardTextSelectionGestureControllerDelegate> {

	UIResponder*<UITextInput> _view;
	UITextSelectionView* _selectionView;
	NSMutableArray* _recognizers;
	NSMutableSet* _linkGestures;
	UILongPressGestureRecognizer* _highlightGesture;
	UILongPressGestureRecognizer* _tapAndHoldGesture;
	UILongPressGestureRecognizer* _loupeGesture;
	UITapGestureRecognizer* _singleTapGesture;
	UIGestureRecognizer* _doubleTapGesture;
	UIPreviewItemController* _previewItemController;
	UIGestureRecognizer* _previewGesture;
	UIGestureRecognizer* _revealGesture;
	int _autoscrollRamp;
	double _autoscrollFactor;
	CGPoint _autoscrollBasePoint;
	CGPoint _autoscrollUntransformedExtentPoint;
	CGPoint _loupeGestureEndPoint;
	double _lastTapTimestamp;
	UITextChecker* _textChecker;
	BOOL _inGesture;
	BOOL _autoscrolled;
	BOOL _isTryingToHighlightLink;
	BOOL _willHandoffLoupeMagnifier;
	BOOL _needsGestureUpdate;
	long long _previousRepeatedGranularity;
	BOOL _externalTextInput;
	_UIKeyboardTextSelectionController* _textSelectionController;
	_UIKeyboardBasedNonEditableTextSelectionGestureController* _textSelectionGestureController;
	NSHashTable* _gestureRecognizerViews;

}

@property (nonatomic,readonly) UIResponder*<UITextInput> view; 
@property (nonatomic,readonly) UITextSelectionView * selectionView; 
@property (nonatomic,readonly) UIResponder*<UITextInput> textDocument; 
@property (nonatomic,retain,readonly) UITapGestureRecognizer * singleTapGesture; 
@property (nonatomic,retain) UILongPressGestureRecognizer * loupeGesture; 
@property (nonatomic,retain) UIGestureRecognizer * doubleTapGesture; 
@property (assign,nonatomic) BOOL inGesture; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) BOOL autoscrolled; 
@property (assign,nonatomic) CGPoint autoscrollUntransformedExtentPoint; 
@property (nonatomic,readonly) BOOL externalTextInput; 
@property (assign,nonatomic) CGPoint loupeGestureEndPoint; 
@property (nonatomic,readonly) BOOL willHandoffLoupeMagnifier; 
@property (nonatomic,readonly) UIFieldEditor * fieldEditor; 
@property (nonatomic,retain) UITapGestureRecognizer * singleTapGesture; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController;              //@synthesize textSelectionController=_textSelectionController - In the implementation block
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
+(long long)_nextGranularityInCycle:(long long)arg1 ;
-(void)dealloc;
-(UIResponder*<UITextInput>)view;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIScrollView *)scrollView;
-(UIFieldEditor *)fieldEditor;
-(UITextSelectionView *)selectionView;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(void)autoscrollWillNotStart;
-(void)cancelAutoscroll;
-(void)setAutoscrolled:(BOOL)arg1 ;
-(CGPoint)autoscrollUntransformedExtentPoint;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(void)selectionChanged;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)updateAutoscroll:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)detach;
-(void)attach;
-(void)selectAll:(id)arg1 ;
-(void)setGestureRecognizers;
-(void)resignedFirstResponder;
-(void)checkEditabilityAndSetFirstResponderIfNecessary;
-(void)selectWord;
-(void)scheduleReplacements;
-(void)scheduleChineseTransliteration;
-(void)cancelInteractionWithLink;
-(void)resetGestureRecognizersForLinkInteraction;
-(BOOL)isInteractingWithLink;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(void)disableClearsOnInsertion;
-(void)clearSelection;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)scheduleReplacementsWithOptions:(unsigned long long)arg1 ;
-(void)confirmMarkedText:(id)arg1 ;
-(void)layoutChangedByScrolling:(BOOL)arg1 ;
-(void)willStartScrollingOverflow;
-(void)didEndScrollingOverflow;
-(void)setInGesture:(BOOL)arg1 ;
-(BOOL)swallowsDoubleTapWithScale:(double)arg1 atPoint:(CGPoint)arg2 ;
-(UIResponder*<UITextInput>)textDocument;
-(UILongPressGestureRecognizer *)loupeGesture;
-(UITapGestureRecognizer *)singleTapGesture;
-(void)setWillHandoffLoupeMagnifier;
-(void)loupeMagnifierWithState:(long long)arg1 atPoint:(CGPoint)arg2 ;
-(void)rangedMagnifierWithState:(long long)arg1 atPoint:(CGPoint)arg2 ;
-(void)loupeGestureWithState:(long long)arg1 atGesturePoint:(/*^block*/id)arg2 shouldCancel:(BOOL*)arg3 ;
-(void)scrollSelectionToVisible;
-(BOOL)willHandoffLoupeMagnifier;
-(id)_selectionView;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(void)clearGestureRecognizers:(BOOL)arg1 ;
-(BOOL)inGesture;
-(void)detach:(BOOL)arg1 ;
-(BOOL)containerIsBrowserView;
-(BOOL)containerIsAtom;
-(BOOL)containerIsPlainStyleAtom;
-(void)setLoupeGesture:(UILongPressGestureRecognizer *)arg1 ;
-(void)setSingleTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)setDoubleTapGesture:(UIGestureRecognizer *)arg1 ;
-(id)oneFingerDoubleTapRecognizer:(SEL)arg1 ;
-(void)oneFingerDoubleTap:(id)arg1 ;
-(id)addOneFingerDoubleTapRecognizer:(SEL)arg1 toView:(id)arg2 ;
-(id)oneFingerTapRecognizer:(SEL)arg1 ;
-(void)oneFingerTap:(id)arg1 ;
-(id)addOneFingerTapRecognizer:(SEL)arg1 toView:(id)arg2 ;
-(void)oneFingerTripleTap:(id)arg1 ;
-(id)oneFingerTripleTapRecognizer;
-(id)selectionTapRecognizer:(SEL)arg1 ;
-(id)addSelectionTapRecognizer:(SEL)arg1 toView:(id)arg2 ;
-(void)legacyTwoFingerSingleTap:(id)arg1 ;
-(id)twoFingerTapRecognizerWithTapCount:(unsigned long long)arg1 action:(SEL)arg2 ;
-(void)tapAndAHalf:(id)arg1 ;
-(id)tapAndAHalfRecognizer;
-(void)loupeGesture:(id)arg1 ;
-(id)loupeGestureRecognizer:(BOOL)arg1 ;
-(void)twoFingerRangedSelectGesture:(id)arg1 ;
-(id)twoFingerRangedSelectRecognizer;
-(void)smallDelayRecognizer:(id)arg1 ;
-(void)longDelayRecognizer:(id)arg1 ;
-(id)linkInteractionView;
-(id)_asText;
-(id)phraseBoundaryGestureRecognizer;
-(void)canBeginDragCursor:(id)arg1 ;
-(void)addGestureRecognizersToView:(id)arg1 ;
-(void)_addOneFingerForceGestures:(id)arg1 toView:(id)arg2 ;
-(BOOL)viewCouldBecomeEditable:(id)arg1 ;
-(BOOL)useGesturesForEditableContent;
-(void)oneFingerTapSelectsAll:(id)arg1 ;
-(id)addPhraseBoundaryGestureRecognizerToView:(id)arg1 ;
-(id)addOneFingerDoubleTapRecognizerToView:(id)arg1 ;
-(id)addTapAndAHalfRecognizerToView:(id)arg1 ;
-(id)addOneFingerTapRecognizerToView:(id)arg1 ;
-(id)addLoupeGestureRecognizer:(BOOL)arg1 toView:(id)arg2 ;
-(void)addKeyboardTextSelectionGestureRecognizersToView:(id)arg1 ;
-(id)addHighlightLinkRecognizerToView:(id)arg1 withHighlightDelay:(BOOL)arg2 ;
-(id)addTapAndHoldOnLinkRecognizerToView:(id)arg1 ;
-(void)addPreviewGestureRecognizerToView:(id)arg1 ;
-(void)oneFingerTapInUneditable:(id)arg1 ;
-(void)doubleTapInUneditable:(id)arg1 ;
-(void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)arg1 ;
-(void)setFirstResponderIfNecessary;
-(void)turnOffDrawsAsAtomIfPlainStyleAtom;
-(BOOL)autoscrolled;
-(void)notifyKeyboardSelectionChanged;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg1 ;
-(void)setHybridSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)shouldHandleFormGestureAtLocation:(CGPoint)arg1 ;
-(BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1 ;
-(BOOL)shouldIgnoreLinkGestures;
-(void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting;
-(BOOL)selectionRectsContainPoint:(CGPoint)arg1 ;
-(BOOL)containerChangesSelectionOnOneFingerTap;
-(id)rangeForTextReplacement:(id)arg1 ;
-(double)distanceBetweenPoint:(CGPoint)arg1 andRange:(id)arg2 ;
-(void)selectWordWithoutShowingCommands;
-(BOOL)containerIsTextField;
-(void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2 ;
-(void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(BOOL)tapOnLinkWithGesture:(id)arg1 ;
-(BOOL)containerAllowsSelectionTintOnly;
-(void)toggleSelectionCommands;
-(void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(id)_scrollable;
-(void)setAutoscrollUntransformedExtentPoint:(CGPoint)arg1 ;
-(void)activateSelection;
-(void)deactivateSelection;
-(BOOL)requiresImmediateUpdate;
-(UIGestureRecognizer *)doubleTapGesture;
-(void)setLoupeGestureEndPoint:(CGPoint)arg1 ;
-(CGPoint)loupeGestureEndPoint;
-(BOOL)externalTextInput;
-(BOOL)containerAllowsSelection;
-(id)addOneFingerTripleTapRecognizerToView:(id)arg1 ;
-(id)addSelectionTapRecognizerToView:(id)arg1 ;
-(id)addTwoFingerSingleTapRecognizerToView:(id)arg1 ;
-(id)addTwoFingerRangedSelectRecognizerToView:(id)arg1 ;
-(id)addDragRecognizer;
-(void)removeGestureRecognizersFromView:(id)arg1 ;
-(void)resetWillHandoffLoupeMagnifier;
-(void)rangeSelectionStarted:(CGPoint)arg1 ;
-(void)rangeSelectionEnded:(CGPoint)arg1 ;
-(void)rangeSelectionCanceled;
-(void)rangeSelectionMoved:(CGPoint)arg1 withTouchPoint:(CGPoint)arg2 ;
-(UIKeyboardTaskQueue *)taskQueue;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(void)willBeginGesture;
-(void)didEndGesture;
-(id)initWithResponder:(id)arg1 ;
-(void)clearGestureRecognizers;
-(id)textSelectionView;
@end

