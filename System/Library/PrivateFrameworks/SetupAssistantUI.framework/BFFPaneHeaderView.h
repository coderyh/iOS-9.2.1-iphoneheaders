/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIButton, UIImage, UILabel;

@interface BFFPaneHeaderView : UIView {

	UIImageView* _iconView;
	UIButton* _linkButton;
	/*^block*/id _linkHandler;
	BOOL _textLabelAlignedByLastBaseline;
	UIImage* _icon;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	double _flexibleHeight;

}

@property (nonatomic,retain) UIImage * icon;                                                                           //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                                    //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailTextLabel;                                                              //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (assign,nonatomic) double flexibleHeight;                                                                    //@synthesize flexibleHeight=_flexibleHeight - In the implementation block
@property (assign,getter=isTextLabelAlignedByLastBaseline,nonatomic) BOOL textLabelAlignedByLastBaseline;              //@synthesize textLabelAlignedByLastBaseline=_textLabelAlignedByLastBaseline - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
-(double)_detailLabelBaselineOffsetFromTop;
-(BOOL)isTextLabelAlignedByLastBaseline;
-(void)_linkButtonPressed;
-(void)setLinkText:(id)arg1 handler:(/*^block*/id)arg2 ;
-(double)flexibleHeight;
-(void)setFlexibleHeight:(double)arg1 ;
-(void)setTextLabelAlignedByLastBaseline:(BOOL)arg1 ;
@end

