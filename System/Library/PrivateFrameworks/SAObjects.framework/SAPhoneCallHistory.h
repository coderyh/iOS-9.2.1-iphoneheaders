/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCallSearchResult.h>

@class NSNumber;

@interface SAPhoneCallHistory : SAPhoneCallSearchResult

@property (nonatomic,copy) NSNumber * blocked; 
@property (nonatomic,copy) NSNumber * callCount; 
@property (nonatomic,copy) NSNumber * faceTime; 
@property (nonatomic,copy) NSNumber * faceTimeAudio; 
@property (nonatomic,copy) NSNumber * missed; 
@property (nonatomic,copy) NSNumber * outgoing; 
+(id)callHistory;
+(id)callHistoryWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setBlocked:(NSNumber *)arg1 ;
-(NSNumber *)blocked;
-(id)groupIdentifier;
-(NSNumber *)faceTime;
-(void)setFaceTime:(NSNumber *)arg1 ;
-(NSNumber *)faceTimeAudio;
-(void)setFaceTimeAudio:(NSNumber *)arg1 ;
-(NSNumber *)outgoing;
-(void)setCallCount:(NSNumber *)arg1 ;
-(NSNumber *)callCount;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)missed;
-(void)setMissed:(NSNumber *)arg1 ;
@end

