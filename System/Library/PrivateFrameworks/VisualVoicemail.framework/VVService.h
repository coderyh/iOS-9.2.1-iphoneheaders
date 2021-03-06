/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VisualVoicemail/VisualVoicemail-Structs.h>
@class NSRecursiveLock, NSError, NSString, NSArray;

@interface VVService : NSObject {

	NSRecursiveLock* _lock;
	long long _capabilities;
	int _mailboxUsage;
	double _trashCompactionAge;
	unsigned _unreadCount;
	unsigned _trashedCount;
	NSError* _passwordError;
	NSError* _activationError;
	NSString* _password;
	NSString* _passwordMailboxName;
	NSArray* _retryIntervals;
	int _retryIntervalIndex;
	id _carrierParameters;
	Class _notificationInterpreter;
	struct {
		unsigned offline : 1;
		unsigned subscribed : 1;
		unsigned initialSetupRequired : 1;
		unsigned fakeInitialSetup : 1;
		unsigned launchedWithFakeInitialSetup : 1;
		unsigned mwiState : 1;
		unsigned notificationFallbackEnabled : 1;
		unsigned capabilitiesLoaded : 1;
	}  _serviceFlags;
	NSString* _serviceIdentifier;

}

@property (nonatomic,retain) NSString * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
+(id)sharedService;
+(void)initialize;
+(BOOL)_lockedSharedServiceIsSubscribed;
+(void)_setInsomniaStateSupressed:(BOOL)arg1 ;
+(unsigned)_voicemailPowerAssertion;
+(void)_acquireAssertionsForInsomniaState:(BOOL)arg1 ;
+(void)_subscriptionStateChanged;
+(void)_handleSIMChanged;
+(BOOL)sharedServiceIsSubscribed;
+(CTServerConnectionRef)CTServerConnection;
+(void)releaseInsomniaAssertion;
+(BOOL)_waitingForInsomniaStateToBecomeActive;
+(void)obtainInsomniaAssertion;
+(BOOL)_vvmAssertionReady;
-(double)trashCompactionAge;
-(BOOL)shouldTrashCompactRecord:(void*)arg1 ;
-(BOOL)doTrashCompaction;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setSubscribed:(BOOL)arg1 ;
-(void)removeAllRecords;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(CFStringRef)connectionServiceType;
-(void)setUnreadCount:(unsigned)arg1 ;
-(id)mailboxName;
-(long long)capabilities;
-(BOOL)isSubscribed;
-(void)_updateOnlineStatus;
-(void)cancelPasswordRequest;
-(void)_reportReachabilityChange:(id)arg1 ;
-(void)_setActivationError:(id)arg1 ;
-(void)setProvisionalPassword:(id)arg1 ;
-(void)_scheduleFallbackActivityIfNecessary;
-(BOOL)shouldScheduleAutoTrashOnMailboxUsageChange;
-(void)_setOnline:(BOOL)arg1 fallbackMode:(BOOL)arg2 ;
-(BOOL)_isOfflineDueToRoamingWithDataStatusDict:(CFDictionaryRef)arg1 ;
-(BOOL)isMessageWaiting;
-(void)_deliverFallbackNotification;
-(void)_enterFallbackMode;
-(void)_reactToIndicator;
-(void)_cancelIndicatorAction;
-(Class)notificationInterpreterClass;
-(void)displayPasswordRequestIfNecessary;
-(id)retryIntervals;
-(void)_attemptDelayedSynchronize;
-(void)_scheduleAutomatedTrashCompaction;
-(void)_attemptScheduledTrashCompaction:(id)arg1 ;
-(void)_cancelAutomatedTrashCompaction;
-(void)_dataRoamingStatusChanged;
-(void)_dataAvailabilityChanged;
-(void)_callStatusChanged;
-(void)removeAllNonDetachedRecords;
-(BOOL)isOfflineDueToRoaming;
-(void)_contextActivationSucceeded:(id)arg1 ;
-(id)activationError;
-(void)clearActivationError;
-(void)_handleIndicatorNotification:(CFDictionaryRef)arg1 ;
-(BOOL)isPasswordReady;
-(id)provisionalPassword;
-(void)handlePasswordRequestCancellation;
-(void)handlePasswordNotificationResponse:(id)arg1 ;
-(int)maximumRecordedNameDuration;
-(BOOL)headerChangesPending;
-(BOOL)synchronizationPending;
-(unsigned)unreadCount;
-(BOOL)isOnline;
-(void)setOnline:(BOOL)arg1 ;
-(NSString *)serviceIdentifier;
-(void)reportError:(id)arg1 ;
-(id)carrierParameterValueForKey:(id)arg1 ;
-(void)synchronize:(BOOL)arg1 ;
-(id)passwordIgnoringSubscription:(BOOL)arg1 ;
-(void)kill;
-(void)cancelDelayedSynchronize;
-(void)resetDelayedSynchronizationAttemptCount;
-(void)cancelAutomatedTrashCompaction;
-(BOOL)mailboxRequiresSetup;
-(void)setMailboxRequiresSetup:(BOOL)arg1 ;
-(void)scheduleAutomatedTrashCompaction;
-(void)setTrashedCount:(unsigned)arg1 ;
-(void)setMessageWaiting:(BOOL)arg1 ;
-(void)handleNotification:(id)arg1 isMWI:(BOOL)arg2 ;
-(BOOL)taskOfTypeExists:(long long)arg1 ;
-(int)mailboxUsage;
-(void)setMailboxUsage:(int)arg1 ;
-(long long)mailboxGreetingType;
-(void)scheduleDelayedSynchronize;
-(void)cancelNotificationFallback;
-(void)clearRemoteUIDsForDetachedMessages;
-(unsigned)trashedCount;
-(void)resetCounts;
-(void)updateCountsForChangedFlags:(unsigned)arg1 currentRecordFlags:(unsigned)arg2 ;
-(void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned)arg3 ;
-(void)updateLoggingSettings;
-(void)_handleSMSCAvailable;
-(void)_handleSMSReady:(BOOL)arg1 ;
-(BOOL)sharedSubscriptionRequiresSetup;
-(BOOL)respectsMWINotifications;
-(int)maximumGreetingDuration;
-(int)minimumPasswordLength;
-(int)maximumPasswordLength;
-(BOOL)passwordChangeRequiresEnteringOldPassword;
-(BOOL)doesClientManageTrashCompaction;
-(BOOL)dataForRecordPending:(void*)arg1 progressiveLoadInProgress:(BOOL*)arg2 ;
-(BOOL)greetingFetchExistsProgressiveLoadInProgress:(BOOL*)arg1 ;
-(void)progressiveDataLengthsForRecord:(void*)arg1 expected:(unsigned*)arg2 current:(unsigned*)arg3 ;
-(BOOL)isInSync;
-(void)retrieveDataForRecord:(void*)arg1 ;
-(void)moveRecordToTrash:(void*)arg1 ;
-(void)moveRecordFromTrash:(void*)arg1 ;
-(BOOL)greetingAvailable;
-(void)retrieveGreeting;
-(void)changePassword:(id)arg1 fromPassword:(id)arg2 ;
-(BOOL)isVVMAvailableOverWiFi;
@end

