/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataProvenanceEntity : HDHealthEntity
+(id)databaseTable;
+(id)columnsDefinition;
+(long long)protectionClass;
+(id)uniquedColumns;
+(id)insertOrLookupDataProvenanceForSyncProvenance:(long long)arg1 originDevice:(id)arg2 originBuild:(id)arg3 localDevice:(id)arg4 localBuild:(id)arg5 sourceID:(id)arg6 deviceID:(id)arg7 sourceVersion:(id)arg8 database:(id)arg9 error:(id*)arg10 ;
+(id)originProvenanceForPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
@end

