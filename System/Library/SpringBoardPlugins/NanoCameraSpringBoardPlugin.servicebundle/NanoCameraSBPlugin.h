/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/NanoCameraSpringBoardPlugin.servicebundle/NanoCameraSpringBoardPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBPluginBundleController.h>

@interface NanoCameraSBPlugin : NSObject <SBPluginBundleController> {

	int _noteHandle;

}
+(id)sharedInstance;
+(void)awakeFromBundle;
-(void)openCamera;
-(void)dealloc;
-(id)init;
@end

