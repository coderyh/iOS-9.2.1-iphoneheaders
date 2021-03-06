/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCPInterAssetAnalyzer : NSObject
+(BOOL)canUseLastFrameForDistance:(id)arg1 ;
-(id)init;
-(int)generateFeature:(id)arg1 lastFrame:(BOOL)arg2 feature:(id*)arg3 ;
-(int)generateFeatureLastFrame:(id)arg1 feature:(id*)arg2 ;
-(int)distanceFromAsset:(id)arg1 toAsset:(id)arg2 distance:(float*)arg3 ;
@end

