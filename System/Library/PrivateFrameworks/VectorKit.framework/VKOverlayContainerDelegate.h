/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKOverlayContainerDelegate <NSObject>
@required
-(BOOL)overlayContainerIsInRealisticMode:(id)arg1;
-(BOOL)overlayContainerIsInTransitMode:(id)arg1;
-(id)overlayContainer:(id)arg1 roadTileForTile:(id)arg2;
-(void)overlayContainer:(id)arg1 showingRouteInStandardModeDidChange:(BOOL)arg2;
-(id)overlayContainer:(id)arg1 painterForOverlay:(id)arg2;

@end
