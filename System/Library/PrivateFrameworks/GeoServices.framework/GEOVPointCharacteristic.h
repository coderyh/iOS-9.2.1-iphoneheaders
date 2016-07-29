/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOVLaneCharacteristic;

@interface GEOVPointCharacteristic : PBCodable <NSCopying> {

	GEOVLaneCharacteristic* _laneCharacteristic;
	int _roadLaneCount;
	int _roadOffset;
	int _sectionIndex;
	int _vertexIndex;
	int _zLevel;
	BOOL _brunnelEntry;
	BOOL _castShadow;
	BOOL _cropped;
	BOOL _shouldDrawLanes;
	SCD_Struct_GE103 _has;

}

@property (assign,nonatomic) BOOL hasSectionIndex; 
@property (assign,nonatomic) int sectionIndex;                                         //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) BOOL hasVertexIndex; 
@property (assign,nonatomic) int vertexIndex;                                          //@synthesize vertexIndex=_vertexIndex - In the implementation block
@property (assign,nonatomic) BOOL hasRoadLaneCount; 
@property (assign,nonatomic) int roadLaneCount;                                        //@synthesize roadLaneCount=_roadLaneCount - In the implementation block
@property (assign,nonatomic) BOOL hasRoadOffset; 
@property (assign,nonatomic) int roadOffset;                                           //@synthesize roadOffset=_roadOffset - In the implementation block
@property (assign,nonatomic) BOOL hasZLevel; 
@property (assign,nonatomic) int zLevel;                                               //@synthesize zLevel=_zLevel - In the implementation block
@property (assign,nonatomic) BOOL hasCropped; 
@property (assign,nonatomic) BOOL cropped;                                             //@synthesize cropped=_cropped - In the implementation block
@property (nonatomic,readonly) BOOL hasLaneCharacteristic; 
@property (nonatomic,retain) GEOVLaneCharacteristic * laneCharacteristic;              //@synthesize laneCharacteristic=_laneCharacteristic - In the implementation block
@property (assign,nonatomic) BOOL hasShouldDrawLanes; 
@property (assign,nonatomic) BOOL shouldDrawLanes;                                     //@synthesize shouldDrawLanes=_shouldDrawLanes - In the implementation block
@property (assign,nonatomic) BOOL hasCastShadow; 
@property (assign,nonatomic) BOOL castShadow;                                          //@synthesize castShadow=_castShadow - In the implementation block
@property (assign,nonatomic) BOOL hasBrunnelEntry; 
@property (assign,nonatomic) BOOL brunnelEntry;                                        //@synthesize brunnelEntry=_brunnelEntry - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasRoadLaneCount;
-(int)roadLaneCount;
-(void)setRoadLaneCount:(int)arg1 ;
-(void)setHasRoadLaneCount:(BOOL)arg1 ;
-(void)setLaneCharacteristic:(GEOVLaneCharacteristic *)arg1 ;
-(void)setBrunnelEntry:(BOOL)arg1 ;
-(void)setShouldDrawLanes:(BOOL)arg1 ;
-(BOOL)brunnelEntry;
-(BOOL)hasLaneCharacteristic;
-(void)setHasSectionIndex:(BOOL)arg1 ;
-(BOOL)castShadow;
-(void)setZLevel:(int)arg1 ;
-(void)setHasBrunnelEntry:(BOOL)arg1 ;
-(void)setHasShouldDrawLanes:(BOOL)arg1 ;
-(BOOL)hasCropped;
-(BOOL)hasRoadOffset;
-(int)roadOffset;
-(BOOL)hasVertexIndex;
-(void)setHasVertexIndex:(BOOL)arg1 ;
-(BOOL)hasShouldDrawLanes;
-(void)setHasCropped:(BOOL)arg1 ;
-(BOOL)hasBrunnelEntry;
-(void)setHasRoadOffset:(BOOL)arg1 ;
-(int)zLevel;
-(void)setCastShadow:(BOOL)arg1 ;
-(BOOL)cropped;
-(void)setCropped:(BOOL)arg1 ;
-(void)setRoadOffset:(int)arg1 ;
-(GEOVLaneCharacteristic *)laneCharacteristic;
-(void)setVertexIndex:(int)arg1 ;
-(void)setHasCastShadow:(BOOL)arg1 ;
-(BOOL)shouldDrawLanes;
-(BOOL)hasZLevel;
-(BOOL)hasSectionIndex;
-(BOOL)hasCastShadow;
-(int)vertexIndex;
-(void)setHasZLevel:(BOOL)arg1 ;
-(void)setSectionIndex:(int)arg1 ;
-(int)sectionIndex;
-(BOOL)readFrom:(id)arg1 ;
@end
