/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMCommandBase.h>

@class NSError, NSDictionary;

@interface FMJSONCommand : FMCommandBase {

	BOOL __hasParsedResponseBody;
	NSError* _jsonResponseParseError;
	NSDictionary* __responseBodyDict;
	NSDictionary* __requestBodyDict;

}

@property (nonatomic,readonly) NSDictionary * jsonResponseDictionary; 
@property (nonatomic,retain) NSError * jsonResponseParseError;                     //@synthesize jsonResponseParseError=_jsonResponseParseError - In the implementation block
@property (nonatomic,readonly) NSDictionary * serverAlertInfo; 
@property (assign,nonatomic) BOOL _hasParsedResponseBody;                          //@synthesize _hasParsedResponseBody=__hasParsedResponseBody - In the implementation block
@property (nonatomic,retain) NSDictionary * _responseBodyDict;                     //@synthesize _responseBodyDict=__responseBodyDict - In the implementation block
@property (nonatomic,retain) NSDictionary * _requestBodyDict;                      //@synthesize _requestBodyDict=__requestBodyDict - In the implementation block
-(id)body;
-(id)headers;
-(void)sendRequest;
-(void)set_hasParsedResponseBody:(BOOL)arg1 ;
-(void)set_responseBodyDict:(NSDictionary *)arg1 ;
-(void)setJsonResponseParseError:(NSError *)arg1 ;
-(NSDictionary *)_requestBodyDict;
-(id)jsonBodyDictionary;
-(void)set_requestBodyDict:(NSDictionary *)arg1 ;
-(BOOL)_hasParsedResponseBody;
-(NSDictionary *)_responseBodyDict;
-(NSDictionary *)jsonResponseDictionary;
-(NSDictionary *)serverAlertInfo;
-(NSError *)jsonResponseParseError;
@end

