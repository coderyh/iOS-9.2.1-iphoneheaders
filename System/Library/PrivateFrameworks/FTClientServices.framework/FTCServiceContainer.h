/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject {

	FTCServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) FTCServiceMonitor * monitor;                    //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * listeners;              //@synthesize listeners=_listeners - In the implementation block
-(void)dealloc;
-(FTCServiceMonitor *)monitor;
-(BOOL)hasListenerID:(id)arg1 ;
-(void)setMonitor:(FTCServiceMonitor *)arg1 ;
-(id)initWithServiceType:(long long)arg1 ;
-(BOOL)removeListenerID:(id)arg1 ;
-(BOOL)addListenerID:(id)arg1 ;
-(NSMutableSet *)listeners;
@end
