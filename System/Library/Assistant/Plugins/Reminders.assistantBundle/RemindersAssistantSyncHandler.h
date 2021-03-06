/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Reminders.assistantBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@class EKEventStore, NSString, NSMutableArray;

@interface RemindersAssistantSyncHandler : NSObject <AFSyncHandler> {

	EKEventStore* _eventStore;
	NSString* _finalAnchor;
	NSMutableArray* _postAnchors;
	NSMutableArray* _domainObjects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
-(id)calculateFinalAnchor:(id)arg1 ;
-(id)identifierForCalendar:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

