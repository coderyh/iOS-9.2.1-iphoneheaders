/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAwayListCellButtonHandler.h>
#import <libobjc.A.dylib/SBUIQuietModePlayability.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, SBLockScreenActionContext, NSString;

@interface SBAwayListItem : NSObject <SBAwayListCellButtonHandler, SBUIQuietModePlayability, NSCopying> {

	NSDate* _timestamp;
	BOOL _isNewItem;
	SBLockScreenActionContext* _lockScreenActionContext;
	NSString* _buttonLabel;

}

@property (nonatomic,copy) NSString * buttonLabel;                          //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL isNewItem;                                //@synthesize isNewItem=_isNewItem - In the implementation block
@property (nonatomic,readonly) BOOL shouldPlayLightsAndSirens; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)wantsHighlightOnInsert;
-(BOOL)canBeRemovedByNotificationCenterPresentation;
-(BOOL)canBeRemovedByUnlock;
-(BOOL)isNewItem;
-(void)setIsNewItem:(BOOL)arg1 ;
-(void)dealloc;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setButtonLabel:(NSString *)arg1 ;
-(NSString *)buttonLabel;
-(BOOL)shouldPlayLightsAndSirens;
-(BOOL)inertWhenLocked;
-(BOOL)overridesQuietMode;
-(BOOL)overridesPocketMode;
-(void)buttonPressed;
-(BOOL)isCritical;
@end
