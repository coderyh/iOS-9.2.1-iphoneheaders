/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString, NSMutableSet, NSString, NSArray;

@interface IKXMLErrorHandlerContext : NSObject {

	NSMutableString* _mutableErrorMessages;
	NSMutableSet* _mutableParserErrors;

}

@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) NSArray * parserErrors; 
@property (nonatomic,retain) NSMutableString * mutableErrorMessages;              //@synthesize mutableErrorMessages=_mutableErrorMessages - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableParserErrors;                  //@synthesize mutableParserErrors=_mutableParserErrors - In the implementation block
-(id)init;
-(void)clear;
-(NSArray *)parserErrors;
-(NSMutableString *)mutableErrorMessages;
-(NSMutableSet *)mutableParserErrors;
-(void)setMutableErrorMessages:(NSMutableString *)arg1 ;
-(void)setMutableParserErrors:(NSMutableSet *)arg1 ;
-(NSString *)errorMessage;
@end

