/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@interface PersistentDownloadManagerEntity : SSSQLiteEntity
+(void)initialize;
+(id)databaseTable;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(id)foreignDatabaseTablesToDelete;
-(void)performNewsstandMigration1InDatabase:(id)arg1 ;
-(id)finishPersistentDownloadsWithDownloadIDs:(id)arg1 ;
@end
