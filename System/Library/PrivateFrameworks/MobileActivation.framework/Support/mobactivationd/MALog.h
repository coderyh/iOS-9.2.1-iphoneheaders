/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/Support/mobactivationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <mobactivationd/mobactivationd-Structs.h>
@interface MALog : NSObject {

	SCD_Struct_MA2* _logHandle;

}
+(id)getSharedInstance;
-(void)logMessage:(id)arg1 CopyToSyslog:(BOOL)arg2 ;
@end

