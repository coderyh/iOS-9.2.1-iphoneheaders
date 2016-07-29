/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface BackgroundTaskRequest : NSObject {

	NSObject*<OS_xpc_object> _job;
	NSString* _requestIdentifier;

}

@property (nonatomic,copy) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(id)networkAvailableRequest;
+(id)pluggedInRequest;
+(id)wifiAvailableRequest;
-(id)initWithBackgroundTaskAgentJob:(id)arg1 ;
-(id)copyBackgroundTaskAgentJob;
-(void)setValue:(id)arg1 forBackgroundTaskAgentKey:(const char*)arg2 ;
-(id)valueForBackgroundTaskAgentKey:(const char*)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)requestIdentifier;
-(void)setRequestIdentifier:(NSString *)arg1 ;
@end
