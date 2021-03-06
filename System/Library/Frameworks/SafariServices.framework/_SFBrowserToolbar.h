/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFToolbar.h>

@protocol _SFBrowserToolbarDelegate, _SFBrowserToolbarDataSource;
@class UIBarButtonItem;

@interface _SFBrowserToolbar : _SFToolbar {

	UIBarButtonItem* _backItem;
	UIBarButtonItem* _forwardItem;
	UIBarButtonItem* _openInSafariItem;
	id<_SFBrowserToolbarDelegate> _browserDelegate;
	id<_SFBrowserToolbarDataSource> _dataSource;
	UIBarButtonItem* _actionItem;

}

@property (assign,nonatomic,__weak) id<_SFBrowserToolbarDelegate> browserDelegate;              //@synthesize browserDelegate=_browserDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<_SFBrowserToolbarDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * actionItem;                                    //@synthesize actionItem=_actionItem - In the implementation block
-(void)setDataSource:(id<_SFBrowserToolbarDataSource>)arg1 ;
-(void)layoutSubviews;
-(id<_SFBrowserToolbarDataSource>)dataSource;
-(BOOL)isMinibar;
-(id)_toolbarItems;
-(double)URLFieldHorizontalMargin;
-(void)backButtonPressed;
-(void)forwardButtonPressed;
-(void)actionButtonPressed;
-(void)openInSafariButtonPressed;
-(void)updateButtonStates;
-(void)addBookmarkButtonPressed;
-(CGRect)popoverPresentationRectForButtonItem:(id)arg1 ;
-(id<_SFBrowserToolbarDelegate>)browserDelegate;
-(void)setBrowserDelegate:(id<_SFBrowserToolbarDelegate>)arg1 ;
-(UIBarButtonItem *)actionItem;
@end

