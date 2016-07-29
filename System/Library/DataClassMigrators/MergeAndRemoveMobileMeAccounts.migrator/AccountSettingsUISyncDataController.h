/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AccountSettingsUIAccount;
@class ASSBasicAccount, ASSDeviceLocalAccount;

@interface AccountSettingsUISyncDataController : NSObject {

	ASSBasicAccount*<AccountSettingsUIAccount> _syncAccount;
	ASSDeviceLocalAccount* _deviceLocalAccount;
	BOOL _shouldSaveDeviceLocalAccount;

}

@property (nonatomic,retain) ASSBasicAccount*<AccountSettingsUIAccount> syncAccount;              //@synthesize syncAccount=_syncAccount - In the implementation block
@property (nonatomic,readonly) BOOL shouldSaveDeviceLocalAccount;                                 //@synthesize shouldSaveDeviceLocalAccount=_shouldSaveDeviceLocalAccount - In the implementation block
@property (nonatomic,readonly) ASSDeviceLocalAccount * deviceLocalAccount; 
-(void)removeLocalDataStoreForDataclass:(id)arg1 ;
-(void)mergeSyncDataForDataclass:(id)arg1 ;
-(ASSBasicAccount*<AccountSettingsUIAccount>)syncAccount;
-(id)_syncActionsAccount;
-(void)hideLocalStoreForDataclass:(id)arg1 ;
-(void)removeDataStoreForDataclass:(id)arg1 ;
-(void)createLocalDataSourceForDataclass:(id)arg1 ;
-(void)clearAnchorsForLocalDataclass:(id)arg1 ;
-(void)setSyncAccount:(ASSBasicAccount*<AccountSettingsUIAccount>)arg1 ;
-(void)showLocalStoreIfAppropriateForDataclass:(id)arg1 ;
-(void*)createDeviceLocalSyncDataSourceForDataclass:(id)arg1 ;
-(void*)_createMobileMeDataSourceForDataclass:(id)arg1 ;
-(ASSDeviceLocalAccount *)deviceLocalAccount;
-(id)_syncableChildAccountIDOfClass:(id)arg1 ;
-(void)saveDeviceLocalAccount;
-(BOOL)shouldSaveDeviceLocalAccount;
-(void)mergeLocalDataForDataclass:(id)arg1 ;
-(void)dealloc;
@end
