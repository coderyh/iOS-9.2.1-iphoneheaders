/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _HKActiveWorkoutClient <NSObject>
@required
-(void)serverPausedWithDate:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3;
-(void)serverStoppedWithDate:(id)arg1;
-(void)serverFailedWithError:(id)arg1;

@end

