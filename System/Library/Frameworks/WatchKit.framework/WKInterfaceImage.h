/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <WatchKit/WKInterfaceObject.h>
#import <libobjc.A.dylib/WKImageAnimatable.h>

@class NSString;

@interface WKInterfaceImage : WKInterfaceObject <WKImageAnimatable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setImageData:(id)arg1 ;
-(void)startAnimatingWithImagesInRange:(NSRange)arg1 duration:(double)arg2 repeatCount:(long long)arg3 ;
-(void)setImageNamed:(id)arg1 ;
@end

