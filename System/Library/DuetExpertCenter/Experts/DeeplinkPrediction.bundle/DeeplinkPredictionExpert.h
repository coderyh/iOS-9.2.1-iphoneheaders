/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DuetExpertCenter/Experts/DeeplinkPrediction.bundle/DeeplinkPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/_DECExpert.h>
#import <libobjc.A.dylib/_DECExpertDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, EKEventStore, DPEHourlyTrainingScheduler, NSString;

@interface DeeplinkPredictionExpert : _DECExpert <_DECExpertDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	EKEventStore* _eventStore;
	DPEHourlyTrainingScheduler* _trainingScheduler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)DPEScoredEventAssetDictionary;
+(void)_aggdLogDeepLinkExpertScores:(id)arg1 perHeuristic:(BOOL)arg2 ;
+(id)aggdStringForHeuristic:(unsigned)arg1 ;
-(id)frecencyQuery:(unsigned long long)arg1 ;
-(id)_frecencyEventsToDedupedAndSortedItems:(id)arg1 ;
-(id)spotlightHistoryQuery:(unsigned long long)arg1 ;
-(id)init;
-(void)expert:(id)arg1 prewarmPredictionForCategory:(unsigned long long)arg2 consumer:(unsigned long long)arg3 ;
-(id)expert:(id)arg1 predictionForCategory:(unsigned long long)arg2 consumer:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)expert:(id)arg1 receiveFeedback:(id)arg2 category:(unsigned long long)arg3 consumer:(unsigned long long)arg4 ;
-(void)trainExpert:(id)arg1 ;
-(id)saveModelForExpert:(id)arg1 byteLimit:(unsigned long long)arg2 ;
-(void)expert:(id)arg1 restoreModel:(id)arg2 ;
@end
