/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class NSArray, MPUExtrasStackTemplateViewController, MPUExtrasGridElementViewController, MPUExtrasGridSectionHeaderStyle;

@interface MPUExtrasStackCollectionCell : UICollectionViewCell {

	NSArray* _fitConstraints;
	BOOL _needsViewWillAppear;
	MPUExtrasStackTemplateViewController* _parentViewController;
	MPUExtrasGridElementViewController* _viewController;
	MPUExtrasGridSectionHeaderStyle* _sectionStyle;

}

@property (nonatomic,retain) MPUExtrasStackTemplateViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) MPUExtrasGridElementViewController * viewController;                      //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) MPUExtrasGridSectionHeaderStyle * sectionStyle;                         //@synthesize sectionStyle=_sectionStyle - In the implementation block
-(MPUExtrasStackTemplateViewController *)parentViewController;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setViewController:(MPUExtrasGridElementViewController *)arg1 ;
-(MPUExtrasGridElementViewController *)viewController;
-(void)setParentViewController:(MPUExtrasStackTemplateViewController *)arg1 ;
-(MPUExtrasGridSectionHeaderStyle *)sectionStyle;
@end

