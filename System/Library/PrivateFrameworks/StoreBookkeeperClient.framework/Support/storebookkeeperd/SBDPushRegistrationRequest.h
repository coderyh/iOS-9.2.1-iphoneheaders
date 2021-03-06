/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSURLConnectionRequest.h>

@class NSNumber, NSString;

@interface SBDPushRegistrationRequest : SSURLConnectionRequest {

	BOOL _optIn;
	NSNumber* _storeAccountID;
	NSString* _domain;

}

@property (readonly) NSNumber * storeAccountID;              //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (copy,readonly) NSString * domain;                 //@synthesize domain=_domain - In the implementation block
@property (readonly) BOOL optIn;                             //@synthesize optIn=_optIn - In the implementation block
+(id)requestForDomain:(id)arg1 optIn:(BOOL)arg2 accountID:(id)arg3 typeRegistrationURL:(id)arg4 ;
-(BOOL)isEqualToRegistrationRequest:(id)arg1 ;
-(BOOL)optIn;
-(id)_requestPropertiesForDomain:(id)arg1 optIn:(BOOL)arg2 typeRegistrationURL:(id)arg3 ;
-(id)initWithDomain:(id)arg1 optIn:(BOOL)arg2 accountID:(id)arg3 typeRegistrationURL:(id)arg4 ;
-(NSString *)domain;
-(NSNumber *)storeAccountID;
@end

