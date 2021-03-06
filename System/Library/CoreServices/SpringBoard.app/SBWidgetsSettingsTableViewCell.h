/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UIButton;

@interface SBWidgetsSettingsTableViewCell : UITableViewCell {

	UIImageView* _dotImageView;
	BOOL _widgetEnabled;
	BOOL _showsDot;
	UIButton* _insertWidgetAccessoryButton;

}

@property (assign,getter=isWidgetEnabled,nonatomic) BOOL widgetEnabled;              //@synthesize widgetEnabled=_widgetEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsDot;                                          //@synthesize showsDot=_showsDot - In the implementation block
@property (nonatomic,readonly) UIButton * insertWidgetAccessoryButton;               //@synthesize insertWidgetAccessoryButton=_insertWidgetAccessoryButton - In the implementation block
-(void)setShowsDot:(BOOL)arg1 ;
-(BOOL)showsDot;
-(UIButton *)insertWidgetAccessoryButton;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setWidgetEnabled:(BOOL)arg1 ;
-(BOOL)isWidgetEnabled;
@end

