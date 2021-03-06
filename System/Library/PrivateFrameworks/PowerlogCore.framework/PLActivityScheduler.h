/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface PLActivityScheduler : NSObject {

	NSMutableDictionary* _activities;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (retain) NSMutableDictionary * activities;                    //@synthesize activities=_activities - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSMutableDictionary *)activities;
-(void)setActivities:(NSMutableDictionary *)arg1 ;
-(void)scheduleActivityWithIdentifier:(id)arg1 withCriteria:(id)arg2 withMustRunCriterion:(id)arg3 withQueue:(id)arg4 withInterruptBlock:(/*^block*/id)arg5 withActivityBlock:(/*^block*/id)arg6 ;
-(void)cancelActivityWithIdentifier:(id)arg1 ;
-(id)lastCompletedDateWithIdentifier:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

