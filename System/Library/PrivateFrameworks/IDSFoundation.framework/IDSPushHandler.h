/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class APSConnection, NSData, NSMutableSet, NSMapTable, NSObject, NSString;

@interface IDSPushHandler : NSObject <APSConnectionDelegate> {

	APSConnection* _apsConnection;
	NSData* _cachedPushToken;
	Class _APSConnectionClass;
	NSMutableSet* _topicsCache;
	NSMapTable* _handlerMap;
	NSObject*<OS_dispatch_queue> _ivarQueue;

}

@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_updateTopicsOnIvarQueue;
-(void)_recalculateTopicsCacheOnIvarQueue;
-(void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4 ;
-(void)setTopics:(id)arg1 forListener:(id)arg2 ;
-(void)setCommands:(id)arg1 forListener:(id)arg2 ;
-(void)configureAsMacNotificationCenterObserver:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(BOOL)isConnected;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(NSData *)pushToken;
@end

