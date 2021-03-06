/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebGeolocationPositionInternal;

@interface WebGeolocationPosition : NSObject {

	WebGeolocationPositionInternal* _internal;

}
-(id)initWithTimestamp:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4 ;
-(id)initWithGeolocationPosition:(PassRefPtr<WebCore::GeolocationPosition>*)arg1 ;
-(void)dealloc;
@end

