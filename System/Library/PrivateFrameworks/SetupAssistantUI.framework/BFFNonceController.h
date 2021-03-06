/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/BuddyController.h>

@protocol BuddyControllerDelegate;
@class NSString;

@interface BFFNonceController : UIViewController <BuddyController> {

	id<BuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)controllerNeedsToRun;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(id<BuddyControllerDelegate>)delegate;
@end

