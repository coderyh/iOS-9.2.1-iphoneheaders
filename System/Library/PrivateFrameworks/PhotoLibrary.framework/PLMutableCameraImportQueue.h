/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLMutableCameraImportQueue : NSObject {

	NSMutableArray* _items;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)currentItem;
-(void)enqueueImportItem:(id)arg1 ;
-(void)dequeueImportItem;
@end
