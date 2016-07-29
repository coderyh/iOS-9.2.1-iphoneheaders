/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoClockBridgeSettings.bundle/NanoClockBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NCBSWorldCityDisplayListModel : NSObject {

	NSArray* _cachedCities;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)sharedInstance;
-(id)_cachedCityAtIndex:(unsigned long long)arg1 ;
-(void)_fetchCitiesAndNotify:(BOOL)arg1 ;
-(id)cityForIndex:(unsigned long long)arg1 ;
-(id)cityDisplayAbbreviationForIndex:(unsigned long long)arg1 ;
-(id)cityDisplayNameForIndex:(unsigned long long)arg1 ;
-(void)handleAbbreviationStoreChange:(id)arg1 ;
-(void)handleWorldCitiesChanged;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)_notifyClientsOfChange;
@end
