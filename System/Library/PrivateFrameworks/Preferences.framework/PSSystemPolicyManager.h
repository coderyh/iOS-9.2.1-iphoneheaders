/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSSystemPolicyManager : NSObject
+(void)_populateBBSectionIDs;
+(BOOL)_shouldIncludeProxy:(id)arg1 ;
+(BOOL)_systemSettingsNeededForProxy:(id)arg1 ;
+(BOOL)_privacySettingsNeededForProxy:(id)arg1 ;
+(BOOL)_locationSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)arg1 ;
+(BOOL)_cellularDataSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_notificationSettingsNeededForBundleID:(id)arg1 ;
+(id)_dataUsageWorkspaceInfo;
+(id)thirdPartyApplicationProxies;
+(id)thirdPartyApplicationProxyForBundleID:(id)arg1 ;
@end
