/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSXPCInterface;

@interface CallDBMigrator : NSObject {

	NSXPCConnection* _connection;
	NSXPCInterface* _interface;

}
-(id)init;
-(void)migrate:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end

