/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <UIKit/UIView.h>

@class MRTouchSet, UIPinchGestureRecognizer, UITapGestureRecognizer, MRMarimbaLayer;

@interface MRMarimbaLayerView : UIView {

	MRTouchSet* _touchSet;
	UIPinchGestureRecognizer* _pinchRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	MRMarimbaLayer* _marimbaLayer;

}

@property (readonly) MRMarimbaLayer * marimbaLayer;              //@synthesize marimbaLayer=_marimbaLayer - In the implementation block
-(void)pinch:(id)arg1 ;
-(MRMarimbaLayer *)marimbaLayer;
-(BOOL)marimbaInteractivityIsEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tap:(id)arg1 ;
@end
