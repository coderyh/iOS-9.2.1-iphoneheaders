/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction, NSString;

@interface PKUISpringAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	double _duration;
	BOOL _needsDurationUpdate;
	/*^block*/id _animationDelayHandler;
	double _mass;
	double _stiffness;
	double _damping;
	double _velocity;
	CAMediaTimingFunction* _timing;
	double _maximumVendedDelay;

}

@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double mass;                                 //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                            //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                              //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double velocity;                             //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timing;              //@synthesize timing=_timing - In the implementation block
@property (nonatomic,readonly) double maximumVendedDelay;                 //@synthesize maximumVendedDelay=_maximumVendedDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)springAnimationWithKeyPath:(id)arg1 ;
+(id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2 ;
+(id)defaultTimingFunction;
-(void)dealloc;
-(id)init;
-(void)setVelocity:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(double)duration;
-(double)velocity;
-(double)damping;
-(double)mass;
-(id)initWithVelocity:(double)arg1 ;
-(id)springAnimationWithKeyPath:(id)arg1 ;
-(void)setAnimationDelayHandler:(/*^block*/id)arg1 ;
-(id)springAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)initWithVelocity:(double)arg1 timing:(id)arg2 ;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5 ;
-(id)_springAnimationWithKeyPath:(id)arg1 ;
-(id)_springAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)_updateDurationIfNecessary;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 ;
-(/*^block*/id)animationDelayHandler;
-(double)stiffness;
-(double)maximumVendedDelay;
-(CAMediaTimingFunction *)timing;
-(void)setTiming:(CAMediaTimingFunction *)arg1 ;
@end

