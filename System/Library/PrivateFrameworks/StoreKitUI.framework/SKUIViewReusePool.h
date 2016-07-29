/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, NSMutableDictionary, NSMutableArray;

@interface SKUIViewReusePool : NSObject {

	UIView* _parentView;
	NSMutableDictionary* _reuseClasses;
	NSMutableArray* _viewPool;

}
-(id)initWithParentView:(id)arg1 ;
-(void)recycleReusableViews:(id)arg1 ;
-(void)hideUnusedViews;
-(void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2 ;
-(id)dequeueReusableViewWithReuseIdentifier:(id)arg1 ;
@end
