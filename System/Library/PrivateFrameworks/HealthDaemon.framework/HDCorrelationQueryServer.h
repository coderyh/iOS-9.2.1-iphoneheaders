/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSDictionary;

@interface HDCorrelationQueryServer : HDQueryServer {

	long long _behaviorVersion;
	BOOL _suspended;
	NSDictionary* _dataFilters;

}

@property (nonatomic,readonly) NSDictionary * dataFilters;              //@synthesize dataFilters=_dataFilters - In the implementation block
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 ;
-(void)_queue_start;
-(BOOL)_queue_validateConfiguration:(id*)arg1 ;
-(NSDictionary *)dataFilters;
@end

