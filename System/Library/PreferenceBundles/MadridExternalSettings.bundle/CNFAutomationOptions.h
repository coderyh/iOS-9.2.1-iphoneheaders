/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/MadridExternalSettings.bundle/MadridExternalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface CNFAutomationOptions : NSObject {

	NSString* _remote;
	NSNumber* _interval;
	NSNumber* _repetitions;

}

@property (retain) NSString * remote;                   //@synthesize remote=_remote - In the implementation block
@property (retain) NSNumber * interval;                 //@synthesize interval=_interval - In the implementation block
@property (retain) NSNumber * repetitions;              //@synthesize repetitions=_repetitions - In the implementation block
-(NSNumber *)repetitions;
-(void)setRepetitions:(NSNumber *)arg1 ;
-(void)setInterval:(NSNumber *)arg1 ;
-(NSNumber *)interval;
-(NSString *)remote;
-(void)setRemote:(NSString *)arg1 ;
@end

