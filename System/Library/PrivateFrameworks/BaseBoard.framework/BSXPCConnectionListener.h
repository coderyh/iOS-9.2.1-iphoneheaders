/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, BSXPCConnectionListenerHandler, OS_dispatch_queue;
@class NSObject, NSString;

@interface BSXPCConnectionListener : NSObject {

	NSObject*<OS_xpc_object> _connection;
	id<BSXPCConnectionListenerHandler> _handler;
	NSString* _service;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain,readonly) id<BSXPCConnectionListenerHandler> handler;              //@synthesize handler=_handler - In the implementation block
@property (copy,readonly) NSString * service;                                        //@synthesize service=_service - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
-(id)initWithConnection:(id)arg1 forService:(id)arg2 withHandler:(id)arg3 onQueue:(id)arg4 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id<BSXPCConnectionListenerHandler>)handler;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)service;
@end

