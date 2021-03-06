/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRRenderer, EAGLContext, MRTexture;

@interface MRSnapshotter : NSObject {

	MRRenderer* _renderer;
	EAGLContext* _context;
	MRTexture* _texture;
	BOOL _ignoresFadeInAndOut;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL isFlipped; 
@property (assign,nonatomic) double timeQuantum; 
@property (nonatomic,readonly) CGColorSpaceRef colorSpace; 
@property (assign,nonatomic) BOOL ignoresFadeInAndOut;                  //@synthesize ignoresFadeInAndOut=_ignoresFadeInAndOut - In the implementation block
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) double fadeOutStartTime; 
+(id)snapshotterWithDocument:(id)arg1 ;
-(void)snapshotToBuffer:(unsigned*)arg1 withBytesPerRow:(unsigned)arg2 atTime:(double)arg3 ;
-(CGImageRef)CGImageSnapshotAtState:(id)arg1 ;
-(BOOL)ignoresFadeInAndOut;
-(void)setIgnoresFadeInAndOut:(BOOL)arg1 ;
-(void)setTimeQuantum:(double)arg1 ;
-(double)timeQuantum;
-(id)initWithMontage:(id)arg1 andAssetManagementDelegate:(id)arg2 isReadOnly:(BOOL)arg3 ;
-(double)fadeOutStartTime;
-(void)setFadeOutStartTime:(double)arg1 ;
-(void)_snapshotToBuffer:(unsigned*)arg1 withBytesPerRow:(unsigned)arg2 ;
-(CGImageRef)_CGImageSnapshot;
-(CGImageRef)CGImageSnapshotAtTime:(double)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)setSize:(CGSize)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeOutDuration;
-(BOOL)isFlipped;
-(void)setIsFlipped:(BOOL)arg1 ;
-(CGColorSpaceRef)colorSpace;
@end

