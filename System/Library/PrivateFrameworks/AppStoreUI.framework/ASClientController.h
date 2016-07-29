/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUClientController.h>

@interface ASClientController : SUClientController {

	BOOL _shouldExitAfterPurchases;

}

@property (assign,nonatomic) BOOL shouldExitAfterPurchases;              //@synthesize shouldExitAfterPurchases=_shouldExitAfterPurchases - In the implementation block
-(id)initWithClientInterface:(id)arg1 ;
-(BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2 ;
-(BOOL)shouldExitAfterPurchases;
-(void)setShouldExitAfterPurchases:(BOOL)arg1 ;
@end
