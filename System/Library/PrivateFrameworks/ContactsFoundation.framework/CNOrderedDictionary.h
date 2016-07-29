/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSMutableArray, NSArray;

@interface CNOrderedDictionary : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _dictionary;
	NSMutableArray* _orderedKeys;

}

@property (copy,readonly) NSArray * allKeys; 
+(id)dictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)orderedDictionary;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(NSArray *)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
