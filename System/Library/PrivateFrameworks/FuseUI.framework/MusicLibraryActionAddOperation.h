/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, MPUContentItemIdentifierCollection;

@interface MusicLibraryActionAddOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _resultingItems;
	BOOL _success;
	MPUContentItemIdentifierCollection* _contentItemIdentifierCollection;

}

@property (copy,readonly) MPUContentItemIdentifierCollection * contentItemIdentifierCollection;              //@synthesize contentItemIdentifierCollection=_contentItemIdentifierCollection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * resultingItems; 
@property (readonly) BOOL success; 
+(BOOL)canLibraryAddWithContentItemIdentifierCollection:(id)arg1 ;
-(id)init;
-(void)main;
-(BOOL)success;
-(id)initWithContentItemIdentifierCollection:(id)arg1 ;
-(NSArray *)resultingItems;
-(MPUContentItemIdentifierCollection *)contentItemIdentifierCollection;
@end

