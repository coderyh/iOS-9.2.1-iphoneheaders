/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRTransferServerDelegate <NSObject>
@optional
-(void)server:(id)arg1 didFailToReceiveData:(id)arg2;
-(void)serverWillReceiveData:(id)arg1;
-(void)server:(id)arg1 didReceiveData:(id)arg2 replyHandler:(/*^block*/id)arg3;

@end

