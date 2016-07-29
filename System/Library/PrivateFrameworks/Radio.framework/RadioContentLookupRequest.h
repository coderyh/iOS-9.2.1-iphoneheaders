/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSArray;

@interface RadioContentLookupRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	NSArray* _trackStoreIDs;

}
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithTrackStoreIDs:(id)arg1 ;
@end
