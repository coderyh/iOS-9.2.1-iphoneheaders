/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface HDIdentifierTable : NSObject {

	NSMapTable* _map;
	unsigned long long _nextIdentifier;

}

@property (nonatomic,retain) NSMapTable * map;                               //@synthesize map=_map - In the implementation block
@property (assign,nonatomic) unsigned long long nextIdentifier;              //@synthesize nextIdentifier=_nextIdentifier - In the implementation block
-(unsigned long long)count;
-(unsigned long long)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)allObjects;
-(void)removeObjectWithIdentifier:(unsigned long long)arg1 ;
-(id)objectWithIdentifier:(unsigned long long)arg1 ;
-(void)setMap:(NSMapTable *)arg1 ;
-(unsigned long long)nextIdentifier;
-(void)setNextIdentifier:(unsigned long long)arg1 ;
-(NSMapTable *)map;
@end

