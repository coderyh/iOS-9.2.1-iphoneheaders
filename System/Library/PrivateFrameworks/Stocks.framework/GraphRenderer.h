/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface GraphRenderer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _cancelled;

}
+(void)clearSharedRenderer;
+(id)sharedRenderer;
-(id)init;
-(void)performRenderOperation:(id)arg1 ;
@end
