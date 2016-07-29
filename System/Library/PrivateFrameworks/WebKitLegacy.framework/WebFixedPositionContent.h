/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebFixedPositionContent : NSObject {

	WebFixedPositionContentData* _private;

}
-(id)initWithWebView:(id)arg1 ;
-(void)setViewportConstrainedLayers:(HashMap<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> >, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > > >*)arg1 stickyContainerMap:(HashMap<CALayer *, CALayer *, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<CALayer *> >*)arg2 ;
-(double)minimumOffsetFromFixedPositionLayersToAnchorEdge:(long long)arg1 ofRect:(CGRect)arg2 inLayer:(id)arg3 ;
-(void)dealloc;
-(BOOL)hasFixedOrStickyPositionLayers;
-(void)scrollOrZoomChanged:(CGRect)arg1 ;
-(void)didFinishScrollingOrZooming;
-(void)overflowScrollPositionForLayer:(id)arg1 changedTo:(CGPoint)arg2 ;
@end
