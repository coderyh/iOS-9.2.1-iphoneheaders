/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSString;

@interface YTSearchSuggestionsRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _suggestions;
	NSString* _query;

}
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(void)clearDelegate;
-(void)didParseData;
-(void)failWithError:(id)arg1 ;
-(void)didAuthenticate:(id)arg1 ;
-(id)_suggestionsURLForQuery:(id)arg1 ;
-(void)requestSuggestionsWithDelegate:(id)arg1 query:(id)arg2 ;
@end
