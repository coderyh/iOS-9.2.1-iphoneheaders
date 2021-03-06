/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ML3LanguageResources, NSObject;

@interface ML3LanguageResourceManager : NSObject {

	ML3LanguageResources* _cachedResources;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedResourceManager;
-(id)init;
-(void)invalidateCachedResources;
-(void)fetchLanguageResourcesWithCompletion:(/*^block*/id)arg1 ;
-(id)_buildLanguageResources;
-(void)_fetchLanguageResourcesFromMediaLibraryService:(/*^block*/id)arg1 ;
@end

