/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SYTransportLog : NSObject {

	NSString* _rootPath;
	NSString* _facility;

}

@property (nonatomic,copy) NSString * facility;              //@synthesize facility=_facility - In the implementation block
+(id)sharedInstance;
+(id)_logPath;
-(id)init;
-(void)setFacility:(NSString *)arg1 ;
-(NSString *)facility;
-(void)logMessage:(id)arg1 ;
-(BOOL)_ensureFolder;
-(id)_setupLog;
-(void)logMessage:(id)arg1 args:(char*)arg2 ;
-(void)_logMessage:(id)arg1 file:(const char*)arg2 line:(int)arg3 function:(const char*)arg4 ;
@end

