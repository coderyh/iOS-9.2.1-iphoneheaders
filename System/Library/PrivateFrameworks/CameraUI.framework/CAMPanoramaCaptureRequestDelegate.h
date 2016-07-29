/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMPanoramaCaptureRequestDelegate <NSObject>
@optional
-(void)panoramaRequestDidStartCapturing:(id)arg1;
-(void)panoramaRequest:(id)arg1 didGeneratePaintingStatus:(id)arg2;
-(void)panoramaRequestDidStopCapturing:(id)arg1;
-(void)panoramaRequestDidCompleteCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)panoramaRequestDidCompleteLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)panoramaRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end
