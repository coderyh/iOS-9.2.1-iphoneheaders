/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>

@class MCPlug;

@interface MCPlugProxy : MCObject {

	MCPlug* _plug;

}

@property (retain) MCPlug * plug;              //@synthesize plug=_plug - In the implementation block
-(void)setPlug:(MCPlug *)arg1 ;
-(MCPlug *)plug;
-(void)setSuperContainer:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)setContainer:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)zIndex;
@end
