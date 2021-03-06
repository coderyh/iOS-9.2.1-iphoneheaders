/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebFormDelegate, WebCaretChangeListener, WebGeolocationProvider, WebDeviceOrientationProvider, WebNotificationProvider;
#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebInspector, WebNodeHighlight, NSString, WebPreferences, NSURL, WAKWindow, NSMutableSet, WebVideoFullscreenController, WebIndicateLayer, WebFixedPositionContent;

@interface WebViewPrivate : NSObject {

	PageRef page;
	RefPtr<WebViewGroup>* group;
	id UIDelegate;
	id UIDelegateForwarder;
	id resourceProgressDelegate;
	id downloadDelegate;
	id policyDelegate;
	id policyDelegateForwarder;
	id frameLoadDelegate;
	id frameLoadDelegateForwarder;
	id<WebFormDelegate> formDelegate;
	id editingDelegate;
	id editingDelegateForwarder;
	id scriptDebugDelegate;
	id historyDelegate;
	id resourceProgressDelegateForwarder;
	id formDelegateForwarder;
	WebInspector* inspector;
	WebNodeHighlight* currentNodeHighlight;
	BOOL shouldMaintainInactiveSelection;
	BOOL allowsUndo;
	float zoomMultiplier;
	BOOL zoomsTextOnly;
	NSString* applicationNameForUserAgent;
	String* userAgent;
	BOOL userAgentOverridden;
	WebPreferences* preferences;
	BOOL useSiteSpecificSpoofing;
	NSURL* userStyleSheetLocation;
	WAKWindow* hostWindow;
	int programmaticFocusCount;
	WebResourceDelegateImplementationCache* resourceLoadDelegateImplementations;
	WebFrameLoadDelegateImplementationCache* frameLoadDelegateImplementations;
	WebScriptDebugDelegateImplementationCache* scriptDebugDelegateImplementations;
	WebHistoryDelegateImplementationCache* historyDelegateImplementations;
	void* observationInfo;
	BOOL closed;
	BOOL closing;
	BOOL shouldCloseWithWindow;
	BOOL mainFrameDocumentReady;
	BOOL drawsBackground;
	BOOL tabKeyCyclesThroughElementsChanged;
	BOOL becomingFirstResponder;
	BOOL becomingFirstResponderFromOutside;
	BOOL usesPageCache;
	CGColorRef backgroundColor;
	NSString* mediaStyle;
	BOOL hasSpellCheckerDocumentTag;
	long long spellCheckerDocumentTag;
	BOOL isStopping;
	id UIKitDelegate;
	id UIKitDelegateForwarder;
	id WebMailDelegate;
	BOOL allowsMessaging;
	NSMutableSet* _caretChangeListeners;
	id<WebCaretChangeListener> _caretChangeListener;
	CGSize fixedLayoutSize;
	BOOL mainViewIsScrollingOrZooming;
	int didDrawTiles;
	Mutex pendingFixedPositionLayoutRectMutex;
	CGRect pendingFixedPositionLayoutRect;
	HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > >* identifierMap;
	BOOL _keyboardUIModeAccessed;
	int _keyboardUIMode;
	BOOL shouldUpdateWhileOffscreen;
	BOOL includesFlattenedCompositingLayersWhenDrawingToBitmap;
	BOOL needsOneShotDrawingSynchronization;
	BOOL postsAcceleratedCompositingNotifications;
	RefPtr<LayerFlushController>* layerFlushController;
	CGSize lastLayoutSize;
	WebVideoFullscreenController* fullscreenController;
	WebIndicateLayer* indicateLayer;
	id<WebGeolocationProvider> _geolocationProvider;
	id<WebDeviceOrientationProvider> m_deviceOrientationProvider;
	id<WebNotificationProvider> _notificationProvider;
	RefPtr<WebCore::HistoryItem>* _globalHistoryItem;
	BOOL interactiveFormValidationEnabled;
	int validationMessageTimerMagnification;
	float customDeviceScaleFactor;
	WebFixedPositionContent* _fixedPositionContent;
	RetainPtr<NSData>* sourceApplicationAuditData;
	BOOL _didPerformFirstNavigation;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

