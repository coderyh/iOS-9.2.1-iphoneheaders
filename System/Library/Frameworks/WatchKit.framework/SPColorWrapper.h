/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor;

@interface SPColorWrapper : NSObject <NSSecureCoding> {

	UIColor* _color;

}

@property (nonatomic,readonly) UIColor * color;              //@synthesize color=_color - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)wrapperForColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIColor *)color;
@end

