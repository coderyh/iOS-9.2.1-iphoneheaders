/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKPaymentQueueClient;

@interface SKRequest : NSObject {

	id _requestInternal;

}

@property (assign,nonatomic) id<SKRequestDelegate> delegate; 
@property (nonatomic,copy) SKPaymentQueueClient * paymentQueueClient; 
-(void)_shutdownRequest;
-(void)_beginBackgroundTask;
-(void)cancel;
-(void)setDelegate:(id<SKRequestDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SKRequestDelegate>)delegate;
-(void)start;
-(void)_endBackgroundTask;
-(SKPaymentQueueClient *)paymentQueueClient;
-(void)_startWithMessage:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)_sendXPCMessage;
-(void)setPaymentQueueClient:(SKPaymentQueueClient *)arg1 ;
@end

