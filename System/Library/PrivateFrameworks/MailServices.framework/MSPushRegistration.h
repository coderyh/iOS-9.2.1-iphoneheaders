/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSMailDefaultService.h>

@class NSString, NSArray;

@interface MSPushRegistration : MSMailDefaultService {

	NSString* _bundleIdentifier;
	NSString* _accountIdentifier;
	NSString* _notificationNamePrefix;
	NSArray* _mailboxNames;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * notificationNamePrefix;              //@synthesize notificationNamePrefix=_notificationNamePrefix - In the implementation block
@property (nonatomic,copy) NSArray * mailboxNames;                         //@synthesize mailboxNames=_mailboxNames - In the implementation block
-(void)dealloc;
-(id)init;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)notificationNamePrefix;
-(NSArray *)mailboxNames;
-(void)setNotificationNamePrefix:(NSString *)arg1 ;
-(void)setMailboxNames:(NSArray *)arg1 ;
-(void)registerForPush:(/*^block*/id)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
@end

