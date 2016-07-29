/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASRecognition, NSString;

@interface SASSpeechRecognized : SABaseClientBoundCommand

@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,copy) NSString * sessionId; 
+(id)speechRecognized;
+(id)speechRecognizedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_correctionContext;
-(id)af_userUtteranceValue;
-(id)af_bestTextInterpretation;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(SASRecognition *)recognition;
-(void)setRecognition:(SASRecognition *)arg1 ;
-(id)encodedClassName;
@end
