/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BatteryUsageUI/BatteryUsageUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@protocol PLBatteryUIBatteryGroupHeaderDelegate;
@class NSString, NSNumber, UILabel, UIButton, UIImage;

@interface PLBatteryUIBatteryGroupHeader : UIView <PSHeaderFooterView> {

	NSString* _rangeString;
	NSNumber* _cycles;
	UILabel* _batteryChargeCyclesString;
	UILabel* _titleLabel;
	NSString* _titleLabelString;
	NSString* _usageDuration;
	UIButton* _button1;
	UIButton* _button2;
	UIButton* _button3;
	UIImage* _siriImage;
	UIImage* _batteryImage;
	UIImage* _foregroundImage;
	UIImage* _backgroundImage;
	UIImage* _batteryImageOn;
	UIImage* _foregroundImageOn;
	UIImage* _backgroundImageOn;
	UIImage* _batteryImageOff;
	UIImage* _foregroundImageOff;
	UIImage* _backgroundImageOff;
	UIImage* _toggleImageOn;
	BOOL _interactiveButtons;
	int _iconDisplayType;
	id<PLBatteryUIBatteryGroupHeaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLBatteryUIBatteryGroupHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)headerViewWithRange:(id)arg1 Cycles:(id)arg2 ;
-(void)refresh1:(id)arg1 ;
-(void)setCycle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 range:(id)arg2 cycles:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PLBatteryUIBatteryGroupHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<PLBatteryUIBatteryGroupHeaderDelegate>)delegate;
-(void)setRange:(id)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
@end

