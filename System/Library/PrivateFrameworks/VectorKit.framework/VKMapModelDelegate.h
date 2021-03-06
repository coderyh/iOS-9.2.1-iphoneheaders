/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKMapModelDelegate <NSObject>
@optional
-(void)mapModel:(id)arg1 didUpdateNavigationPuckSize:(float)arg2;
-(void)mapModel:(id)arg1 didUpdateContainsOverlay:(BOOL)arg2;
-(void)mapModelDidReloadStylesheet:(id)arg1;

@required
-(void)mapModel:(id)arg1 needsPanByOffset:(CGPoint)arg2 relativeToScreenPoint:(CGPoint)arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(/*^block*/id)arg6;
-(BOOL)mapModelInNav:(id)arg1;
-(double)mapModelZoomScale:(id)arg1;
-(void)mapModelWillBecomeFullyDrawn:(id)arg1;
-(void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
-(void)mapModelDidFinishLoadingTiles:(id)arg1;
-(void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
-(void)mapModelLabelsDidLayout:(id)arg1;
-(void)mapModelDidBecomePartiallyDrawn:(id)arg1;
-(BOOL)mapModelInNavAtDefaultZoom:(id)arg1;
-(void)mapModelDidStartLoadingTiles:(id)arg1;
-(void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
-(void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
-(void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;

@end

