/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitBaseRouteLeg.h>

@class GEOComposedTransitTripRouteStep, NSTimeZone, NSDate, NSArray;

@interface GEOComposedTransitTripRouteLeg : GEOComposedTransitBaseRouteLeg {

	GEOComposedTransitTripRouteStep* _boardStep;
	GEOComposedTransitTripRouteStep* _alightStep;
	GEOComposedTransitTripRouteStep* _blockTransferStep;
	unsigned long long _numberOfTransitStops;
	unsigned long long _vehicleIndex;

}

@property (nonatomic,readonly) id<GEOTransitSystem> transitSystem; 
@property (nonatomic,readonly) id<GEOTransitLine> transitLine; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * boardStep;                   //@synthesize boardStep=_boardStep - In the implementation block
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * alightStep;                  //@synthesize alightStep=_alightStep - In the implementation block
@property (nonatomic,readonly) NSTimeZone * departureTimeZone; 
@property (nonatomic,readonly) NSDate * departureTime; 
@property (nonatomic,readonly) NSArray * departureTimes; 
@property (nonatomic,readonly) double departureFrequencyMin; 
@property (nonatomic,readonly) double departureFrequencyMax; 
@property (nonatomic,readonly) NSDate * lastStepArrivalDate; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> routeLineArtwork; 
@property (nonatomic,readonly) unsigned long long vehicleCount; 
@property (assign,nonatomic) unsigned long long vehicleIndex;                                 //@synthesize vehicleIndex=_vehicleIndex - In the implementation block
-(void)dealloc;
-(NSDate *)departureTime;
-(unsigned long long)numberOfTransitStops;
-(id<GEOTransitSystem>)transitSystem;
-(id)routeDetailsPrimaryArtworkForVehicle:(unsigned long long)arg1 ;
-(NSArray *)departureTimes;
-(id<GEOTransitArtworkDataSource>)routeLineArtwork;
-(void)setVehicleIndex:(unsigned long long)arg1 ;
-(id)steppingArtworkForVehicle:(unsigned long long)arg1 ;
-(id)routeDetailsSecondaryArtworkForVehicle:(unsigned long long)arg1 ;
-(unsigned long long)vehicleCount;
-(id<GEOTransitLine>)transitLine;
-(unsigned long long)vehicleIndex;
-(NSTimeZone *)departureTimeZone;
-(double)departureFrequencyMax;
-(double)departureFrequencyMin;
-(GEOComposedTransitTripRouteStep *)alightStep;
-(GEOComposedTransitTripRouteStep *)boardStep;
-(BOOL)_needsStepData;
-(NSDate *)lastStepArrivalDate;
-(id)blockTransferStep;
-(id)initWithComposedRoute:(id)arg1 stepRange:(NSRange)arg2 transitStepRange:(NSRange)arg3 pointRange:(NSRange)arg4 ;
-(void)_cacheStepData;
@end
