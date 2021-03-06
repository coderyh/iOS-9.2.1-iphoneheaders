/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng, NSMutableArray;

@interface GEOWaypointPlace : PBCodable <NSCopying> {

	GEOLatLng* _center;
	NSMutableArray* _roadAccessPoints;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                             //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * roadAccessPoints;              //@synthesize roadAccessPoints=_roadAccessPoints - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)roadAccessPointsCount;
-(id)roadAccessPointAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)roadAccessPoints;
-(void)addRoadAccessPoint:(id)arg1 ;
-(BOOL)hasCenter;
-(void)clearRoadAccessPoints;
-(void)setRoadAccessPoints:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

