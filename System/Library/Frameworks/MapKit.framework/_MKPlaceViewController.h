/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKStackingViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerDelegate.h>
#import <libobjc.A.dylib/MKActivityViewControllerDelegate.h>
#import <libobjc.A.dylib/ABContactViewControllerDelegate.h>
#import <libobjc.A.dylib/ABNewPersonViewControllerDelegate.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>
#import <libobjc.A.dylib/SKProductPageViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceNearbyAppsViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceSharedAttributionDelegate.h>
#import <libobjc.A.dylib/MKTransitReroutingViewDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardEncyclopedicControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceHeaderViewDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardPhotosControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardReviewsControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceInfoViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceActionsViewControllerDelegate.h>
#import <libobjc.A.dylib/MKTransitDepaturesViewControllerDelegate.h>

@protocol _MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate, ABContactViewControllerDelegate;
@class MKPlaceInfoViewController, MKPlaceActionsViewController, MKPlaceTransitViewController, UITapGestureRecognizer, SKProductPageViewController, NSArray, NSMapTable, UIButton, NSString, MKPlaceHeaderView, GEORouteGenerator, _MKDistanceDetailProvider, MKMapItem, CNContact, MKPlaceNearbyAppsMetricsCoordinator, CNContactNavigationController, NSMutableArray;

@interface _MKPlaceViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKActivityViewControllerDelegate, ABContactViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, SKProductPageViewControllerDelegate, MKPlaceNearbyAppsViewControllerDelegate, MKPlaceSharedAttributionDelegate, MKTransitReroutingViewDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKPlaceHeaderViewDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceInfoViewControllerDelegate, MKPlaceActionsViewControllerDelegate, MKTransitDepaturesViewControllerDelegate> {

