/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache, NSMutableDictionary;

@interface PKAsyncCache : NSObject {

	NSCache* _itemByKey;
	NSMutableDictionary* _deliveryBlocksByKey;

}
-(void)dealloc;
-(id)init;
-(id)initWithCache:(id)arg1 ;
-(void)_queue_executeDeliveryBlocksForKey:(id)arg1 withItem:(id)arg2 ;
-(void)_executeRetrievalBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)retrieveItemForKey:(id)arg1 retrievalBlock:(/*^block*/id)arg2 deliveryBlock:(/*^block*/id)arg3 ;
@end
