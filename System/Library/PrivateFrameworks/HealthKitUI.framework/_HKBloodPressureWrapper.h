/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKStatistics;

@interface _HKBloodPressureWrapper : NSObject {

	HKStatistics* _systolic;
	HKStatistics* _diastolic;

}

@property (nonatomic,retain) HKStatistics * systolic;               //@synthesize systolic=_systolic - In the implementation block
@property (nonatomic,retain) HKStatistics * diastolic;              //@synthesize diastolic=_diastolic - In the implementation block
-(HKStatistics *)systolic;
-(void)setSystolic:(HKStatistics *)arg1 ;
-(HKStatistics *)diastolic;
-(void)setDiastolic:(HKStatistics *)arg1 ;
@end

