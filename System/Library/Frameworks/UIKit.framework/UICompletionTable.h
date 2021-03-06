/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UICompletionTablePrivate, NSString;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource> {

	UICompletionTablePrivate* _private;

}

@property (assign,nonatomic) id delegate; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (assign,nonatomic) UIEdgeInsets scrollIndicatorInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_shadowImage;
+(id)_cellFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(UIEdgeInsets)contentInset;
-(void)setScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)scrollIndicatorInsets;
-(id)_completionForRow:(long long)arg1 ;
-(void)setTopStrokeColor:(id)arg1 ;
@end

