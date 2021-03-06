/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSGroupPredicate.h>

@class NSString;

@interface CNiOSABGroupNameMatchingPredicate : CNPredicate <CNiOSGroupPredicate> {

	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(CFArrayRef)cn_copyGroupsInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
@end

