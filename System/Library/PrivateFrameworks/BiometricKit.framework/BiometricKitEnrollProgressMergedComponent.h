/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BiometricKitEnrollProgressCoordinates;

@interface BiometricKitEnrollProgressMergedComponent : NSObject {

	long long _componentID;
	BiometricKitEnrollProgressCoordinates* _transformationCoordinates;

}

@property (assign,nonatomic) long long componentID;                                                          //@synthesize componentID=_componentID - In the implementation block
@property (nonatomic,retain) BiometricKitEnrollProgressCoordinates * transformationCoordinates;              //@synthesize transformationCoordinates=_transformationCoordinates - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setTransformationCoordinates:(BiometricKitEnrollProgressCoordinates *)arg1 ;
-(long long)componentID;
-(void)setComponentID:(long long)arg1 ;
-(BiometricKitEnrollProgressCoordinates *)transformationCoordinates;
@end

