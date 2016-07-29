/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKSoundBuffer : NSObject {

	unsigned _bufferId;
	NSString* _path;
	double _duration;

}

@property (nonatomic,readonly) unsigned bufferId; 
@property (nonatomic,readonly) double duration; 
+(id)bufferWithFileNamed:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(double)duration;
-(unsigned)bufferId;
@end
