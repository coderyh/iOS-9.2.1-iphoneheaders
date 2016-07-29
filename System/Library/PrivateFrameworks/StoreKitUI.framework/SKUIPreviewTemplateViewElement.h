/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUILockupViewElement;

@interface SKUIPreviewTemplateViewElement : SKUIViewElement {

	long long _itemIdentifier;
	NSString* _previewURLString;

}

@property (nonatomic,readonly) long long itemIdentifier;                           //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) SKUILockupViewElement * previewLockup; 
@property (nonatomic,readonly) NSString * previewURLString;                        //@synthesize previewURLString=_previewURLString - In the implementation block
-(long long)itemIdentifier;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)previewURLString;
-(SKUILockupViewElement *)previewLockup;
@end
