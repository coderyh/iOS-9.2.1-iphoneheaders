/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CPLEngineLibrary, NSString;

@interface CPLEngineSyncEmergencyTask : CPLEngineSyncTask <NSCoding> {

	CPLEngineLibrary* _readwriteEngineLibrary;
	NSString* _taskIdentifier;

}

@property (nonatomic,retain) CPLEngineLibrary * engineLibrary; 
@property (nonatomic,readonly) unsigned long long priority; 
@property (retain) id<CPLEngineSyncEmergencyTaskDelegate> delegate; 
+(BOOL)shouldCoalesceTasks;
+(id)taskWithEngineLibrary:(id)arg1 ;
+(id)taskIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned long long)priority;
-(CPLEngineLibrary *)engineLibrary;
-(void)setEngineLibrary:(CPLEngineLibrary *)arg1 ;
-(BOOL)shouldDiscardOnError;
-(BOOL)shouldStopSyncSession;
-(id)taskIdentifier;
@end
