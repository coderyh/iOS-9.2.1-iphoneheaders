/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBIconModelDelegate.h>
#import <SpringBoard/SBApplicationRestrictionObserver.h>
#import <SpringBoard/SBFolderControllerDelegate.h>
#import <SpringBoard/SBIconViewMapDelegate.h>
#import <SpringBoard/SBIconViewDelegate.h>
#import <SpringBoard/SBLeafIconDataSource.h>

@protocol SBStarkSessionConfiguring, SBStarkIconControllerDelegate;
@class SBIconModel, SBIconViewMap, SBStarkFolderController, _UILegibilitySettings, SBIcon, NSIndexPath, SBStarkFakeIconOperationController, SBStarkIconLayoutOverrideStrategy, NSSet, NSString;

@interface SBStarkIconController : UIViewController <SBIconModelDelegate, SBApplicationRestrictionObserver, SBFolderControllerDelegate, SBIconViewMapDelegate, SBIconViewDelegate, SBLeafIconDataSource> {

	id<SBStarkSessionConfiguring> _configuration;
	id<SBStarkIconControllerDelegate> _delegate;
	SBIconModel* _iconModel;
	SBIconViewMap* _iconViewMap;
	SBStarkFolderController* _rootFolderController;
	_UILegibilitySettings* _legibilitySettings;
	SBIcon* _highlightedIcon;
	SBIcon* _launchingIcon;
	SBIcon* _focusedIconForLayout;
	NSIndexPath* _indexPathToResetTo;
	SBStarkFakeIconOperationController* _fakeIconOperationController;
	SBStarkIconLayoutOverrideStrategy* _iconLayoutOverrideStrategy;
	NSSet* _visibleTags;
	NSSet* _hiddenTags;
	BOOL _loaded;
	BOOL _invalidated;
	BOOL _hidden;

}

@property (nonatomic,retain) SBStarkFakeIconOperationController * fakeIconOperationController;              //@synthesize fakeIconOperationController=_fakeIconOperationController - In the implementation block
@property (nonatomic,retain) SBStarkIconLayoutOverrideStrategy * iconLayoutOverrideStrategy; 
@property (nonatomic,retain,readonly) SBStarkFolderController * rootFolderController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)icon:(id)arg1 imageWithFormat:(int)arg2 ;
-(unsigned long long)iconPriority:(id)arg1 ;
-(id)icon:(id)arg1 defaultImageWithFormat:(int)arg2 ;
-(id)iconDisplayName:(id)arg1 forLocation:(int)arg2 ;
-(BOOL)iconCanEllipsizeLabel:(id)arg1 ;
-(BOOL)iconCanTightenLabel:(id)arg1 ;
-(long long)iconProgressState:(id)arg1 ;
-(double)iconProgressPercent:(id)arg1 ;
-(BOOL)iconProgressIsPaused:(id)arg1 ;
-(id)iconBadgeNumberOrString:(id)arg1 ;
-(id)iconFormattedAccessoryString:(id)arg1 ;
-(int)iconAccessoryType:(id)arg1 ;
-(BOOL)iconIsRecentlyUpdated:(id)arg1 ;
-(BOOL)iconIsBeta:(id)arg1 ;
-(BOOL)iconAllowsUninstall:(id)arg1 ;
-(BOOL)iconCompleteUninstall:(id)arg1 ;
-(BOOL)iconAllowsLaunch:(id)arg1 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(int)arg2 context:(id)arg3 ;
-(id)leafIconForIdentifier:(id)arg1 ;
-(unsigned long long)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)maxColCountForListInRootFolderWithInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)maxIconCountForDock;
-(unsigned long long)maxListCountForFolders;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 ;
-(void)relayout;
-(SBStarkFolderController *)rootFolderController;
-(SBStarkIconLayoutOverrideStrategy *)iconLayoutOverrideStrategy;
-(void)setIconLayoutOverrideStrategy:(SBStarkIconLayoutOverrideStrategy *)arg1 ;
-(void)_installedAppsDidChange:(id)arg1 ;
-(void)_prepareToResetRootIconLists;
-(void)_resetRootIconLists;
-(void)_launchIcon:(id)arg1 ;
-(void)_iconVisibilityChanged:(id)arg1 ;
-(void)_iconModelDidReloadIcons:(id)arg1 ;
-(void)_iconModelWillLayout:(id)arg1 ;
-(void)_iconModelDidLayout:(id)arg1 ;
-(Class)_controllerClassForFolderClass:(Class)arg1 ;
-(unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2 ;
-(void)iconTapped:(id)arg1 ;
-(void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3 ;
-(Class)controllerClassForFolder:(id)arg1 ;
-(BOOL)folderController:(id)arg1 draggedIconDidPauseAtLocation:(CGPoint)arg2 inListView:(id)arg3 ;
-(BOOL)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3 ;
-(BOOL)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2 ;
-(void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2 ;
-(void)folderControllerShouldClose:(id)arg1 ;
-(void)folderControllerShouldBeginEditing:(id)arg1 ;
-(void)folderControllerDidEndScrolling:(id)arg1 ;
-(void)iconTouchBegan:(id)arg1 ;
-(void)icon:(id)arg1 touchMoved:(id)arg2 ;
-(void)icon:(id)arg1 touchEnded:(BOOL)arg2 ;
-(BOOL)iconShouldAllowTap:(id)arg1 ;
-(BOOL)iconViewDisplaysBadges:(id)arg1 ;
-(unsigned long long)maxIconCountForListInFolderClass:(Class)arg1 ;
-(BOOL)supportsDock;
-(BOOL)canAddWebClip:(id)arg1 ;
-(BOOL)canAddDownloadingIconForApplication:(id)arg1 ;
-(BOOL)canSaveIconState:(id)arg1 ;
-(void)didSaveIconState:(id)arg1 ;
-(void)didDeleteIconState:(id)arg1 ;
-(Class)iconViewClassForIcon:(id)arg1 location:(int)arg2 ;
-(int)viewMap:(id)arg1 locationForIcon:(id)arg2 ;
-(id)windowForRecycledViewsInViewMap:(id)arg1 ;
-(void)_iconModelWillReloadIcons:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 withAnimationFactory:(id)arg2 ;
-(id)currentFolderController;
-(id)iconsView;
-(void)_rebuildIconStore;
-(void)_clearHighlightedIcon;
-(void)rebuildIconsAndLayout;
-(SBStarkFakeIconOperationController *)fakeIconOperationController;
-(void)setFakeIconOperationController:(SBStarkFakeIconOperationController *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(void)invalidate;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)scale;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)_moveWithEvent:(id)arg1 ;
-(id)rootFolder;
@end

