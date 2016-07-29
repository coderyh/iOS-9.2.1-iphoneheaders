/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@interface NEPathEventObserver : NSObject {

	network_config_cellular_blocked_observer_sRef _observer;

}

@property (assign) network_config_cellular_blocked_observer_sRef observer;              //@synthesize observer=_observer - In the implementation block
-(void)cancel;
-(void)dealloc;
-(id)init;
-(network_config_cellular_blocked_observer_sRef)observer;
-(void)setObserver:(network_config_cellular_blocked_observer_sRef)arg1 ;
-(id)initWithQueue:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
@end
