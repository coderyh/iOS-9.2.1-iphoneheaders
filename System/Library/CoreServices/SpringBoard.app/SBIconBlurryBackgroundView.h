/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/_SBIconWallpaperColorClient.h>

@protocol SBIconBlurryBackgroundViewObserver;
@class NSString;

@interface SBIconBlurryBackgroundView : UIView <_SBIconWallpaperColorClient> {

	CGRect _wallpaperRelativeBounds;
	BOOL _isBlurring;
	BOOL _suppressesExternalUpdates;
	id<SBIconBlurryBackgroundViewObserver> _observer;
	/*^block*/id _wantsBlurEvaluator;
	CGPoint _wallpaperRelativeCenter;

}

@property (assign,nonatomic) id<SBIconBlurryBackgroundViewObserver> observer;                                 //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) CGPoint wallpaperRelativeCenter;                                                 //@synthesize wallpaperRelativeCenter=_wallpaperRelativeCenter - In the implementation block
@property (nonatomic,readonly) BOOL isBlurring;                                                               //@synthesize isBlurring=_isBlurring - In the implementation block
@property (nonatomic,copy) id wantsBlurEvaluator;                                                             //@synthesize wantsBlurEvaluator=_wantsBlurEvaluator - In the implementation block
@property (assign,getter=isSuppressingExternalUpdates,nonatomic) BOOL suppressesExternalUpdates;              //@synthesize suppressesExternalUpdates=_suppressesExternalUpdates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWallpaperRelativeCenter:(CGPoint)arg1 ;
-(void)setSuppressesExternalUpdates:(BOOL)arg1 ;
-(void)setWantsBlurEvaluator:(id)arg1 ;
-(CGRect)wallpaperRelativeBounds;
-(BOOL)wantsBlur:(id)arg1 ;
-(void)setWallpaperColor:(CGColorRef)arg1 phase:(CGSize)arg2 ;
-(void)setBlurring:(BOOL)arg1 ;
-(BOOL)isBlurring;
-(CGPoint)wallpaperRelativeCenter;
-(id)wantsBlurEvaluator;
-(BOOL)isSuppressingExternalUpdates;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(id<SBIconBlurryBackgroundViewObserver>)observer;
-(void)setObserver:(id<SBIconBlurryBackgroundViewObserver>)arg1 ;
@end
