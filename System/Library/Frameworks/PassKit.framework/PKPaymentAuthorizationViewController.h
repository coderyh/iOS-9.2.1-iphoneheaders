/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationControllerPrivateDelegate.h>

@protocol PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate;
@class PKPaymentAuthorizationController, NSString;

@interface PKPaymentAuthorizationViewController : UIViewController <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate> {

	id<PKPaymentAuthorizationViewControllerDelegate> _delegate;
	id<PKPaymentAuthorizationViewControllerPrivateDelegate> _privateDelegate;
	PKPaymentAuthorizationController* _paymentController;

}

@property (assign,nonatomic) id<PKPaymentAuthorizationViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<PKPaymentAuthorizationViewControllerPrivateDelegate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationController * paymentController;                                 //@synthesize paymentController=_paymentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2 ;
+(BOOL)canMakePayments;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PKPaymentAuthorizationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPaymentAuthorizationViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)modalPresentationStyle;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithPaymentRequest:(id)arg1 ;
-(void)setPrivateDelegate:(id<PKPaymentAuthorizationViewControllerPrivateDelegate>)arg1 ;
-(id<PKPaymentAuthorizationViewControllerPrivateDelegate>)privateDelegate;
-(void)paymentAuthorizationControllerWillAuthorizePayment:(id)arg1 ;
-(void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2 ;
-(void)paymentAuthorizationControllerDidFinish:(id)arg1 ;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingAddress:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationController:(id)arg1 didSelectPaymentMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_registerForApplicationLifeCycleNotifications;
-(void)_unregisterForApplicationLifeCycleNotifications;
-(void)_addDeactivationReason:(id)arg1 ;
-(void)_removeDeactivationReason:(id)arg1 ;
-(PKPaymentAuthorizationController *)paymentController;
-(void)setPaymentController:(PKPaymentAuthorizationController *)arg1 ;
@end

