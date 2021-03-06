/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/RestorePostProcess.migrator/RestorePostProcess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MBMobileInstallation : NSObject {

	NSString* _safeHarborDir;
	NSString* _errorString;

}

@property (nonatomic,retain) NSString * safeHarborDir;              //@synthesize safeHarborDir=_safeHarborDir - In the implementation block
-(BOOL)processRestoredApp:(id)arg1 error:(id*)arg2 ;
-(id)userAppWithBundleID:(id)arg1 error:(id*)arg2 ;
-(BOOL)installPlaceholderAppAtPath:(id)arg1 bundleID:(id)arg2 error:(id*)arg3 ;
-(id)initWithSafeHarborDir:(id)arg1 ;
-(BOOL)registerSafeHarborWithIdentifier:(id)arg1 path:(id)arg2 type:(int)arg3 error:(id*)arg4 ;
-(BOOL)processRestoredContainerWithIdentifier:(id)arg1 type:(int)arg2 error:(id*)arg3 ;
-(void)setSafeHarborDir:(NSString *)arg1 ;
-(BOOL)uninstallAppWithBundleID:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)userAppsWithError:(id*)arg1 ;
-(id)safeHarborsWithError:(id*)arg1 ;
-(BOOL)removeSafeHarbordWithIdentifier:(id)arg1 type:(int)arg2 error:(id*)arg3 ;
-(NSString *)safeHarborDir;
@end

