/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKGraphSeriesDataSource.h>
#import <libobjc.A.dylib/HKChartDataCacheObserver.h>

@class HKChartCache, NSString;

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver> {

	SCD_Struct_HK0 _lastStartPath;
	SCD_Struct_HK0 _lastEndPath;
	HKChartCache* _chartCache;

}

@property (nonatomic,retain) HKChartCache * chartCache;              //@synthesize chartCache=_chartCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_resetCachedPaths;
-(void)chartCacheDidUpdate:(id)arg1 ;
-(void)setChartCache:(HKChartCache *)arg1 ;
-(id)cachedBlockForPath:(SCD_Struct_HK0)arg1 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK0)arg1 toPath:(SCD_Struct_HK0)arg2 ;
-(HKChartCache *)chartCache;
@end

