/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalPreferences;

@interface EKUIDebugPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) BOOL showInviteesAndMoreRegion; 
@property (assign,nonatomic) BOOL verifyIntegrityOfAvailabilityTimeSearchTimelines; 
@property (assign,nonatomic) BOOL showReportAProblemNotificationButton; 
+(id)shared;
-(id)init;
-(BOOL)showInviteesAndMoreRegion;
-(void)setShowInviteesAndMoreRegion:(BOOL)arg1 ;
-(BOOL)verifyIntegrityOfAvailabilityTimeSearchTimelines;
-(void)setVerifyIntegrityOfAvailabilityTimeSearchTimelines:(BOOL)arg1 ;
-(BOOL)showReportAProblemNotificationButton;
-(void)setShowReportAProblemNotificationButton:(BOOL)arg1 ;
@end

