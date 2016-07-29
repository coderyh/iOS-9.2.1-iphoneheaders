/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@protocol EKCellShortener;
@interface PreferencesValueCell : EKUIConstrainedFontsTableViewCell {

	id<EKCellShortener> _shortener;

}

@property (assign,nonatomic,__weak) id<EKCellShortener> shortener;              //@synthesize shortener=_shortener - In the implementation block
-(void)layoutSubviews;
-(void)setShortener:(id<EKCellShortener>)arg1 ;
-(void)_checkValueWidth;
-(id<EKCellShortener>)shortener;
@end
