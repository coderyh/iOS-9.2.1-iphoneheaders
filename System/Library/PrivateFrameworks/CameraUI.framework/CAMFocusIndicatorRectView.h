/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIImageView.h>

@interface CAMFocusIndicatorRectView : UIImageView {

	long long _size;

}

@property (nonatomic,readonly) long long size;                             //@synthesize size=_size - In the implementation block
@property (getter=isPulsing,nonatomic,readonly) BOOL pulsing; 
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)size;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)tintColorDidChange;
-(id)initWithSize:(long long)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(BOOL)isPulsing;
-(void)stopPulsing;
-(void)startPulsing;
-(void)_generateImagePairFromCurrentTintColor;
-(void)_commonCAMFocusIndicatorRectViewInitialization;
-(id)_crosshairImageForSize:(long long)arg1 ;
@end
