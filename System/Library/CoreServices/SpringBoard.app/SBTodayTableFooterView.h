/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBNewWidgetsButton, SBNotificationVibrantButton, SBNotificationSeparatorView, SBAttributionWrapperViewController;

@interface SBTodayTableFooterView : UIView {

	SBNewWidgetsButton* _newWidgetsButton;
	SBNotificationVibrantButton* _button;
	SBNotificationSeparatorView* _separatorView;
	SBAttributionWrapperViewController* _attributionViewController;
	long long _layoutMode;

}

@property (assign,nonatomic) long long layoutMode;                                                        //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,retain) SBAttributionWrapperViewController * attributionViewController;              //@synthesize attributionViewController=_attributionViewController - In the implementation block
-(void)setLayoutMode:(long long)arg1 ;
-(void)_updateForContentCategorySizeDidChange;
-(void)setAttributionViewController:(SBAttributionWrapperViewController *)arg1 ;
-(void)_availableWidgetsUpdated:(id)arg1 ;
-(void)_updateForLockStateDidChange:(id)arg1 ;
-(BOOL)_isDevicePasscodeLocked;
-(double)_buttonBottomPadding;
-(void)_updateAttributionFrame;
-(double)_attributionOriginY;
-(SBAttributionWrapperViewController *)attributionViewController;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
-(long long)layoutMode;
@end
