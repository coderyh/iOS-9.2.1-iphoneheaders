/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class CKDMMCS, CKSQLitePool, NSString, NSObject;

@interface CKDAssetCache : NSObject {

	BOOL _isUnitTestingAccount;
	BOOL _isEvictionScheduled;
	int _fileDownloadPathFd;
	CKDMMCS* _MMCS;
	CKSQLitePool* _dbPool;
	NSString* _applicationBundleID;
	NSString* _dbPath;
	NSString* _fileDownloadPath;
	NSString* _packageDownloadPath;
	NSString* _packageUploadPath;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _expiryTimer;

}

@property (assign,nonatomic,__weak) CKDMMCS * MMCS;                                  //@synthesize MMCS=_MMCS - In the implementation block
@property (nonatomic,readonly) CKSQLitePool * dbPool;                                //@synthesize dbPool=_dbPool - In the implementation block
@property (assign,nonatomic) BOOL isUnitTestingAccount;                              //@synthesize isUnitTestingAccount=_isUnitTestingAccount - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleID;                         //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * dbPath;                                      //@synthesize dbPath=_dbPath - In the implementation block
@property (nonatomic,retain) NSString * fileDownloadPath;                            //@synthesize fileDownloadPath=_fileDownloadPath - In the implementation block
@property (nonatomic,retain) NSString * packageDownloadPath;                         //@synthesize packageDownloadPath=_packageDownloadPath - In the implementation block
@property (nonatomic,retain) NSString * packageUploadPath;                           //@synthesize packageUploadPath=_packageUploadPath - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> expiryTimer;              //@synthesize expiryTimer=_expiryTimer - In the implementation block
@property (assign,nonatomic) int fileDownloadPathFd;                                 //@synthesize fileDownloadPathFd=_fileDownloadPathFd - In the implementation block
@property (assign) BOOL isEvictionScheduled;                                         //@synthesize isEvictionScheduled=_isEvictionScheduled - In the implementation block
+(id)assetCacheWithApplicationBundleID:(id)arg1 dbPath:(id)arg2 fileDownloadPath:(id)arg3 packageDownloadPath:(id)arg4 packageUploadPath:(id)arg5 shouldEvictOnCreation:(BOOL)arg6 ;
+(id)_sharedCachesQueue;
+(id)_sharedCachesByPath;
+(int)openFdForDownloadPath:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CKSQLitePool *)dbPool;
-(NSString *)applicationBundleID;
-(NSObject*<OS_dispatch_source>)expiryTimer;
-(void)setExpiryTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)isUnitTestingAccount;
-(CKDMMCS *)MMCS;
-(void)setIsUnitTestingAccount:(BOOL)arg1 ;
-(void)setMMCS:(CKDMMCS *)arg1 ;
-(void)cancelExpiryTimer;
-(unsigned long long)evictAllFilesForced:(BOOL)arg1 ;
-(unsigned long long)clearForced:(BOOL)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(id)trackDownloadedData:(id)arg1 signature:(id)arg2 error:(id*)arg3 ;
-(id)trackDownloadedMMCSItems:(id)arg1 error:(id*)arg2 ;
-(void)stopTrackingAssetHandlesByItemIDs:(id)arg1 ;
-(BOOL)startTrackingAssetHandles:(id)arg1 error:(id*)arg2 ;
-(id)findAssetHandleForItemID:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)scheduleAssetHandleDeletionForItemID:(unsigned long long)arg1 UUID:(id)arg2 ;
-(void)scheduleAssetHandleLastUsedTimeUpdateForUUID:(id)arg1 ;
-(id)initWithApplicationBundleID:(id)arg1 dbPath:(id)arg2 fileDownloadPath:(id)arg3 packageDownloadPath:(id)arg4 packageUploadPath:(id)arg5 ;
-(NSString *)dbPath;
-(unsigned long long)_evictFilesForced:(BOOL)arg1 evictNow:(BOOL)arg2 ;
-(void)_expireAssetHandlesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)expireAssetHandlesIfNecessary;
-(id)_saveData:(id)arg1 error:(id*)arg2 ;
-(NSString *)fileDownloadPath;
-(int)fileDownloadPathFd;
-(id)_getAssetHandlesForDownloadedMMCSItems:(id)arg1 error:(id*)arg2 ;
-(void)_scheduleEvictionForDownloadedFiles;
-(void)_scheduleExpirationForAssetHandles;
-(void)_unregisterItemIDs:(id)arg1 ;
-(BOOL)isEvictionScheduled;
-(void)setIsEvictionScheduled:(BOOL)arg1 ;
-(unsigned long long)_evictDownloadedFilesForced:(BOOL)arg1 evictNow:(BOOL)arg2 ;
-(unsigned long long)_evictDownloadedFilesWithDatabase:(id)arg1 forced:(BOOL)arg2 evictNow:(BOOL)arg3 ;
-(NSString *)packageDownloadPath;
-(NSString *)packageUploadPath;
-(unsigned long long)_evictPackagesForced:(BOOL)arg1 evictNow:(BOOL)arg2 ;
-(void)_expireAssetHandlesWithExpiryDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(unsigned long long)predictedEvictedSizeForAllFilesForced:(BOOL)arg1 ;
-(void)setDbPath:(NSString *)arg1 ;
-(void)setFileDownloadPath:(NSString *)arg1 ;
-(void)setPackageDownloadPath:(NSString *)arg1 ;
-(void)setPackageUploadPath:(NSString *)arg1 ;
-(void)setFileDownloadPathFd:(int)arg1 ;
@end
