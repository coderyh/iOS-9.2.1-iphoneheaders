/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <DuetKnowledgeMonitor/_DKNotificationReceiver.h>

@class _DKPeriod, NSString;

@interface _DKUserIsFirstBacklightOnAfterWakeupMonitor : _DKMonitor <_DKNotificationReceiver> {

	_DKPeriod* eligibleForNotification;
	int displayStatusNotifyToken;
	int internalSettingChangedNotificationToken;
	BOOL _enabled;
	BOOL _FirstWakeUINotificationEnabled;
	BOOL _SoftwareUpdateUINotificationEnabled;

}

@property (assign,nonatomic) BOOL FirstWakeUINotificationEnabled;                                                             //@synthesize FirstWakeUINotificationEnabled=_FirstWakeUINotificationEnabled - In the implementation block
@property (assign,setter=oftwareUpdateUINotificationEnabled,nonatomic) BOOL SoftwareUpdateUINotificationEnabled;              //@synthesize SoftwareUpdateUINotificationEnabled=_SoftwareUpdateUINotificationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)prettyPrintDateAsLocalTime:(id)arg1 ;
+(id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;
+(id)eventStream;
+(id)fetchMostRecentPastEventForStream:(id)arg1 ;
-(void)showUINotification:(id)arg1 ;
-(BOOL)isUINotificationEnabledForKey:(id)arg1 ;
-(void)receiveNotificationEvent:(id)arg1 ;
-(void)setUINotificationEligibility;
-(BOOL)didQualifyingScreenLockEndInEligibilityPeriod;
-(void)setFirstWakeUINotificationEnabled:(BOOL)arg1 ;
-(void)setSoftwareUpdateUINotificationEnabled:(BOOL)arg1 ;
-(id)firstWakeupEventWithValue:(BOOL)arg1 ;
-(void)recordFirstWakeup:(id)arg1 ;
-(BOOL)isFirstBacklightOn;
-(BOOL)eligibleForFirstWakeUINotification;
-(BOOL)SoftwareUpdateUINotificationEnabled;
-(void)showSoftwareUpdateUINotification;
-(id)convertUTCToLocalTimeString:(id)arg1 ;
-(BOOL)FirstWakeUINotificationEnabled;
-(void)showFirstWakeupUINotification;
-(void)handleScreenUnlockEvent;
-(void)setupNotificationEligiblityPeriod;
-(void)handleBacklightTurnedOffEvent;
-(void)handleBacklightTurnedOnEvent;
-(void)registerHandleBacklightEvents;
-(void)setInternalSettingsChangedNotficationHandler;
-(void)unregisterHandleBacklightEvents;
-(id)getNextSWUpdatePrediction;
-(void)stop;
-(void)start;
-(BOOL)isInternalBuild;
@end
