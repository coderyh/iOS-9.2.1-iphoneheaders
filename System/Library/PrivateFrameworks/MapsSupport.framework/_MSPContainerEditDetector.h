/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol MSPMutableObject;
@class _MSPContainerEditsRecorder;

@interface _MSPContainerEditDetector : NSProxy {

	_MSPContainerEditsRecorder* _owner;
	id<MSPMutableObject> _object;

}
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithObject:(id)arg1 owner:(id)arg2 ;
@end
