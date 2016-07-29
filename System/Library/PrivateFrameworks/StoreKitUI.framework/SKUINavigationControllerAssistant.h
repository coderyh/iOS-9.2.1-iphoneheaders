/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIStatusOverlayProvider;
@class SKUIClientContext, UIView, UINavigationController, _UINavigationControllerPalette, UIViewController;

@interface SKUINavigationControllerAssistant : NSObject {

	SKUIClientContext* _clientContext;
	UIView* _childPaletteView;
	BOOL _hidesShadow;
	UINavigationController* _navigationController;
	_UINavigationControllerPalette* _paletteBackgroundView;
	id<SKUIStatusOverlayProvider> _statusOverlayProvider;
	UIViewController* _statusOverlayViewController;

}

@property (nonatomic,__weak,readonly) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;                                 //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) BOOL hidesShadow;                                                    //@synthesize hidesShadow=_hidesShadow - In the implementation block
@property (nonatomic,retain) id<SKUIStatusOverlayProvider> statusOverlayProvider;                 //@synthesize statusOverlayProvider=_statusOverlayProvider - In the implementation block
+(id)existingAssistantForNavigationController:(id)arg1 ;
+(id)assistantForNavigationController:(id)arg1 clientContext:(id)arg2 ;
-(void)dealloc;
-(BOOL)hidesShadow;
-(void)setHidesShadow:(BOOL)arg1 ;
-(UINavigationController *)navigationController;
-(void)willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(SKUIClientContext *)clientContext;
-(void)setPalettePinningBarHidden:(BOOL)arg1 ;
-(void)setPaletteView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setStatusOverlayProvider:(id<SKUIStatusOverlayProvider>)arg1 ;
-(id<SKUIStatusOverlayProvider>)statusOverlayProvider;
-(void)setStatusOverlayProvider:(id)arg1 animated:(BOOL)arg2 ;
-(void)_previewDocumentChangeNotification:(id)arg1 ;
-(id)_initWithNavigationController:(id)arg1 clientContext:(id)arg2 ;
-(void)_transitionToPaletteView:(id)arg1 animated:(BOOL)arg2 operation:(long long)arg3 ;
-(void)_setStatusOverlayProvider:(id)arg1 animated:(BOOL)arg2 ;
-(void)_hideOverlayView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_showOverlayView:(id)arg1 previousOverlayView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_hideChildPaletteView:(id)arg1 animated:(BOOL)arg2 ;
@end
