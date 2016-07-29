/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@interface MCNewAPNPayloadHandler : MCNewPayloadHandler
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)unsetAside;
-(void)setAside;
-(void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)_remove;
-(void)_notifyCoreTelephonyOfAPNChange;
-(void)_sendNotifications;
-(void)migrateDefaults;
-(BOOL)_install;
-(void)remove;
@end
