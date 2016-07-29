/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileSafari.app/Safari.wkbundle/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/WKWebProcessPlugInLoadDelegate.h>

@protocol PageLoadTestEventsListener;
@class NSMutableSet, NSTimer, WKWebProcessPlugInBrowserContextController, NSMutableDictionary, NSString;

@interface PageLoadTestMeasurementController : NSObject <WKWebProcessPlugInLoadDelegate> {

	BOOL _currentPageLoadFinished;
	HashSet<unsigned long long, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long> >* _loadingSubresources;
	NSMutableSet* _loadingFrames;
	NSTimer* _waitForLoadToReallyEnd;
	WKWebProcessPlugInBrowserContextController* _contextController;
	NSMutableDictionary* _loadData;
	id<PageLoadTestEventsListener> _pageLoadTestEventsProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_maybeEndPageLoadSoon;
-(void)_waitforLoadEndTimerFired:(id)arg1 ;
-(void)_clearPageLoadState;
-(BOOL)_shouldConsiderPageLoadEnded;
-(void)_sendPageLoadFinishedEvent;
-(id)initWithPluginPageContextController:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFailLoadWithErrorForFrame:(id)arg2 error:(id)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFirstVisuallyNonEmptyLayoutForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(id)arg4 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didFinishLoadForResource:(unsigned long long)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didFailLoadForResource:(unsigned long long)arg3 error:(id)arg4 ;
@end
