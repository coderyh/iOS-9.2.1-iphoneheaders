/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VKMapSnapshotServer : NSObject {

	NSObject*<OS_dispatch_queue> _homeQueue;

}
-(void)dealloc;
-(id)initWithHomeQueue:(id)arg1 ;
-(void)renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

