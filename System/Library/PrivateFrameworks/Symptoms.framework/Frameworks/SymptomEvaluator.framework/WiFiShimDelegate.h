/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiShimDelegate <NSObject>
@optional
-(void)wifiShim_BSSIDChangedForInterface:(id)arg1;
-(void)wifiShim_WiFiManagerHasRestarted;
-(void)wifiShim_RSSIChangedTo:(long long)arg1 forInterface:(id)arg2;
-(void)wifiShim_L2NewMetrics:(id)arg1 forInterface:(id)arg2;

@end

