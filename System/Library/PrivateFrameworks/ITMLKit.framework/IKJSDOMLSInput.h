/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IKJSDOMLSInput <JSExport>
@property (nonatomic,retain) id byteStream; 
@property (nonatomic,retain) NSString * stringData; 
@property (nonatomic,retain) NSString * encoding; 
@property (assign,nonatomic) BOOL certifiedText; 
@required
-(void)setEncoding:(id)arg1;
-(NSString *)encoding;
-(NSString *)stringData;
-(id)byteStream;
-(void)setStringData:(id)arg1;
-(BOOL)certifiedText;
-(void)setCertifiedText:(BOOL)arg1;
-(void)setByteStream:(id)arg1;

@end

