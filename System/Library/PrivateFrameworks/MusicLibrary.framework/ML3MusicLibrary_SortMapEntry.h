/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface ML3MusicLibrary_SortMapEntry : NSObject {

	long long _nameOrder;
	NSString* _name;
	NSData* _sortKey;
	int _nameSection;
	BOOL _dirty;

}
-(id)description;
-(id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3 nameOrder:(long long)arg4 dirtyFlag:(BOOL)arg5 ;
-(id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3 ;
@end
