/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString;

@interface SAUIPronunciationSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * cancelCommands; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSArray * pronunciations; 
@property (nonatomic,copy) NSArray * selectNoneCommands; 
@property (nonatomic,copy) NSString * selectNoneText; 
+(id)pronunciationSnippet;
+(id)pronunciationSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)orthography;
-(id)groupIdentifier;
-(void)setOrthography:(NSString *)arg1 ;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(NSArray *)cancelCommands;
-(void)setCancelCommands:(NSArray *)arg1 ;
-(NSArray *)pronunciations;
-(void)setPronunciations:(NSArray *)arg1 ;
-(NSArray *)selectNoneCommands;
-(void)setSelectNoneCommands:(NSArray *)arg1 ;
-(NSString *)selectNoneText;
-(void)setSelectNoneText:(NSString *)arg1 ;
-(id)encodedClassName;
@end
