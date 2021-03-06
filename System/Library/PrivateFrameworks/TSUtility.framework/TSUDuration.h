/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSUDuration : NSObject <NSCopying> {

	double mTimeInterval;

}
+(id)durationWithTimeInterval:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timeInterval;
-(id)initWithTimeInterval:(double)arg1 ;
@end

