/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVMutableValueTiming.h>

@interface AVConcreteMutableValueTiming : AVMutableValueTiming {

	double _value;
	double _timeStamp;
	double _rate;

}
-(id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(CGPoint)_timing;
-(void)setAnchorValue:(double)arg1 ;
-(void)setAnchorTimeStamp:(double)arg1 ;
-(double)anchorValue;
-(double)anchorTimeStamp;
-(void)setRate:(double)arg1 ;
-(double)rate;
@end

