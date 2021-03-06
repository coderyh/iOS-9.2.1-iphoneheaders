/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexPath, NSMutableArray;

@interface SiriRestaurantsParsedOperationHours : NSObject {

	NSIndexPath* _nowIndexPath;
	NSMutableArray* _dayRangeStrings;
	NSMutableArray* _periodsPerDayRange;
	long long _currentOpenStatus;
	double _timeIntervalUntilStatusChange;

}
-(id)currentRangeIndexPath;
-(id)_displayStringForSiriDayOfWeek:(id)arg1 ;
-(id)_dayOfWeekOrderedKeys;
-(long long)currentOpenStatus;
-(id)initWithOperationHours:(id)arg1 timeZone:(id)arg2 ;
-(double)intervalUntilNextStatusChange;
-(void)_updateWithOperationHours:(id)arg1 timeZone:(id)arg2 ;
-(void)_updateOpenStatus:(id)arg1 timeZone:(id)arg2 ;
-(id)_displayStringForSiriDays:(id)arg1 ;
-(void)_enumerateOpenHoursRangesForHours:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateHours:(/*^block*/id)arg1 ;
-(id)currentPeriod;
@end

