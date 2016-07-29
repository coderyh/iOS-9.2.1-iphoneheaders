/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PowerlogCore/PowerlogCore-Structs.h>
@class NSArray, NSString, PLOperator;

@interface PLIOHIDOperatorComposition : NSObject {

	IOHIDEventSystemClientRef _eventSystemClient;
	NSArray* _serviceClients;
	NSString* _serviceName;
	/*^block*/id _operatorBlock;
	PLOperator* _operator;

}

@property (assign) IOHIDEventSystemClientRef eventSystemClient;              //@synthesize eventSystemClient=_eventSystemClient - In the implementation block
@property (retain) NSArray * serviceClients;                                 //@synthesize serviceClients=_serviceClients - In the implementation block
@property (retain) NSString * serviceName;                                   //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) id operatorBlock;                                 //@synthesize operatorBlock=_operatorBlock - In the implementation block
@property (retain) PLOperator * operator;                                    //@synthesize operator=_operator - In the implementation block
-(double)doubleForKey:(id)arg1 ;
-(NSString *)serviceName;
-(void)dealloc;
-(id)dictionaryForKey:(id)arg1 ;
-(IOHIDEventSystemClientRef)eventSystemClient;
-(void)setEventSystemClient:(IOHIDEventSystemClientRef)arg1 ;
-(id)operatorBlock;
-(void)setOperatorBlock:(id)arg1 ;
-(NSArray *)serviceClients;
-(void)setServiceClients:(NSArray *)arg1 ;
-(PLOperator *)operator;
-(id)initWithOperator:(id)arg1 forService:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithOperator:(id)arg1 forService:(id)arg2 ;
-(void)setOperator:(PLOperator *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
@end
