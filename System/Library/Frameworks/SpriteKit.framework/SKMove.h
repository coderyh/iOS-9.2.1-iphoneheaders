/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKMove : SKAction {

	SKCMove* _mycaction;

}
+(id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)moveToX:(double)arg1 duration:(double)arg2 ;
+(id)moveToY:(double)arg1 duration:(double)arg2 ;
+(id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)moveByX:(double)arg1 duration:(double)arg2 ;
+(id)moveByY:(double)arg1 duration:(double)arg2 ;
+(id)moveBy:(CGPoint)arg1 duration:(double)arg2 ;
+(id)moveTo:(CGPoint)arg1 duration:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reversedAction;
@end

