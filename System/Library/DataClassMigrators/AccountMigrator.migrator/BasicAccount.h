/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/AccountMigrator.migrator/AccountMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountMigrator/AccountFullAccountProtocol.h>

@protocol AccountFullAccountProtocol, AccountRefreshProtocol;
@class NSDictionary, NSMutableDictionary, NSString;

@interface BasicAccount : NSObject <AccountFullAccountProtocol> {

	NSDictionary* _originalProperties;
	NSMutableDictionary* _properties;
	id<AccountFullAccountProtocol> _fullAccount;
	id<AccountRefreshProtocol> _syncAccount;
	BasicAccount* _parentAccount;

}

@property (nonatomic,retain) NSDictionary * originalProperties;              //@synthesize originalProperties=_originalProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createNewAccountUID;
+(id)_accountCreationMap;
+(BOOL)_isValidAccountType:(id)arg1 ;
+(id)_creatorsInfo;
+(id)_dataclassesProperties;
+(id)supportedDataclassesForAccountType:(id)arg1 ;
+(void)initialize;
+(id)accountWithProperties:(id)arg1 ;
+(BOOL)isMultitaskingEnabled;
+(BOOL)multipleStoresSupportedByDataclass:(id)arg1 ;
+(id)removeActionsIncompatibleWithSingleStoreDataclass:(id)arg1 ;
+(id)accountWithType:(id)arg1 class:(id)arg2 ;
+(id)allSupportedDataclasses;
+(id)userActionsToEnableDataclass:(id)arg1 forAccountType:(id)arg2 ;
+(id)userActionsToDisableDataclass:(id)arg1 forAccountType:(id)arg2 ;
+(id)deleteAccountActionsForAccountType:(id)arg1 ;
+(BOOL)showRemindersSeparatelyForAccountType:(id)arg1 ;
+(BOOL)displayToggleForDataclass:(id)arg1 ;
+(BOOL)userConfirmationIsRequiredByDataclass:(id)arg1 ;
-(void)_forcedSetAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(id)fullAccountCreatorClassNameForAccountType:(id)arg1 loader:(id)arg2 ;
-(void)setFullAccount:(id)arg1 ;
-(id)syncAccountCreatorClassNameForAccountType:(id)arg1 ;
-(id)_creatorClassNameForAccountType:(id)arg1 creatorType:(id)arg2 loader:(id)arg3 ;
-(void)_forcedSetEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(void)setDisplayName:(id)arg1 ;
-(id)_initWithType:(id)arg1 class:(id)arg2 ;
-(id)_orderedDataclasses:(id)arg1 ;
-(id)_profileRestrictedDataclasses;
-(id)_cachedSyncAccount;
-(void)dealloc;
-(id)init;
-(id)identifier;
-(id)type;
-(id)initWithProperties:(id)arg1 ;
-(id)displayName;
-(id)properties;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(id)parentAccountIdentifier;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(id)enabledDataclasses;
-(id)supportedDataclasses;
-(id)accountClass;
-(id)accountPropertyForKey:(id)arg1 ;
-(id)provisionedDataclasses;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(void)setOriginalProperties:(NSDictionary *)arg1 ;
-(BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)refreshContainerListForDataclass:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(BOOL)refreshContainersForDataclass:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(void)renewAccountCredentialsWithHandler:(/*^block*/id)arg1 ;
-(id)propertiesToSave;
-(void)setAccountClass:(id)arg1 ;
-(id)shortTypeString;
-(void)setEnabledForDataclasses:(id)arg1 ;
-(id)fullAccountUsingLoader:(id)arg1 ;
-(BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 ;
-(BOOL)refreshContainerListForDataclass:(id)arg1 ;
-(BOOL)refreshContainersForDataclass:(id)arg1 ;
-(NSDictionary *)originalProperties;
-(void)setParentAccount:(id)arg1 ;
-(id)parentAccount;
-(id)syncStoreIdentifier;
-(id)typeString;
@end
