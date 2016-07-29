/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RadiosPreferencesDelegate, OS_dispatch_queue;
#import <AppSupport/AppSupport-Structs.h>
@class NSObject;

@interface RadiosPreferences : NSObject {

	SCPreferencesRef _prefs;
	int _applySkipCount;
	id<RadiosPreferencesDelegate> _delegate;
	BOOL _isCachedAirplaneModeValid;
	BOOL _cachedAirplaneMode;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL notifyForExternalChangeOnly;

}

@property (assign,nonatomic) BOOL airplaneMode; 
@property (assign,nonatomic) id<RadiosPreferencesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL notifyForExternalChangeOnly; 
+(BOOL)shouldMirrorAirplaneMode;
-(void*)getValueForKey:(id)arg1 ;
-(void)notifyTarget:(unsigned)arg1 ;
-(void)initializeSCPrefs:(id)arg1 ;
-(void)setAirplaneModeWithoutMirroring:(BOOL)arg1 ;
-(void)setCallback:(/*function pointer*/void*)arg1 withContext:(SCD_Struct_Ra9*)arg2 ;
-(BOOL)notifyForExternalChangeOnly;
-(void)setValue:(void*)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id<RadiosPreferencesDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(oneway void)release;
-(id<RadiosPreferencesDelegate>)delegate;
-(void)synchronize;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)airplaneMode;
-(void)refresh;
-(void)setAirplaneMode:(BOOL)arg1 ;
-(void)setNotifyForExternalChangeOnly:(BOOL)arg1 ;
@end
