/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface TSWPImageBulletProvider : NSObject {

	NSMutableArray* _images;
	NSMutableArray* _filenames;

}

@property (nonatomic,readonly) NSArray * predefinedImages; 
+(id)sharedInstance;
-(id)dataForDefaultImageBulletWithContext:(id)arg1 ;
-(id)p_predefinedImageNames;
-(id)p_pathToPredefinedImages;
-(id)dataForImageBullet:(id)arg1 withContext:(id)arg2 ;
-(NSArray *)predefinedImages;
@end
