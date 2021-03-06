/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEORouteMapMatcher.h>

@interface GEORouteDriveMapMatcher : GEORouteMapMatcher
-(id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 maxDistance:(double)arg4 ;
-(double)_courseWeightForLocation:(id)arg1 accuracyType:(long long)arg2 ;
-(double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned)arg2 useStrictMatch:(BOOL)arg3 timeSinceTunnel:(double)arg4 ;
-(SCD_Struct_GE178)_matchToRouteFromLocation:(id)arg1 trackedLocation:(id)arg2 distanceLeftToSearch:(double)arg3 maxDistance:(double)arg4 ;
-(id)_setupRouteMatchWithRawLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 matchParams:(const SCD_Struct_GE178*)arg4 ;
@end

