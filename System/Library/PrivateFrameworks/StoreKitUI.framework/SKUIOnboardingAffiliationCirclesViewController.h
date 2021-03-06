/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUIPhysicalCirclesDataSource.h>
#import <libobjc.A.dylib/SKUIPhysicalCirclesDelegate.h>

@protocol SKUIOnboardingAffiliationCirclesDelegate, OS_dispatch_source;
@class NSMutableArray, SKUIPhysicalCirclesView, SKUIClientContext, NSObject, UIView, NSMapTable, SKUIOnboardingInstructionsView, NSArray, NSString;

@interface SKUIOnboardingAffiliationCirclesViewController : UIViewController <SKUIPhysicalCirclesDataSource, SKUIPhysicalCirclesDelegate> {

	NSMutableArray* _affiliationItems;
	SKUIPhysicalCirclesView* _circlesView;
	SKUIClientContext* _clientContext;
	id<SKUIOnboardingAffiliationCirclesDelegate> _delegate;
	NSObject*<OS_dispatch_source> _deletionTimer;
	BOOL _didPerformFinishAnimation;
	UIView* _footerView;
	NSMapTable* _images;
	SKUIOnboardingInstructionsView* _instructionsView;
	BOOL _needsReloadOnDidAppear;

}

@property (nonatomic,copy) NSArray * affiliationItems;                                                  //@synthesize affiliationItems=_affiliationItems - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                         //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIOnboardingAffiliationCirclesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SKUIOnboardingInstructionsView * instructionsView; 
@property (nonatomic,readonly) double maximumCircleDiameter; 
@property (nonatomic,retain) UIView * footerView;                                                       //@synthesize footerView=_footerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIOnboardingAffiliationCirclesDelegate>)arg1 ;
-(void)dealloc;
-(id<SKUIOnboardingAffiliationCirclesDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setAffiliationItems:(NSArray *)arg1 ;
-(NSArray *)affiliationItems;
-(void)setImage:(id)arg1 forAffiliationItem:(id)arg2 ;
-(void)setUserAffinityCount:(long long)arg1 forAffiliationItemAtIndex:(long long)arg2 animated:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)removeAffiliationItemsInIndexSet:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addAffiliationItems:(id)arg1 ;
-(void)performFinishAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)resetWithAffiliationItems:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(double)maximumCircleDiameter;
-(SKUIOnboardingInstructionsView *)instructionsView;
-(void)setFooterView:(id)arg1 animated:(BOOL)arg2 ;
-(CGSize)_circleSizeForAffinityCount:(long long)arg1 ;
-(long long)_titlePositionForAffinityCount:(long long)arg1 ;
-(double)_circleImageAlphaForAffinityCount:(long long)arg1 ;
-(void)_reloadRepellors;
-(double)_topLayoutMargin;
-(void)_cancelDeletionTimer;
-(void)_completeDeletionForCircleAtIndex:(long long)arg1 ;
-(void)_sendAffilationItemsDidChange;
-(long long)numberOfCirclesInCircleView:(id)arg1 ;
-(id)circlesView:(id)arg1 circleForIndex:(long long)arg2 ;
-(void)circleView:(id)arg1 didBeginLongPressForCircleAtIndex:(long long)arg2 ;
-(void)circleView:(id)arg1 didEndLongPressForCircleAtIndex:(long long)arg2 ;
-(void)circleView:(id)arg1 didTapCircleAtIndex:(long long)arg2 ;
@end

