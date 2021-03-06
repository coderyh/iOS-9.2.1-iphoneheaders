/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLocale, GEOResourceManifestConfiguration;

@interface VKRasterMapTileRequest : NSObject <NSCopying> {

	unsigned _scale;
	long long _mapType;
	NSLocale* _locale;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	VKRasterTileKey _tileKey;

}

@property (assign,nonatomic) VKRasterTileKey tileKey;                                               //@synthesize tileKey=_tileKey - In the implementation block
@property (assign,nonatomic) long long mapType;                                                     //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) unsigned scale;                                                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) GEOResourceManifestConfiguration * manifestConfiguration;              //@synthesize manifestConfiguration=_manifestConfiguration - In the implementation block
@property (nonatomic,readonly) const VKRasterTileKey* tileKeyPtr; 
@property (nonatomic,readonly) BOOL isInvalid; 
@property (nonatomic,readonly) VKTileKey tk; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setScale:(unsigned)arg1 ;
-(unsigned)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)setManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
-(GEOResourceManifestConfiguration *)manifestConfiguration;
-(long long)mapType;
-(void)setMapType:(long long)arg1 ;
-(VKRasterTileKey)tileKey;
-(void)isReallyInvalid:(/*^block*/id)arg1 ;
-(void)setTileKey:(VKRasterTileKey)arg1 ;
-(const VKRasterTileKey*)tileKeyPtr;
-(BOOL)isInvalid;
-(VKTileKey)tk;
@end

