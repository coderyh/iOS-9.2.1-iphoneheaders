/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>

@class NSMutableArray;

@interface MPMediaCollectionDownloadObserver : MPUMediaDownloadObserver {

	NSMutableArray* _downloadObservers;
	BOOL _callingProgressHandler;

}
-(id)initWithCollection:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isPurchasing;
-(double)downloadProgress;
-(unsigned long long)downloadsCount;
-(BOOL)isCurrentlyPlayable;
-(void)_callProgressHandler;
@end

