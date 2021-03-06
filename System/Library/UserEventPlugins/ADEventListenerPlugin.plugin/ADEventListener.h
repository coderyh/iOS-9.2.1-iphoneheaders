/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ADApplicationStateChangeEventListener, ADPowerEventListener, PLAggregateLogger;

@interface ADEventListener : NSObject {

	ADApplicationStateChangeEventListener* _appStateChangeEventListener;
	ADPowerEventListener* _powerEventListener;
	PLAggregateLogger* _aggregateLogger;

}
-(void)registerForThermalNotification;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
@end

