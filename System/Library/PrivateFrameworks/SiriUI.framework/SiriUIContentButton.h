/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor;

@interface SiriUIContentButton : UIButton {

	BOOL _isRenderingImageTemplate;
	UIColor* _defaultColorForTemplate;
	UIColor* _highlightColorForTemplate;

}
+(id)button;
+(id)buttonWithLightWeightFont;
+(id)buttonWithMediumWeightFont;
+(id)buttonWithImageMask:(id)arg1 ;
+(id)buttonWithImageTemplate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateTintColor;
-(void)_setIsRenderingImageTemplate:(BOOL)arg1 ;
-(void)setDefaultColorForTemplate:(id)arg1 ;
-(void)setHighlightColorForTemplate:(id)arg1 ;
@end
