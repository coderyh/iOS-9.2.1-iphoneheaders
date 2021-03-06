/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface CAMIrisMasterVideoInfo : NSObject {

	NSMutableSet* __referenceVideoURLs;

}

@property (nonatomic,readonly) NSMutableSet * _referenceVideoURLs;              //@synthesize _referenceVideoURLs=__referenceVideoURLs - In the implementation block
-(id)init;
-(BOOL)containsReferenceVideoURL:(id)arg1 ;
-(void)addReferenceVideoURL:(id)arg1 ;
-(void)removeReferenceVideoURL:(id)arg1 ;
-(unsigned long long)referenceVideoURLCount;
-(NSMutableSet *)_referenceVideoURLs;
@end

