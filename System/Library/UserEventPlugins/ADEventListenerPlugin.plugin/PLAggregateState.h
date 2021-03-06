/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSSet;

@interface PLAggregateState : NSObject {

	NSNumber* energy;
	NSNumber* energyAbsolute;
	NSNumber* energyRaw;
	NSNumber* time;
	NSNumber* count;
	NSSet* substateIndices;

}

@property (nonatomic,copy) NSNumber * energy; 
@property (nonatomic,copy) NSNumber * energyAbsolute; 
@property (nonatomic,copy) NSNumber * energyRaw; 
@property (nonatomic,copy) NSNumber * time; 
@property (nonatomic,copy) NSNumber * count; 
@property (nonatomic,retain) NSSet * substateIndices; 
+(id)stateWithSubstateIndices:(id)arg1 ;
-(NSSet *)substateIndices;
-(void)incrementCount;
-(NSNumber *)energyAbsolute;
-(void)setSubstateIndices:(NSSet *)arg1 ;
-(void)resetStats;
-(id)initWithSubstateIndices:(id)arg1 ;
-(void)setEnergyRaw:(NSNumber *)arg1 ;
-(void)setEnergyAbsolute:(NSNumber *)arg1 ;
-(NSNumber *)energyRaw;
-(void)setEnergy:(NSNumber *)arg1 ;
-(void)setTime:(id)arg1 energy:(id)arg2 energyAbsolute:(id)arg3 energyRaw:(id)arg4 ;
-(void)updateCompositeStateWithBaseStates:(id)arg1 ;
-(void)dealloc;
-(NSNumber *)count;
-(id)init;
-(void)setCount:(NSNumber *)arg1 ;
-(void)setTime:(NSNumber *)arg1 ;
-(NSNumber *)time;
-(NSNumber *)energy;
@end

