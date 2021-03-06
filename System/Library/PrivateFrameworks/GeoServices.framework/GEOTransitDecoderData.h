/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOTransitDecoderData : PBCodable <NSCopying> {

	NSMutableArray* _accessPoints;
	NSMutableArray* _artworks;
	NSMutableArray* _brands;
	NSMutableArray* _halls;
	NSMutableArray* _lines;
	NSMutableArray* _stations;
	NSMutableArray* _stops;
	NSMutableArray* _systems;
	NSMutableArray* _transitIncidentMessages;
	NSMutableArray* _transitIncidents;
	NSMutableArray* _walkings;
	NSMutableArray* _zilchPoints;

}

@property (nonatomic,retain) NSMutableArray * stations;                             //@synthesize stations=_stations - In the implementation block
@property (nonatomic,retain) NSMutableArray * brands;                               //@synthesize brands=_brands - In the implementation block
@property (nonatomic,retain) NSMutableArray * lines;                                //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessPoints;                         //@synthesize accessPoints=_accessPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * walkings;                             //@synthesize walkings=_walkings - In the implementation block
@property (nonatomic,retain) NSMutableArray * stops;                                //@synthesize stops=_stops - In the implementation block
@property (nonatomic,retain) NSMutableArray * zilchPoints;                          //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * systems;                              //@synthesize systems=_systems - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitIncidents;                     //@synthesize transitIncidents=_transitIncidents - In the implementation block
@property (nonatomic,retain) NSMutableArray * halls;                                //@synthesize halls=_halls - In the implementation block
@property (nonatomic,retain) NSMutableArray * artworks;                             //@synthesize artworks=_artworks - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitIncidentMessages;              //@synthesize transitIncidentMessages=_transitIncidentMessages - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setZilchPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)zilchPoints;
-(unsigned long long)systemsCount;
-(NSMutableArray *)systems;
-(unsigned long long)linesCount;
-(NSMutableArray *)lines;
-(void)addSystem:(id)arg1 ;
-(void)clearLines;
-(void)setLines:(NSMutableArray *)arg1 ;
-(void)clearSystems;
-(void)addLine:(id)arg1 ;
-(void)setSystems:(NSMutableArray *)arg1 ;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(id)systemAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)transitIncidents;
-(void)addTransitIncident:(id)arg1 ;
-(void)clearTransitIncidents;
-(unsigned long long)transitIncidentsCount;
-(id)transitIncidentAtIndex:(unsigned long long)arg1 ;
-(void)setTransitIncidents:(NSMutableArray *)arg1 ;
-(void)addArtwork:(id)arg1 ;
-(unsigned long long)artworksCount;
-(id)artworkAtIndex:(unsigned long long)arg1 ;
-(void)setArtworks:(NSMutableArray *)arg1 ;
-(void)clearArtworks;
-(NSMutableArray *)artworks;
-(id)brandAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)accessPointsCount;
-(id)accessPointAtIndex:(unsigned long long)arg1 ;
-(void)addWalking:(id)arg1 ;
-(void)clearHalls;
-(void)clearStops;
-(unsigned long long)brandsCount;
-(void)addHall:(id)arg1 ;
-(void)addStop:(id)arg1 ;
-(NSMutableArray *)halls;
-(NSMutableArray *)stations;
-(void)setAccessPoints:(NSMutableArray *)arg1 ;
-(void)addAccessPoint:(id)arg1 ;
-(id)walkingAtIndex:(unsigned long long)arg1 ;
-(void)setTransitIncidentMessages:(NSMutableArray *)arg1 ;
-(unsigned long long)zilchPointsCount;
-(void)addTransitIncidentMessage:(id)arg1 ;
-(void)clearTransitIncidentMessages;
-(void)addStation:(id)arg1 ;
-(id)zilchPointsAtIndex:(unsigned long long)arg1 ;
-(void)clearStations;
-(void)addBrand:(id)arg1 ;
-(void)addZilchPoints:(id)arg1 ;
-(id)hallAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)walkings;
-(unsigned long long)walkingsCount;
-(unsigned long long)stationsCount;
-(void)clearWalkings;
-(void)setStations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)transitIncidentMessages;
-(void)setWalkings:(NSMutableArray *)arg1 ;
-(id)transitIncidentMessageAtIndex:(unsigned long long)arg1 ;
-(id)stationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transitIncidentMessagesCount;
-(void)clearZilchPoints;
-(NSMutableArray *)brands;
-(void)clearAccessPoints;
-(unsigned long long)hallsCount;
-(NSMutableArray *)accessPoints;
-(unsigned long long)stopsCount;
-(void)setHalls:(NSMutableArray *)arg1 ;
-(id)stopAtIndex:(unsigned long long)arg1 ;
-(void)clearBrands;
-(void)setBrands:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stops;
-(void)setStops:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

