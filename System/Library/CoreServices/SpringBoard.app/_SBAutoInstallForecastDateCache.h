/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SUAutoInstallForecast, NSCalendar, NSDate, NSDateIntervalFormatter, NSString;

@interface _SBAutoInstallForecastDateCache : NSObject {

	unsigned long long _scheduleType;
	SUAutoInstallForecast* _forecast;
	NSCalendar* _calendar;
	NSDate* _roundedStartDate;
	NSDate* _roundedEndDate;
	NSDateIntervalFormatter* _timeIntervalFormatter;
	BOOL _parsed;
	NSString* _roundedTimeInterval;

}

@property (assign,nonatomic) unsigned long long scheduleType;              //@synthesize scheduleType=_scheduleType - In the implementation block
@property (nonatomic,retain) NSString * roundedTimeInterval;               //@synthesize roundedTimeInterval=_roundedTimeInterval - In the implementation block
-(void)_parseForecast;
-(id)_timeIntervalFormatter;
-(NSString *)roundedTimeInterval;
-(id)_componentsFromDate:(id)arg1 ;
-(void)_computeTonightRangeRelativeToDate:(id)arg1 extraDayOffset:(long long)arg2 outStart:(id*)arg3 outEnd:(id*)arg4 ;
-(BOOL)_isStart:(id)arg1 end:(id)arg2 withinDateRange:(id)arg3 end:(id)arg4 ;
-(id)initWithForecast:(id)arg1 ;
-(unsigned long long)scheduleType;
-(void)setScheduleType:(unsigned long long)arg1 ;
-(void)setRoundedTimeInterval:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
@end
