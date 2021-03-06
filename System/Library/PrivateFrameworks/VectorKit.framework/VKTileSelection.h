/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKTileSelection : NSObject {

	long long _tileSize;
	BOOL _bootstrap;
	unsigned long long _maxZ;
	double _lodBias;

}

@property (assign,nonatomic) long long tileSize;                   //@synthesize tileSize=_tileSize - In the implementation block
@property (assign,nonatomic) BOOL bootstrap;                       //@synthesize bootstrap=_bootstrap - In the implementation block
@property (assign,nonatomic) unsigned long long maxZ;              //@synthesize maxZ=_maxZ - In the implementation block
@property (assign,nonatomic) double lodBias;                       //@synthesize lodBias=_lodBias - In the implementation block
-(id)init;
-(void)setTileSize:(long long)arg1 ;
-(long long)tileSize;
-(double)lodBias;
-(void)setLodBias:(double)arg1 ;
-(void)setMaxZ:(unsigned long long)arg1 ;
-(unsigned long long)maxZ;
-(id)keysForContext:(id)arg1 neighbors:(id)arg2 selectionScale:(float)arg3 ;
-(void)setBootstrap:(BOOL)arg1 ;
-(SCD_Struct_VK592)relevantTilesForContext:(id)arg1 ;
-(BOOL)bootstrap;
@end

