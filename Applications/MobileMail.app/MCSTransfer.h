/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MCSMessageOperation.h>
#import <MobileMail/MCSAllMessagesOperation.h>

@class MFMailboxUid, MCSFlagChange, NSDictionary, NSString;

@interface MCSTransfer : MCSMessageOperation <MCSAllMessagesOperation> {

	MFMailboxUid* _destination;
	int _specialType;
	MCSFlagChange* _equivalentFlagChange;
	unsigned _markAsRead : 1;
	unsigned _deleteIfSame : 1;
	unsigned _isDeletion : 1;
	NSDictionary* _originalLocations;

}

@property (nonatomic,copy) NSDictionary * originalLocations;              //@synthesize originalLocations=_originalLocations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDestination:(id)arg1 markAsRead:(BOOL)arg2 ;
-(id)localizedErrorDescriptionForMessageCount:(unsigned long long)arg1 ;
-(id)localizedErrorTitleForMessageCount:(unsigned long long)arg1 ;
-(id)localizedShortOperationDescription;
-(BOOL)willMarkRead;
-(BOOL)willMarkUnread;
-(BOOL)willUnflag;
-(BOOL)willFlag;
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(BOOL)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(BOOL)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(BOOL)isRevertibleWithMessages:(id)arg1 ;
-(BOOL)commitToAllMessagesInStore:(id)arg1 ;
-(BOOL)revertForAllMessagesInStore:(id)arg1 ;
-(BOOL)isRevertibleForAllMessagesInStore:(id)arg1 ;
-(void)setIsDeletion:(BOOL)arg1 ;
-(id)_storeToMessagesMappingWithMessages:(id)arg1 ;
-(void)setOriginalLocations:(NSDictionary *)arg1 ;
-(void)_notifyStoresOfTransferedMessages:(id)arg1 failedMessages:(id)arg2 ;
-(id)initWithSpecialDestination:(int)arg1 markAsRead:(BOOL)arg2 deleteIfSame:(BOOL)arg3 ;
-(NSDictionary *)originalLocations;
-(void)dealloc;
-(id)init;
-(NSString *)description;
@end
