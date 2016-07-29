/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSURL, NSString;

@interface SAUIImageResource : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * imageData; 
@property (assign,nonatomic) double pixelHeight; 
@property (assign,nonatomic) double pixelWidth; 
@property (assign,nonatomic) double pointHeight; 
@property (assign,nonatomic) double pointWidth; 
@property (nonatomic,copy) NSURL * resourceUrl; 
@property (assign,nonatomic) double scaleFactor; 
@property (nonatomic,copy) NSString * urlFormatString; 
@property (nonatomic,copy) NSString * userAgent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageResource;
+(id)imageResourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(id)groupIdentifier;
-(void)setPixelHeight:(double)arg1 ;
-(void)setPixelWidth:(double)arg1 ;
-(double)pointHeight;
-(double)pointWidth;
-(void)setPointWidth:(double)arg1 ;
-(NSURL *)resourceUrl;
-(void)setResourceUrl:(NSURL *)arg1 ;
-(NSString *)urlFormatString;
-(void)setUrlFormatString:(NSString *)arg1 ;
-(NSData *)imageData;
-(double)pixelWidth;
-(double)pixelHeight;
-(id)encodedClassName;
-(void)setPointHeight:(double)arg1 ;
@end
