/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MadGate : NSObject
-(void)performSelectorOnRemoteObject:(SEL)arg1 withParam:(id)arg2 completionBlock:(/*^block*/id)arg3 waitBlock:(/*^block*/id)arg4 ;
-(id)getActivationState;
-(BOOL)getActivationBuild;
-(unsigned char)isDeviceABrick;
-(unsigned char)hasActivationTicket;
-(id)createActivationInfo;
-(id)createRecertInfo;
-(id)handleActivationInfo:(id)arg1 ;
-(void)deactivateDevice;
-(void)reactivateDevice;
-(id)handleReCertInfo:(id)arg1 ;
-(id)copyRegulatoryImages;
-(id)copyActivationRecord;
-(BOOL)unbrickDevice;
-(BOOL)recertifyDevice;
-(BOOL)recertifyDeviceSB;
@end

