/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface MFSearchTerm : NSObject {

	NSString* _token;
	NSData* _sortKey;

}

@property (nonatomic,retain,readonly) NSString * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,retain,readonly) NSData * sortKey;              //@synthesize sortKey=_sortKey - In the implementation block
-(id)initWithToken:(id)arg1 sortKey:(id)arg2 ;
-(BOOL)isPrefixOfSortKey:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)token;
-(NSData *)sortKey;
@end
