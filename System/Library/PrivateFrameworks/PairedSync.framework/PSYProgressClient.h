/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSYProgressClient <NSObject>
@required
-(oneway void)scheduledActivityChanged:(id)arg1 fromActivity:(id)arg2 error:(id)arg3;
-(oneway void)scheduledActivityProgressChanged:(float)arg1 totalProgress:(float)arg2;
-(oneway void)scheduledActivitiesDidComplete;
-(oneway void)scheduledActivitiesProgressStateChanged:(long long)arg1;
-(oneway void)noteClientNotEntitled:(id)arg1;

@end
