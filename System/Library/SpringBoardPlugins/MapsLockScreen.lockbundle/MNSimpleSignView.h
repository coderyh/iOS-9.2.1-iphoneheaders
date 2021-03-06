/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, MNGuidanceManeuverView, MNSignStyle, UIImage;

@interface MNSimpleSignView : UIView {

	UIImageView* _backgroundView;
	MNGuidanceManeuverView* _maneuverView;
	UIEdgeInsets _maneuverViewEdgeInsets;
	UIImageView* _shieldView;
	MNSignStyle* _style;

}

@property (assign,nonatomic) UIEdgeInsets maneuverViewEdgeInsets;                  //@synthesize maneuverViewEdgeInsets=_maneuverViewEdgeInsets - In the implementation block
@property (nonatomic,readonly) MNGuidanceManeuverView * maneuverView; 
@property (nonatomic,retain) UIImage * shieldImage; 
@property (nonatomic,retain) MNSignStyle * style;                                  //@synthesize style=_style - In the implementation block
-(void)setManeuverViewEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)updateStyleForTheme;
-(UIEdgeInsets)maneuverViewEdgeInsets;
-(UIImage *)shieldImage;
-(void)setShieldImage:(UIImage *)arg1 ;
-(MNGuidanceManeuverView *)maneuverView;
-(id)shieldImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNSignStyle *)style;
-(void)setStyle:(MNSignStyle *)arg1 ;
@end