	MKPlaceInfoViewController* _infoViewController;
	MKPlaceActionsViewController* _actionsViewController;
	MKPlaceTransitViewController* _transitViewController;
	UITapGestureRecognizer* _flyoverTourTapRecognizer;
	BOOL _isSearchingForNearbyApps;
	SKProductPageViewController* _storePageViewController;
	NSArray* _storeItems;
	BOOL _attemptedToCreateAddressBook;
	void* _addressBook;
	void* _originalContactRecordCopy;
	NSMapTable* _additionalViewControllers;
	BOOL _overrideDefaultShowRAP;
	BOOL _hasContactOnlyMapItem;
	UIButton* _favoriteButton;
	BOOL _hasCheckedDistanceAvailability;
	BOOL _showContactActions;
	BOOL _isMapItemUpdating;
	NSString* _headerTitle;
	MKPlaceHeaderView* _placeHeaderView;
	GEORouteGenerator* _routeGenerator;
	_MKDistanceDetailProvider* _distanceMonitor;
	MKMapItem* _mapItem;
	CNContact* _contact;
	CNContact* _originalContact;
	id<_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;
	id<_MKPlaceViewControllerFeedbackDelegate> _placeViewFeedbackDelegate;
	/*^block*/id _placeViewFeedbackAppLaunchHandler;
	unsigned long long _options;
	double _headerHeight;
	MKPlaceNearbyAppsMetricsCoordinator* _metricsCoordinator;
	CNContactNavigationController*<ABContactViewControllerDelegate> _contactsNavigationController;
	NSMutableArray* _viewDidAppearBlocks;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                                                              //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                                                                                             //@synthesize headerTitle=_headerTitle - In the implementation block
@property (assign,nonatomic) BOOL showShareActionsButton; 
@property (assign,nonatomic) unsigned long long options;                                                                                       //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id placeViewFeedbackAppLaunchHandler;                                                                               //@synthesize placeViewFeedbackAppLaunchHandler=_placeViewFeedbackAppLaunchHandler - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerFeedbackDelegate> placeViewFeedbackDelegate;                                      //@synthesize placeViewFeedbackDelegate=_placeViewFeedbackDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;                                            //@synthesize placeViewControllerDelegate=_placeViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                                                                            //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) BOOL showContactActions;                                                                                          //@synthesize showContactActions=_showContactActions - In the implementation block
@property (assign,nonatomic,__weak) CNContactNavigationController*<ABContactViewControllerDelegate> contactsNavigationController;              //@synthesize contactsNavigationController=_contactsNavigationController - In the implementation block
@property (assign,nonatomic) double headerHeight;                                                                                              //@synthesize headerHeight=_headerHeight - In the implementation block
@property (nonatomic,retain) GEORouteGenerator * routeGenerator;                                                                               //@synthesize routeGenerator=_routeGenerator - In the implementation block
@property (assign,nonatomic) BOOL showTitleBar; 
@property (assign,nonatomic) BOOL hideDirectionsButtons; 
@property (assign,nonatomic) BOOL showEditButton; 
@property (assign,nonatomic) BOOL hideInlineMap; 
@property (assign,nonatomic) BOOL showInlineMapInHeader; 
@property (assign,nonatomic) BOOL showRemovePin; 
@property (assign,nonatomic) BOOL showNearbyApps; 
@property (assign,nonatomic) BOOL showFlyoverTour; 
@property (assign,nonatomic) BOOL showReportAProblem; 
@property (assign,nonatomic) BOOL disableReportAProblem; 
@property (assign,nonatomic) BOOL showSimulateLocation; 
@property (assign,nonatomic) BOOL showOpenInSkyline; 
@property (nonatomic,retain) MKPlaceHeaderView * placeHeaderView;                                                                              //@synthesize placeHeaderView=_placeHeaderView - In the implementation block
@property (nonatomic,retain) CNContact * originalContact;                                                                                      //@synthesize originalContact=_originalContact - In the implementation block
@property (nonatomic,retain) _MKDistanceDetailProvider * distanceMonitor;                                                                      //@synthesize distanceMonitor=_distanceMonitor - In the implementation block
@property (assign,nonatomic) BOOL hasCheckedDistanceAvailability;                                                                              //@synthesize hasCheckedDistanceAvailability=_hasCheckedDistanceAvailability - In the implementation block
@property (assign,nonatomic) BOOL isMapItemUpdating;                                                                                           //@synthesize isMapItemUpdating=_isMapItemUpdating - In the implementation block
@property (nonatomic,readonly) MKPlaceNearbyAppsMetricsCoordinator * metricsCoordinator;                                                       //@synthesize metricsCoordinator=_metricsCoordinator - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewDidAppearBlocks;                                                                             //@synthesize viewDidAppearBlocks=_viewDidAppearBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(long long)preferredStatusBarStyle;
-(void)_commonInit;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(void)transitReroutingViewController:(id)arg1 selectedRoute:(id)arg2 withDecoderData:(id)arg3 withOrigin:(id)arg4 ;
-(void)_updateViewControllers;
-(BOOL)showShareActionsButton;
-(BOOL)allowTransitLineSelection;
-(void)setShowReportAProblem:(BOOL)arg1 ;
-(void)setViewDidAppearBlocks:(NSMutableArray *)arg1 ;
-(CNContact *)originalContact;
-(BOOL)showOpenInSkyline;
-(BOOL)_showReportAProblem;
-(BOOL)showSimulateLocation;
-(void)infoViewController:(id)arg1 didSelectDeal:(id)arg2 ;
-(void)setDisableReportAProblem:(BOOL)arg1 ;
-(BOOL)disableReportAProblem;
-(id)initWithContact:(id)arg1 mapItem:(id)arg2 ;
-(void)actionsViewControllerReportAProblem:(id)arg1 ;
-(void)actionsViewControllerSimulateLocation:(id)arg1 ;
-(void)setPeekPresentationMode:(BOOL)arg1 ;
-(NSMutableArray *)viewDidAppearBlocks;
-(void)actionsViewControllerShare:(id)arg1 ;
-(void)setHideFavoriteToobarButton:(BOOL)arg1 ;
-(void)actionsViewControllerCreateNewContact:(id)arg1 ;
-(void)_showShareSheet:(id)arg1 ;
-(BOOL)hideFavoriteToobarButton;
-(void)actionsViewControllerRemovePin:(id)arg1 ;
-(void)actionsViewControllerAddContactToExistingContact:(id)arg1 ;
-(void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg1 ;
-(void)setShowShareActionsButton:(BOOL)arg1 ;
-(void)_openAppWithBundleID:(id)arg1 ;
-(id)_mapTableKeyForSectionPosition:(long long)arg1 ;
-(BOOL)showRemovePin;
-(void)nearbyAppsController:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3 ;
-(void)_showEditSheet:(id)arg1 ;
-(void)_setNumberOfReviews;
-(void)_setupHeaderView;
-(id)initWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
-(double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3 ;
-(double)stackingViewController:(id)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(id)arg2 ;
-(void)setHideInlineMap:(BOOL)arg1 ;
-(void)placeCardReviewsControllerDidSelectWriteReview:(id)arg1 ;
-(BOOL)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2 ;
-(BOOL)hideInlineMap;
-(void)nearbyAppsController:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3 ;
-(id)placeViewFeedbackAppLaunchHandler;
-(id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2 ;
-(void)setShowEditButton:(BOOL)arg1 ;
-(void)_searchForNearbyApps;
-(BOOL)showEditButton;
-(void)setShowSimulateLocation:(BOOL)arg1 ;
-(BOOL)peekPresentationMode;
-(void)placeCardReviewsController:(id)arg1 didSelectViewReview:(id)arg2 ;
-(void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1 ;
-(BOOL)shouldShowDirectionsForInfoViewController:(id)arg1 ;
-(void)stackingViewController:(id)arg1 calculatedTransformForHeaderView:(CATransform3D)arg2 ;
-(void)removeAdditionalViewController:(id)arg1 ;
-(void)_setHeaderSubtitleWithReviewInfo:(id)arg1 ;
-(BOOL)showReportAProblem;
-(void)setShowFlyoverTour:(BOOL)arg1 ;
-(BOOL)shouldShowFlyoverTourForInfoViewController:(id)arg1 ;
-(void)_didResolveAttribution:(id)arg1 ;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(BOOL)showFlyoverTour;
-(id)_contactForEditOperations;
-(void)presentHeaderView;
-(void)setShowNearbyApps:(BOOL)arg1 ;
-(void)setIsMapItemUpdating:(BOOL)arg1 ;
-(void*)_recordForContact:(id)arg1 ;
-(double)stackingViewControllerHeightForHeaderView:(id)arg1 ;
-(BOOL)showNearbyApps;
-(void)setShowOpenInSkyline:(BOOL)arg1 ;
-(void)openInfoAttribution;
-(BOOL)shouldShowInlineMapForInfoViewController:(id)arg1 ;
-(id)initWithContact:(id)arg1 mapItem:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(BOOL)arg3 ;
-(void)setShowInlineMapInHeader:(BOOL)arg1 ;
-(void)_tappedForFlyoverTour;
-(void)placeCardPhotosControllerDidSelectAddPhoto:(id)arg1 ;
-(id)additionalViewControllersAtPosition:(long long)arg1 ;
-(GEORouteGenerator *)routeGenerator;
-(void)_openInfoAttribution;
-(BOOL)_removeMapsDataFromContactWithRecordID:(int)arg1 ;
-(void)resetHeaderViewAnimations;
-(BOOL)showContactActions;
-(void)updateActionVisibility;
-(void)stackingViewControllerDidEndScroll:(id)arg1 ;
-(void)_displayAppWithMetadata:(id)arg1 ;
-(long long)_sectionPositionForMapTableKey:(id)arg1 ;
-(void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)setContactsNavigationController:(CNContactNavigationController*<ABContactViewControllerDelegate>)arg1 ;
-(void)addAdditionalViewController:(id)arg1 atPosition:(long long)arg2 ;
-(CNContactNavigationController*<ABContactViewControllerDelegate>)contactsNavigationController;
-(void)setPlaceViewControllerDelegate:(id<_MKPlaceViewControllerDelegate>)arg1 ;
-(void)resetHeaderView;
-(BOOL)hideDirectionsButtons;
-(void)setHideDirectionsButtons:(BOOL)arg1 ;
-(void)stackingViewControllerWillBeginScroll:(id)arg1 ;
-(void)_setDefaultViewControllers:(id)arg1 ;
-(void)setOriginalContact:(CNContact *)arg1 ;
-(void)placeCardReviewsControllerDidSelectCheckIn:(id)arg1 ;
-(void)setShowTitleBar:(BOOL)arg1 ;
-(void)_findNearbyAppsAtCoordinate:(SCD_Struct_MK1)arg1 ;
-(BOOL)showTitleBar;
-(void)stackingViewController:(id)arg1 didShowMinimumVisibleSurfacePercentForAnalyticsSelection:(id)arg2 ;
-(void)setPlaceViewFeedbackAppLaunchHandler:(id)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(void)mapItemWillUpdate;
-(void)placeCardPhotosControllerDidSelectViewAllPhotos:(id)arg1 ;
-(void)errorLoadingMapItemUpdate:(id)arg1 ;
-(MKPlaceNearbyAppsMetricsCoordinator *)metricsCoordinator;
-(void)setPlaceViewFeedbackDelegate:(id<_MKPlaceViewControllerFeedbackDelegate>)arg1 ;
-(BOOL)isMapItemUpdating;
-(void)headerView:(id)arg1 didFinishLoadingBackgroundViewOfType:(long long)arg2 ;
-(_MKDistanceDetailProvider *)distanceMonitor;
-(void)_updateHeaderHeight;
-(BOOL)showInlineMapInHeader;
-(void)_searchForNearbyAppsIfNecessary;
-(void)setAllowTransitLineSelection:(BOOL)arg1 ;
-(BOOL)headerViewshouldShowTitleSubtitleAndStarRatings:(id)arg1 ;
-(MKPlaceHeaderView *)placeHeaderView;
-(void)_setHeaderSubtitleWithDistanceInfo:(id)arg1 ;
-(void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3 ;
-(void)_setHeaderSubtitleWithDistance:(id)arg1 reviewInfo:(id)arg2 ;
-(void)setHasCheckedDistanceAvailability:(BOOL)arg1 ;
-(void)setShowRemovePin:(BOOL)arg1 ;
-(CNContact *)contact;
-(void)setDistanceMonitor:(_MKDistanceDetailProvider *)arg1 ;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3 ;
-(void)actionsViewControllerOpenInSkyline:(id)arg1 ;
-(id)_createFavoriteButton;
-(void)_dismissTransitIncidents;
-(BOOL)hasCheckedDistanceAvailability;
-(void)setShowContactActions:(BOOL)arg1 ;
-(void)setRouteGenerator:(GEORouteGenerator *)arg1 ;
-(void)restartHeaderViewAnimations;
-(void)transitDeparturesViewController:(id)arg1 didSelectTransitLine:(id)arg2 ;
-(id<_MKPlaceViewControllerFeedbackDelegate>)placeViewFeedbackDelegate;
-(void)transitDeparturesViewController:(id)arg1 showIncidents:(id)arg2 ;
-(void)setPlaceHeaderView:(MKPlaceHeaderView *)arg1 ;
-(void)transitDeparturesViewController:(id)arg1 didSelectConnectionInformation:(id)arg2 ;
-(void)_performWhenViewHasAppeared:(/*^block*/id)arg1 ;
-(void)_favoriteTapped:(id)arg1 ;
-(id<_MKPlaceViewControllerDelegate>)placeViewControllerDelegate;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void*)_addressBook;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
@end

