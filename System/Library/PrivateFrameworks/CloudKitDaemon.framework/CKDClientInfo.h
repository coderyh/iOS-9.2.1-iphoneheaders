/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSArray, NSString, NSObject;

@interface CKDClientInfo : NSObject {

	NSArray* _enabledKeyboards;
	NSString* _cachedHostname;
	NSObject*<OS_dispatch_queue> _hostCallbackQueue;
	MGNotificationTokenStructRef _hostNotificationToken;

}

@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) NSArray * enabledKeyboards; 
@property (nonatomic,readonly) Class CKDUITextInputModeClass; 
+(id)sharedClientInfo;
-(void)dealloc;
-(id)init;
-(id)_init;
-(NSString *)hostname;
-(NSArray *)enabledKeyboards;
-(void)_inputModeChanged;
-(void)_refreshHostname;
-(Class)CKDUITextInputModeClass;
-(void)_refreshEnabledKeyboards;
@end

