/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface HKWorkoutEvent : NSObject <NSSecureCoding> {

	long long _type;
	NSDate* _date;

}

@property (readonly) long long type; 
@property (copy,readonly) NSDate * date; 
+(BOOL)supportsSecureCoding;
+(id)_newWorkoutEventWithType:(long long)arg1 date:(id)arg2 ;
+(id)_workoutEventWithType:(long long)arg1 date:(id)arg2 ;
+(id)workoutEventWithType:(long long)arg1 date:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_init;
-(long long)type;
-(NSDate *)date;
-(void)_setType:(long long)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)_validateConfiguration;
-(void)_assertPropertiesValid;
-(void)_setDate:(id)arg1 ;
@end

