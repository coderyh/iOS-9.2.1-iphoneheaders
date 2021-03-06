/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@class RWIProtocolConfiguration;

@interface RWIProtocolInspector : NSObject {

	AugmentableInspectorController* _inspectorController;
	RetainPtr<RWIProtocolConfiguration>* _configuration;
	unique_ptr<RWIAugmentableInspectorControllerClient, std::__1::default_delete<RWIAugmentableInspectorControllerClient> >* _inspectorControllerClient;

}

@property (nonatomic,readonly) RWIProtocolConfiguration * configuration; 
@property (nonatomic,readonly) BOOL connected; 
-(RWIProtocolConfiguration *)configuration;
-(BOOL)connected;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
@end

