/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIView, UIImageView;

@interface SLSheetBevelledImageView : SLSheetImagePreviewView {

	UIView* _placeholderPreviewView;
	UIImageView* _placeholderGlyphView;
	BOOL _needsURLPlaceholderImage;

}

@property (assign,nonatomic) BOOL needsURLPlaceholderImage;              //@synthesize needsURLPlaceholderImage=_needsURLPlaceholderImage - In the implementation block
-(void)setImage:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(BOOL)needsURLPlaceholderImage;
-(BOOL)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)setNeedsURLPlaceholderImage:(BOOL)arg1 ;
@end
