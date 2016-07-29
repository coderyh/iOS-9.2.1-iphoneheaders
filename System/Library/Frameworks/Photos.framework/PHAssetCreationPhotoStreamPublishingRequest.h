/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, PLManagedAsset;

@interface PHAssetCreationPhotoStreamPublishingRequest : NSObject {

	NSURL* _fileURL;
	PLManagedAsset* _asset;

}

@property (nonatomic,copy) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) PLManagedAsset * asset;              //@synthesize asset=_asset - In the implementation block
-(PLManagedAsset *)asset;
-(void)setAsset:(PLManagedAsset *)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
@end
