/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUTableViewController.h>

@class AVExternalDevice, UIView, MPMediaPredicate;

@interface MCDTableViewController : MPUTableViewController {

	AVExternalDevice* _externalDevice;
	UIView* _nowPlayingButton;
	UIView* _snapshotView;
	BOOL _limiting;
	MPMediaPredicate* _localPredicate;
	BOOL _shouldHideIndexTitles;
	BOOL _limitedUI;
	BOOL _topLevel;
	BOOL _showMore;

}

@property (assign,nonatomic) BOOL shouldHideIndexTitles;              //@synthesize shouldHideIndexTitles=_shouldHideIndexTitles - In the implementation block
@property (assign,nonatomic) BOOL limitedUI;                          //@synthesize limitedUI=_limitedUI - In the implementation block
@property (assign,nonatomic) BOOL topLevel;                           //@synthesize topLevel=_topLevel - In the implementation block
@property (assign,nonatomic) BOOL showMore;                           //@synthesize showMore=_showMore - In the implementation block
+(Class)_tableViewClass;
-(void)dealloc;
-(void)reloadData;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(id)preferredFocusedItem;
-(BOOL)tableView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_viewControllerWasSelected;
-(void)setLimitedUI:(BOOL)arg1 ;
-(void)_itemChanged:(id)arg1 ;
-(BOOL)limitedUI;
-(BOOL)shouldScrollToFirstDataSourceSectionOnInitialAppearance;
-(BOOL)shouldShowActionCellConfiguration:(Class)arg1 ;
-(void)dataSourceDidInvalidate;
-(id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2 ;
-(void)_MCD_nowPlayingButtonAction:(id)arg1 ;
-(void)_updateNowPlayingVisibility;
-(void)setShowMore:(BOOL)arg1 ;
-(void)_limitedUIDidChange;
-(BOOL)showMore;
-(BOOL)shouldHideIndexTitles;
-(id)MPU_createNowPlayingButton;
-(void)setShouldHideIndexTitles:(BOOL)arg1 ;
-(BOOL)topLevel;
-(void)setTopLevel:(BOOL)arg1 ;
@end

