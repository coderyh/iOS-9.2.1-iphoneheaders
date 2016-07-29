/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MFSearchHumanTimePeriod : NSObject {

	NSString* _displayName;
	unsigned long long _calendarUnit;
	long long _deltaFrom;
	long long _deltaTo;

}

@property (nonatomic,copy,readonly) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned long long calendarUnit;                   //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (nonatomic,readonly) long long deltaFrom;                               //@synthesize deltaFrom=_deltaFrom - In the implementation block
@property (nonatomic,readonly) long long deltaTo;                                 //@synthesize deltaTo=_deltaTo - In the implementation block
@property (nonatomic,retain,readonly) NSArray * dateComponentsRange; 
+(id)humanTimePeriods;
-(id)_initWithDisplayName:(id)arg1 calendarUnit:(unsigned long long)arg2 from:(long long)arg3 to:(long long)arg4 ;
-(NSArray *)dateComponentsRange;
-(long long)deltaFrom;
-(long long)deltaTo;
-(void)dealloc;
-(id)description;
-(NSString *)displayName;
-(unsigned long long)calendarUnit;
@end
