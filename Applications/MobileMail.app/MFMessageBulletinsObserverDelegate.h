/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMessageBulletinsObserverDelegate <NSObject>
@required
-(void)protectedDataBecameAvailableForNotificationService:(id)arg1;
-(void)messagesInvalidatedForNotificationService:(id)arg1;
-(void)invalidateSectionParametersForNotificationService:(id)arg1;
-(void)notificationService:(id)arg1 didChangeAccounts:(id)arg2 error:(id)arg3;
-(void)notificationService:(id)arg1 didFetchMessages:(id)arg2;
-(void)notificationService:(id)arg1 didFetchSummaryForMessages:(id)arg2;
-(void)notificationService:(id)arg1 didRemoveMessageIds:(id)arg2;

@end

