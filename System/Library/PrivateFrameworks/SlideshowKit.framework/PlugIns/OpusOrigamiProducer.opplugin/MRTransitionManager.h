/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MRTransitionManager : NSObject {

	NSMutableDictionary* mTransitionSets;
	NSMutableDictionary* mTransitionPools;

}
+(void)initialize;
+(id)sharedManager;
-(id)transitionWithTransitionID:(id)arg1 ;
-(id)descriptionForTransitionID:(id)arg1 ;
-(void)recycleTransition:(id)arg1 ;
-(void)releaseResources;
-(BOOL)noContentsMotionForTransitionID:(id)arg1 ;
-(BOOL)needsSourceLayerImageForPrecomputingForTransitionID:(id)arg1 ;
-(BOOL)needsTargetLayerImageForPrecomputingForTransitionID:(id)arg1 ;
-(BOOL)needsSourceLayerToBeOpaqueForSimple3DTransitionSubtype:(long long)arg1 ;
-(BOOL)needsTargetLayerToBeOpaqueForSimple3DTransitionSubtype:(long long)arg1 ;
-(id)resourcePathForTransitionID:(id)arg1 andResource:(id)arg2 ;
-(BOOL)canHandleKenBurnsForTransitionID:(id)arg1 ;
-(void)dealloc;
-(void)cleanup;
-(id)initWithPaths:(id)arg1 ;
@end

