/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/FinishDownloadStepOperation.h>

@interface InstallEBookDownloadOperation : FinishDownloadStepOperation
-(id)_storeFrontIdentifier;
-(BOOL)_installMediaAsset:(id)arg1 installedPath:(id*)arg2 error:(id*)arg3 ;
-(id)_bookManifest;
-(void)_addPurchaseManifestItem;
-(id)_existingManifestEntry;
-(id)_newManifestEntry;
-(id)_syncedBooksPath;
-(void)run;
@end
