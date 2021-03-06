/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@class CallHistoryDBClientHandle;

@interface ApplyLocalTransactions : CHLogger {

	CallHistoryDBClientHandle* _database;
	BOOL _sendReadUpdateNotification;

}
+(id)sortTransactionsByType:(id)arg1 ;
-(void)handleInsert:(id)arg1 ;
-(void)handleDelete:(id)arg1 ;
-(void)handleUpdate:(id)arg1 ;
-(void)handleFingerprintDelete:(id)arg1 ;
-(void)handleFingerprintUpdate:(id)arg1 ;
-(void)apply:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
@end

