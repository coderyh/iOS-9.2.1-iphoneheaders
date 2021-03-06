/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class AccountLinkButton, NSURL;

@interface AccountLinkButtonView : UIView <PSHeaderFooterView> {

	AccountLinkButton* _linkButton;
	NSURL* _helpURL;
	float _height;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)_goToAccountURL;
@end

