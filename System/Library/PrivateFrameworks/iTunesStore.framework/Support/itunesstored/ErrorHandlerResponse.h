/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface ErrorHandlerResponse : NSObject {

	long long _responseType;
	NSURL* _url;

}

@property (assign,nonatomic) long long responseType;              //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,copy) NSURL * URL;                           //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setResponseType:(long long)arg1 ;
-(long long)responseType;
@end

