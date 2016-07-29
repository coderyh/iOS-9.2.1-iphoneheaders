/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEOMapTransitLink <GEOMapLine>
@property (nonatomic,readonly) unsigned long long transitLineID; 
@property (nonatomic,readonly) NSString * internalLineName; 
@property (nonatomic,readonly) unsigned minimumTravelTime; 
@property (nonatomic,readonly) id<GEOMapTransitStop> stopFrom; 
@property (nonatomic,readonly) id<GEOMapTransitStop> stopTo; 
@required
-(id<GEOMapTransitStop>)stopFrom;
-(id<GEOMapTransitStop>)stopTo;
-(unsigned)minimumTravelTime;
-(NSString *)internalLineName;
-(double)distanceInMetersFrom:(SCD_Struct_GE16)arg1 outClosestCoordinateOnLine:(SCD_Struct_GE16*)arg2;
-(unsigned long long)transitLineID;

@end
