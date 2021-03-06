/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet;

@interface MPVolumeHUDController : NSObject {

	NSMutableArray* _contexts;
	NSMutableSet* _categories;

}

@property (nonatomic,readonly) id mainContext; 
+(id)sharedInstance;
-(id)init;
-(id)mainContext;
-(void)setNeedsUpdate;
-(id)pushContext;
-(void)_updateVisibility;
-(void)popContext;
-(void)registerView:(id)arg1 inContext:(id)arg2 ;
-(void)unregisterView:(id)arg1 inContext:(id)arg2 ;
@end

