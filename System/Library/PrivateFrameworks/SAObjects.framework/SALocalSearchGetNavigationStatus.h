/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SALocalSearchGetNavigationStatus : SADomainCommand

@property (nonatomic,copy) NSNumber * getRoute; 
+(id)getNavigationStatus;
+(id)getNavigationStatusWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSNumber *)getRoute;
-(void)setGetRoute:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

