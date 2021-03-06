/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@protocol ABStyleProvider;
@class UIImage, NSArray;

@interface ABClippingImageView : UIView {

	UIImage* _clippingImage;
	UIImage* _image;
	NSArray* _labelLines;
	id<ABStyleProvider> _styleProvider;

}

@property (nonatomic,retain) id<ABStyleProvider> styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)initWithImage:(id)arg1 ;
-(UIImage *)image;
-(BOOL)_canDrawContent;
-(void)setLabel:(id)arg1 ;
-(void)setClippingImage:(id)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
@end

