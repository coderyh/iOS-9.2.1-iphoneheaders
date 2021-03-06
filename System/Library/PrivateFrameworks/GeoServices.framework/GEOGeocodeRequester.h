/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOGeocodeRequester : NSObject {

	NSMapTable* _pendingBatchGeocodes;
	NSLock* _pendingGeocodesLock;

}
+(id)sharedGeocodeRequester;
-(void)dealloc;
-(id)init;
-(void)batchReverseGeocode:(id)arg1 success:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)cancelBatchReverseGeocode:(id)arg1 ;
@end

