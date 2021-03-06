/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStatisticsBuilder.h>

@protocol HDHealthDaemon;
@class NSDate, NSMutableArray, NSMutableDictionary, NSNumber;

@interface HDListByTypeStatisticsBuilder : HDStatisticsBuilder {

	id<HDHealthDaemon> _healthDaemon;
	NSDate* _bucketStartDate;
	NSDate* _bucketEndDate;
	NSMutableArray* _lastUpdatedDatatypes;
	NSMutableDictionary* _calculatorByTypes;
	NSMutableDictionary* _quantitiesByDataType;
	NSMutableDictionary* _timestampByDataType;
	NSNumber* _lastAnchor;
	/*^block*/id _shouldStopProcessing;

}

@property (nonatomic,retain) NSNumber * lastAnchor;              //@synthesize lastAnchor=_lastAnchor - In the implementation block
@property (nonatomic,copy) id shouldStopProcessing;              //@synthesize shouldStopProcessing=_shouldStopProcessing - In the implementation block
-(void)setLastAnchor:(NSNumber *)arg1 ;
-(NSNumber *)lastAnchor;
-(id)initWithHealthDaemon:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)setShouldStopProcessing:(id)arg1 ;
-(id)quantitiesWithError:(id*)arg1 ;
-(void)updateValuesWithAddedSample:(id)arg1 anchor:(id)arg2 ;
-(BOOL)wasUpdated;
-(id)updatedQuantitiesByDataType;
-(id)_calculatedValuesForDatabase:(id)arg1 ;
-(BOOL)addWorkoutSamplesWithStartTimeInterval:(double)arg1 endTimeInterval:(double)arg2 sourceId:(long long)arg3 ;
-(BOOL)addCategorySamplesForType:(long long)arg1 value:(double)arg2 startTimeInterval:(double)arg3 endTimeInterval:(double)arg4 sourceId:(long long)arg5 enforceLatest:(BOOL)arg6 ;
-(BOOL)addQuantitySamplesForType:(long long)arg1 value:(double)arg2 startTimeInterval:(double)arg3 endTimeInterval:(double)arg4 sourceId:(long long)arg5 enforceLatest:(BOOL)arg6 ;
-(void)_enumerateSamplesWithDatabase:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)calculatedQuantitiesByDataType;
-(double)_relevantValueForType:(long long)arg1 ;
-(id)timeIntervalCalculatorForType:(id)arg1 ;
-(id)collectionCalculatorForType:(id)arg1 from:(id)arg2 to:(id)arg3 ;
-(id)shouldStopProcessing;
@end

