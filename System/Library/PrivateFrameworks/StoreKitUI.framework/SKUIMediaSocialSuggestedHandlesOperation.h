/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSLock, NSArray;

@interface SKUIMediaSocialSuggestedHandlesOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	NSArray* _words;

}

@property (copy) id outputBlock; 
@property (copy) NSArray * words; 
-(void)main;
-(void)setWords:(NSArray *)arg1 ;
-(NSArray *)words;
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(id)outputBlock;
@end
