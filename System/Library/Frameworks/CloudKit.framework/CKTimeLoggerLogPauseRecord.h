/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKTimeLoggerLogPauseRecord : NSObject {

	double _time;
	NSString* _message;

}

@property (assign,nonatomic) double time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
-(NSString *)message;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)setMessage:(NSString *)arg1 ;
@end

