/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:43:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFUserAgent
@required
-(BOOL)isMobileMail;
-(BOOL)isAllowedToAccessProtectedData;
-(BOOL)isForeground;
-(void)networkActivityStarted:(id)arg1;
-(void)networkActivityEnded:(id)arg1;
-(BOOL)canRegisterForAPSPush;
-(void)autofetchAccount:(id)arg1 mailboxUid:(id)arg2;
-(id)focusedMessage;

@end
