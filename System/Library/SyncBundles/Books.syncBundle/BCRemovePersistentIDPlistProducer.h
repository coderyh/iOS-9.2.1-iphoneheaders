/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Books/BCPlistProducer.h>

@class NSArray;

@interface BCRemovePersistentIDPlistProducer : BCPlistProducer {

	NSArray* _persistentIDs;

}
-(id)initWithPath:(id)arg1 persistentIDs:(id)arg2 ;
-(id)produceData;
-(void)dealloc;
-(BOOL)shouldRetry;
@end
