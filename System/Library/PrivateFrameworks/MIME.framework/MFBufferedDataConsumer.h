/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFGuaranteedCollectingDataConsumer.h>

@class NSMutableData, NSString;

@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {

	NSMutableData* _data;
	int _fd;
	NSString* _path;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)data;
-(void)done;
-(long long)appendData:(id)arg1 ;
@end

