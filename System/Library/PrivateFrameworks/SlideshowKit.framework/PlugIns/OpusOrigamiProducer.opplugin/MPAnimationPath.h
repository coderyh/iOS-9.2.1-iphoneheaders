/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPAnimationSupport;
@class NSObject, MCAnimationPath;

@interface MPAnimationPath : NSObject <NSCoding, NSCopying> {

	BOOL _isTriggered;
	NSObject*<MPAnimationSupport> _parentObject;
	MCAnimationPath* _animationPath;

}

@property (assign) BOOL isTriggered; 
+(id)animationPath;
-(id)animatedKey;
-(id)animatedParent;
-(id)parentDocument;
-(void)setAnimationPath:(id)arg1 ;
-(void)cleanup;
-(void)setParent:(id)arg1 ;
-(id)animationPath;
-(void)setIsTriggered:(BOOL)arg1 ;
-(BOOL)isTriggered;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)parent;
@end
