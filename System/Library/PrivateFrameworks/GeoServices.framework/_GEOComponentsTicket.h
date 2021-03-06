/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapServiceTicket.h>

@class NSDictionary, NSString, GEOMapServiceTraits, GEOMapRegion;

@interface _GEOComponentsTicket : NSObject <GEOMapServiceTicket> {

	NSDictionary* _components;
	unsigned long long _muid;
	int _resultProviderID;
	NSString* _contentProvider;
	GEOMapServiceTraits* _traits;
	BOOL _canceled;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;                          //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                             //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) NSString * resultSectionHeader; 
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(GEOMapServiceTraits *)traits;
-(BOOL)isChainResultSet;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(NSString *)resultSectionHeader;
-(NSDictionary *)responseUserInfo;
-(GEOMapRegion *)resultBoundingRegion;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(BOOL)isCanceled;
-(id)initWithComponents:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5 ;
@end

