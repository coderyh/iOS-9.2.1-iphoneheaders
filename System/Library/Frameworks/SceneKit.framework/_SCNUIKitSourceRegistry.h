/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _SCNUIKitSourceRegistry : NSObject {

	NSMutableArray* _sources;

}
+(id)sharedInstance;
+(void)registerUIKitSource:(id)arg1 ;
+(void)unregisterUIKitSource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)remove:(id)arg1 ;
-(void)add:(id)arg1 ;
-(void)apply:(/*^block*/id)arg1 ;
@end
