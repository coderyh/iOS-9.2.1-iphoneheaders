/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface MailPersistentStorage : NSObject {

	NSString* _filePath;
	NSMutableDictionary* _groups;

}
+(id)defaultFilePath;
+(void)wipePersistentStorage;
+(id)sharedStorage;
-(void)setFetchDate:(id)arg1 forSource:(id)arg2 ;
-(void)touchLastLoadOlder;
-(id)fetchDateForSource:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 inGroup:(id)arg3 ;
-(id)_objectForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 inGroup:(id)arg3 ;
-(id)objectForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)clearLastLoadOlder;
-(id)lastLoadOlder;
-(void)searchedServer;
-(void)clearSearchedServer;
-(id)searchedServerDate;
-(void)setSceneRestorationDictionary:(id)arg1 ;
-(id)sceneRestorationDictionary;
-(void)dealloc;
-(id)init;
-(id)initWithFilePath:(id)arg1 ;
-(void)save;
@end

