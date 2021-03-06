/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSProcessAssertion;

@interface _UIBackgroundTaskInfo : NSObject {

	unsigned long long _taskId;
	/*^block*/id _expireHandler;
	BKSProcessAssertion* _processAssertion;
	int _count;

}
+(id)backgroundTaskAssertionQueue;
-(void)dealloc;
-(void)invalidate;
-(id)initWithProcessAssertion:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)fireExpirationHandler;
@end

