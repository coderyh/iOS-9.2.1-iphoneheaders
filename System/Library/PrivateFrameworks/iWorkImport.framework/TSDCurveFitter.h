/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDCurveFitter : NSObject {

	double mErrorDistance;
	long long mErrorIterations;

}

@property (assign,nonatomic) double errorDistance; 
@property (assign,nonatomic) long long errorIterations; 
+(id)curveFitter;
-(id)bezierPathFittingPointArray:(CGSize*)arg1 count:(long long)arg2 ;
-(void)setErrorDistance:(double)arg1 ;
-(void)setErrorIterations:(long long)arg1 ;
-(void)fitCurveToPointArray:(CGSize*)arg1 count:(long long)arg2 bezierCallback:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(void)fitCurveToPoints:(id)arg1 bezierCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(id)bezierPathFittingPoints:(id)arg1 ;
-(double)errorDistance;
-(long long)errorIterations;
-(id)init;
@end
