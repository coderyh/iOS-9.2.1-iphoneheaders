/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientStop.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding> {

	psdGradientColor gradientColor;

}
+(id)colorStopWithLocation:(double)arg1 gradientColor:(psdGradientColor)arg2 ;
+(void)initialize;
-(BOOL)isColorStop;
-(double)colorLocation;
-(id)initWithLocation:(double)arg1 gradientColor:(psdGradientColor)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(psdGradientColor)gradientColor;
@end

