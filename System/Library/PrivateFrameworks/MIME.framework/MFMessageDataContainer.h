/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface MFMessageDataContainer : NSObject {

	NSData* _data;
	BOOL _partial;
	BOOL _incomplete;

}
-(void)dealloc;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 partial:(BOOL)arg2 incomplete:(BOOL)arg3 ;
@end

