/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface FigIOHIDMotionDelegate : NSObject {

	opaque_pthread_mutex_t ringMutex;
	BOOL manageAccel;
	int accelRingIndex;
	float accelRingX[64];
	float accelRingY[64];
	float accelRingZ[64];
	double accelRingTime[64];

}
-(void)dealloc;
-(id)init;
-(void)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(BOOL)managingAccel;
-(void)deferOnRunloop_initManagerUsingIOHID;
-(id)initWithOptions:(BOOL)arg1 enableRotation:(BOOL)arg2 enableAttitude:(BOOL)arg3 ;
-(void)deferOnRunloop_stopEvents;
-(void)didUpdateAccelerationWithEventInfo:(SCD_Struct_Fi55*)arg1 ;
@end
