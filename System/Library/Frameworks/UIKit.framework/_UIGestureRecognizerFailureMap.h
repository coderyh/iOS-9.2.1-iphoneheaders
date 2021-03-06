/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _UIGestureRecognizerFailureMap : NSObject {

	NSMutableArray* _failureRequirements;
	char* _failureMap;
	int _unmetFailureRequirementCount;
	int _unmetFailureDependentCount;

}

@property (readonly) BOOL hasUnmetFailureRequirementsOrDependents; 
+(void)buildFailureMapForFailureRequirements:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reloadFailureMap;
-(BOOL)hasUnmetFailureRequirementsOrDependents;
-(void)rebuildFailureMap;
-(void)_rebuildFailureMapDeferringRelease;
-(void)failureRequirementDeallocated:(id)arg1 ;
-(void)failureRequirementEnteredOtherFailureMap:(id)arg1 ;
-(void)failureRequirementBeganRunning:(id)arg1 ;
-(void)failureRequirementCompleted:(id)arg1 withEvent:(id)arg2 pressesEvent:(id)arg3 ;
-(BOOL)_isFailureRequirementWaitingForOtherFailureRequirements:(id)arg1 ;
-(id)initWithRelatedFailureRequirements:(id)arg1 ;
-(void)_failureRequirementCompleted:(id)arg1 withEvent:(id)arg2 pressesEvent:(id)arg3 ;
-(void)_queueRecognizersForResetIfFinished;
@end

