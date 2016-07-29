/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSLayoutDimension, NSLayoutAnchor;


@protocol _UIButtonBarLayoutMetricsData <NSObject>
@property (nonatomic,readonly) NSLayoutDimension * verticalSizeGuide; 
@property (nonatomic,readonly) NSLayoutDimension * minimumSpaceGuide; 
@property (nonatomic,readonly) NSLayoutDimension * flexibleSpaceGuide; 
@property (nonatomic,readonly) NSLayoutAnchor * popoverGuideTopAnchor; 
@property (nonatomic,readonly) NSLayoutDimension * groupSizeGuide; 
@property (nonatomic,retain) NSLayoutDimension * groupSpacingGuide; 
@required
-(void)setGroupSpacingGuide:(id)arg1;
-(id)_upcastIfReadOnly;
-(NSLayoutDimension *)verticalSizeGuide;
-(NSLayoutDimension *)minimumSpaceGuide;
-(NSLayoutDimension *)flexibleSpaceGuide;
-(NSLayoutAnchor *)popoverGuideTopAnchor;
-(NSLayoutDimension *)groupSizeGuide;
-(NSLayoutDimension *)groupSpacingGuide;

@end
