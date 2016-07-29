/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface WBWebsiteDataRecord : NSObject {

	NSString* _domain;
	unsigned long long _usage;
	NSMutableSet* _cookieDomains;
	NSMutableSet* _securityOriginHosts;

}

@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> XPCDictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSString * domain;                                                 //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) unsigned long long usage;                                                 //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) NSMutableSet * cookieDomains;                                           //@synthesize cookieDomains=_cookieDomains - In the implementation block
@property (nonatomic,readonly) NSMutableSet * securityOriginHosts;                                     //@synthesize securityOriginHosts=_securityOriginHosts - In the implementation block
+(id)websiteDataRecordWithDomain:(id)arg1 ;
+(id)websiteDataRecordFromXPCDictionary:(id)arg1 ;
-(NSString *)domain;
-(id)_initWithDomain:(id)arg1 ;
-(id)_initWithDomain:(id)arg1 usage:(unsigned long long)arg2 securityOriginHosts:(id)arg3 cookieDomains:(id)arg4 ;
-(NSObject*<OS_xpc_object>)XPCDictionaryRepresentation;
-(NSMutableSet *)cookieDomains;
-(NSMutableSet *)securityOriginHosts;
-(unsigned long long)usage;
-(void)setUsage:(unsigned long long)arg1 ;
@end
