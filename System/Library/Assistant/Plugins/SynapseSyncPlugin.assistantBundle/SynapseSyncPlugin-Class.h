/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/SynapseSyncPlugin.assistantBundle/SynapseSyncPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@class NSMutableDictionary, NSEnumerator, NSString;

@interface SynapseSyncPlugin : NSObject <AFSyncHandler> {

	NSMutableDictionary* _deletedIDs;
	NSMutableDictionary* _newItems;
	NSEnumerator* _anchorEnumerator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginSyncWithInfo:(id)arg1 configuration:(id)arg2 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(id)_prepareToVendChangeInfoForSyncTransaction:(id)arg1 startAnchorFromServer:(id)arg2 ;
-(BOOL)_checkIfResetIsNeededForSyncTransaction:(id)arg1 validity:(id)arg2 serverCountOfItems:(long long)arg3 startAnchorFromServer:(id)arg4 ;
-(void)_clearChangeInfo;
-(id)init;
@end

