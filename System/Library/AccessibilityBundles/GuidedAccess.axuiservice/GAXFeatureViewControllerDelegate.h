/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXFeatureViewControllerDelegate <NSObject>
@optional
-(id)viewForPresentingOverlayUserInterfaceForFeatureViewController:(id)arg1;
-(void)featureViewController:(id)arg1 touchSystemFeatureDidChange:(BOOL)arg2;
-(void)featureViewController:(id)arg1 willPresentPopoverControllerInOverlayUserInterfaceView:(id)arg2;
-(void)featureViewController:(id)arg1 didDismissPopoverControllerFromOverlayUserInterfaceView:(id)arg2;

@required
-(BOOL)shouldDisplayMiniToolbarForController:(id)arg1;

@end

