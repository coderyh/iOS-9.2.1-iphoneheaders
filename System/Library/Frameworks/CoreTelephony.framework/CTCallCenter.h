/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@class NSSet;

@interface CTCallCenter : NSObject {

	void* _server;
	NSSet* _currentCalls;
	/*^block*/id _callEventHandler;
	queue* _queue;

}

@property (retain) NSSet * currentCalls; 
@property (nonatomic,copy) id callEventHandler; 
-(BOOL)setUpServerConnection;
-(void)cleanUpServerConnection;
-(void)handleNotificationFromConnection:(void*)arg1 ofType:(id)arg2 withInfo:(id)arg3 ;
-(BOOL)calculateCallStateChanges:(id)arg1 ;
-(BOOL)getCurrentCallSetFromServer:(id)arg1 ;
-(id)callEventHandler;
-(void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 ;
-(NSSet *)currentCalls;
-(void)setCallEventHandler:(id)arg1 ;
-(void)setCurrentCalls:(NSSet *)arg1 ;
@end

