/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthService.h>

@interface HDBloodPressureService : HDHealthService {

	BOOL _supportsBodyMovementDetection;
	BOOL _supportsCuffFitDetection;
	BOOL _supportsIrregularPulseDetection;
	BOOL _supportsPulseRateRangeDetection;
	BOOL _supportsMeasurementPositionDetection;
	BOOL _supportsMultipleBounds;

}

@property (readonly) BOOL supportsBodyMovementDetection;                     //@synthesize supportsBodyMovementDetection=_supportsBodyMovementDetection - In the implementation block
@property (readonly) BOOL supportsCuffFitDetection;                          //@synthesize supportsCuffFitDetection=_supportsCuffFitDetection - In the implementation block
@property (readonly) BOOL supportsIrregularPulseDetection;                   //@synthesize supportsIrregularPulseDetection=_supportsIrregularPulseDetection - In the implementation block
@property (readonly) BOOL supportsPulseRateRangeDetection;                   //@synthesize supportsPulseRateRangeDetection=_supportsPulseRateRangeDetection - In the implementation block
@property (readonly) BOOL supportsMeasurementPositionDetection;              //@synthesize supportsMeasurementPositionDetection=_supportsMeasurementPositionDetection - In the implementation block
@property (readonly) BOOL supportsMultipleBounds;                            //@synthesize supportsMultipleBounds=_supportsMultipleBounds - In the implementation block
+(long long)serviceType;
+(id)serviceUUID;
-(id)init;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)handleBloodPressureMeasurement:(id)arg1 ;
-(void)handleIntermediateCuffPressure:(id)arg1 ;
-(void)handleBloodPressureFeature:(id)arg1 ;
-(BOOL)supportsBodyMovementDetection;
-(BOOL)supportsCuffFitDetection;
-(BOOL)supportsIrregularPulseDetection;
-(BOOL)supportsPulseRateRangeDetection;
-(BOOL)supportsMeasurementPositionDetection;
-(BOOL)supportsMultipleBounds;
@end

