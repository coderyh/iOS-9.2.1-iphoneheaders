/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKMetadataFilter.h>

@interface _HKComparisonMetadataFilter : _HKMetadataFilter {

	id _value;

}

@property (nonatomic,readonly) id value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_acceptsOperatorType:(unsigned long long)arg1 ;
+(id)filterWithKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end

