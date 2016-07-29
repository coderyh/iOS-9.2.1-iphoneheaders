/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRLayer.h>

@class MREffect, NSString, NSMutableDictionary, NSArray, MRSlideProvider, MCContainerEffect, NSDictionary;

@interface MRLayerEffect : MRLayer {

	MREffect* mEffect;
	NSString* mEffectID;
	NSMutableDictionary* mSlideProvidersForElementIDs;
	NSArray* mSlideProviders;
	NSMutableDictionary* mSlideShowTimeScripts;
	NSMutableDictionary* mTextsForElementIDs;
	MRSlideProvider* mMultiImageModelInput;
	unsigned mIndexOfFirstMultiImageInput;
	NSRange mMultiImageSlideRange;
	BOOL mNeedsToUpdateEffect;
	BOOL mNeedsToUpdateTiming;
	BOOL mNeedsToUpdateSlides;
	BOOL mNeedsToUpdateTexts;
	BOOL mNeedsToUpdateEffectAttributes;
	BOOL mNeedsToUpdateEffectLiveAttributes;
	BOOL mSlidesAreReadonly;
	BOOL mHasRequestedMoreSlides;
	NSString* _panoramaPanningSlideID;
	double _panoramaPanningPreviousDelta;
	BOOL _panoramaPanningIsLandscape;
	BOOL _ignoresNextTimeSynchronization;
	double _previouslyRenderedContainerTime;
	BOOL _isInInteractiveMode;
	NSString* mTargetedElement;
	NSString* mEditedElement;
	MCContainerEffect* mContainer;

}

@property (readonly) MCContainerEffect * container; 
@property (readonly) NSDictionary * slideProvidersForElementIDs; 
@property (readonly) NSDictionary * textsForElementIDs; 
@property (nonatomic,copy) NSString * targetedElement; 
@property (nonatomic,copy) NSString * editedElement; 
@property (readonly) MREffect * effect; 
@property (setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended; 
@property (assign,nonatomic) BOOL isInInteractiveMode;                                                  //@synthesize isInInteractiveMode=_isInInteractiveMode - In the implementation block
-(double)pzrUpdate:(id)arg1 ;
-(double)pzrCancel:(id)arg1 ;
-(double)pzrStart:(id)arg1 ;
-(double)pzrEnd:(id)arg1 ;
-(double)panoramaPanningStart:(id)arg1 ;
-(double)panoramaPanningUpdate:(id)arg1 ;
-(double)panoramaPanningEnd:(id)arg1 ;
-(double)panoramaPanningCancel:(id)arg1 ;
-(void)_observePlug;
-(void)_rebuildEffect;
-(void)_updateSlides;
-(void)_updateTiming;
-(void)_updateTexts;
-(void)_unobservePlug;
-(void)_unobservePlugOnDepreactivate;
-(void)_observePlugOnPreactivate;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_cleanupProviders;
-(void)_updateEffectAttributes;
-(void)setTime:(double)arg1 ofSlide:(id)arg2 ;
-(void)_stallRenderer;
-(NSString *)editedElement;
-(void)endMorphing;
-(void)synchronizeTime;
-(void)resumeOrPause:(BOOL)arg1 ;
-(void)preactivate;
-(BOOL)isAlphaFriendly;
-(BOOL)_isNative3D;
-(CGSize)_rendererSize;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(BOOL)hasSlides;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(BOOL)_setStateValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasSomethingToRender;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 localPoint:(CGPoint*)arg2 ;
-(void)setAssetPath:(id)arg1 ofSlide:(id)arg2 ;
-(void)setCenter:(CGPoint)arg1 ofSlide:(id)arg2 ;
-(void)setScale:(double)arg1 ofSlide:(id)arg2 ;
-(void)setMaxScale:(double)arg1 ofSlide:(id)arg2 ;
-(void)setRotation:(double)arg1 ofSlide:(id)arg2 ;
-(id)currentSlideInfoForElement:(id)arg1 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 forElement:(id)arg2 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(void)setEditedElement:(NSString *)arg1 ;
-(id)_dumpLayerWithOptions:(unsigned long long)arg1 ;
-(double)interestingTimeForElement:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 andParameters:(id)arg2 ;
-(void)setKenBurnsType:(int)arg1 ofSlide:(id)arg2 ;
-(void)setPlayerHint:(id)arg1 ofSlide:(id)arg2 ;
-(void)animateCenterOfSlide:(id)arg1 to:(CGPoint)arg2 withDuration:(double)arg3 ;
-(void)animateScaleOfSlide:(id)arg1 to:(double)arg2 withDuration:(double)arg3 ;
-(void)animateRotationOfSlide:(id)arg1 to:(double)arg2 withDuration:(double)arg3 ;
-(id)currentSlideInfos;
-(NSDictionary *)slideProvidersForElementIDs;
-(void)animateCenterOfSlide:(id)arg1 to:(CGPoint)arg2 withDuration:(double)arg3 andInitialSpeed:(CGSize)arg4 ;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(BOOL)isInInteractiveMode;
-(void)setIsInInteractiveMode:(BOOL)arg1 ;
-(BOOL)getStartTime:(double*)arg1 andDuration:(double*)arg2 forMovingToElementID:(id)arg3 backwards:(BOOL)arg4 ;
-(BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double*)arg3 duration:(double*)arg4 ;
-(double)interestingTimeForTime:(double)arg1 ;
-(void)getLazyDuration:(double*)arg1 lazyFactor:(double*)arg2 animationDuration:(double*)arg3 fromInterestingTime:(double)arg4 ;
-(id)_effectAttributes;
-(NSDictionary *)textsForElementIDs;
-(BOOL)_hideTextWhileEditing;
-(void)_removeAudioDucker:(id)arg1 ;
-(void)_addAudioDucker:(id)arg1 ;
-(void)_requestRendering;
-(BOOL)supportsDynamicExpansion;
-(BOOL)asynchronousOperationsAreSuspended;
-(void)suspendAsynchronousOperations:(BOOL)arg1 ;
-(void)_effectTriggeredStop;
-(NSString *)targetedElement;
-(void)setTargetedElement:(NSString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(MCContainerEffect *)container;
-(BOOL)isOpaque;
-(void)activate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MREffect *)effect;
-(void)cleanup;
-(BOOL)hasAudio;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)unload;
@end
