/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WLLogController : NSObject {

	BOOL _logToFile;
	BOOL _logToSyslog;
	unsigned long long _maxLogLevel;

}
+(id)sharedLogger;
+(id)_logDirectory;
-(id)init;
-(void)_reloadLogPreferences;
-(void)logMessageWithLevel:(unsigned long long)arg1 format:(id)arg2 args:(char*)arg3 ;
-(BOOL)_loggingEnabled;
@end

