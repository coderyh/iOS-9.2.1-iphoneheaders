/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface AAInviteFamilyMemberRequest : AAFamilyRequest {

	NSString* _inviteeEmail;
	NSString* _inviteeCompositeName;
	NSString* _inviteeShortName;

}

@property (nonatomic,copy) NSString * inviteeEmail;                      //@synthesize inviteeEmail=_inviteeEmail - In the implementation block
@property (nonatomic,copy) NSString * inviteeCompositeName;              //@synthesize inviteeCompositeName=_inviteeCompositeName - In the implementation block
@property (nonatomic,copy) NSString * inviteeShortName;                  //@synthesize inviteeShortName=_inviteeShortName - In the implementation block
-(void)setInviteeEmail:(NSString *)arg1 ;
-(void)setInviteeCompositeName:(NSString *)arg1 ;
-(void)setInviteeShortName:(NSString *)arg1 ;
-(id)urlRequest;
-(id)urlString;
-(BOOL)isUserInitiated;
-(NSString *)inviteeEmail;
-(NSString *)inviteeShortName;
-(NSString *)inviteeCompositeName;
@end
