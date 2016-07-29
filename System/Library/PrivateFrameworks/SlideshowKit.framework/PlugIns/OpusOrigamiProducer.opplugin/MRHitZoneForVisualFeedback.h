/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRHitZoneForVisualFeedback : NSObject {

	BOOL _hasEnded;
	double _timestamp;
	float* _vertices;
	unsigned long long _countOfVertices;

}

@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEnded;                           //@synthesize hasEnded=_hasEnded - In the implementation block
@property (readonly) float* vertices;                                 //@synthesize vertices=_vertices - In the implementation block
@property (readonly) unsigned long long countOfVertices;              //@synthesize countOfVertices=_countOfVertices - In the implementation block
-(BOOL)hasEnded;
-(unsigned long long)countOfVertices;
-(void)set2DVertices:(const float*)arg1 countOfVertices:(unsigned long long)arg2 ;
-(void)setHasEnded:(BOOL)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(float*)vertices;
@end
