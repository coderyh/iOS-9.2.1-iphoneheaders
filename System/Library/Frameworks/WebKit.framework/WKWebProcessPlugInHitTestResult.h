/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKWebProcessPlugInNodeHandle, NSString;

@interface WKWebProcessPlugInHitTestResult : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleHitTestResult> _hitTestResult;

}

@property (readonly) WKWebProcessPlugInNodeHandle * nodeHandle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(Object*)_apiObject;
-(WKWebProcessPlugInNodeHandle *)nodeHandle;
@end

