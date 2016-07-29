/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CADUpcomingEventsPredicate : CADPredicate <NSSecureCoding> {

	int _limit;

}

@property (nonatomic,readonly) int limit;              //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithLimit:(int)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)predicateFormat;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLimit:(int)arg1 ;
-(int)limit;
@end
