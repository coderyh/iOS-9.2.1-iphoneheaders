/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Accounts/DataclassOwners/News.bundle/News
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSString;

@interface FCFileCoordinatedDictionary : NSObject <NSFilePresenter> {

	NSURL* _presentedItemURL;
	NSOperationQueue* _presentedItemOperationQueue;
	NSURL* _fileURL;
	NSOperationQueue* _accessQueue;

}

@property (assign) long long maxConcurrentOperationCount; 
@property (nonatomic,copy) NSURL * fileURL;                                              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSOperationQueue * accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL;                                      //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue;              //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(BOOL)_writeDictionary:(id)arg1 toFileURL:(id)arg2 ;
-(void)writeWithAccessor:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_readFromFileURL:(id)arg1 ;
-(long long)maxConcurrentOperationCount;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(NSURL *)fileURL;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)initWithFileURL:(id)arg1 ;
-(void)setAccessQueue:(NSOperationQueue *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSOperationQueue *)accessQueue;
@end
