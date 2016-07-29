/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClientFlowService/CFCommandProcessor.h>

@protocol CFCommandProcessor <NSObject>
@required
-(BOOL)isDeviceLockedWithPasscode;
-(void)handleCommand:(id)arg1 reply:(/*^block*/id)arg2;

@end


@protocol AFServiceHelper;
@class NSString;

@interface CFCommandProcessor : NSObject <CFCommandProcessor> {

	id<AFServiceHelper> _serviceHelper;

}

@property (nonatomic,copy,readonly) id<AFServiceHelper> serviceHelper;              //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceHelper:(id)arg1 ;
-(BOOL)isDeviceLockedWithPasscode;
-(void)handleCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id<AFServiceHelper>)serviceHelper;
@end
