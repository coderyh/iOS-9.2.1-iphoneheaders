/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPicker/WiFiPicker-Structs.h>
#import <libobjc.A.dylib/SBPluginBundleController.h>

@protocol SBUIUserAgent;
@class NSRecursiveLock, WFWiFiAlertItem, NSDictionary;

@interface WFWiFiManager : NSObject <SBPluginBundleController> {

	NSRecursiveLock* _lock;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	int _rssiThreshold;
	BOOL _joining;
	BOOL _bluetoothTethered;
	BOOL _delayedForBTScan;
	WFWiFiAlertItem* _alertItem;
	NSDictionary* _lastWifiScanDictionary;
	unsigned _notificationID;
	id<SBUIUserAgent> _sbUserAgent;

}

@property (assign,nonatomic) WFWiFiAlertItem * currentAlertItem;              //@synthesize alertItem=_alertItem - In the implementation block
+(id)sharedInstance;
+(void)awakeFromBundle;
-(void)setCurrentAlertItem:(WFWiFiAlertItem *)arg1 ;
-(WFWiFiAlertItem *)currentAlertItem;
-(void)joinNetwork:(id)arg1 password:(id)arg2 ;
-(void)_appFlagsChanged:(id)arg1 ;
-(BOOL)joining;
-(BOOL)_shouldShowPicker:(BOOL)arg1 ;
-(BOOL)isAskToJoinEnabled;
-(void)_joinComplete:(int)arg1 network:(WiFiNetworkRef)arg2 ;
-(void)setLastWifiScanDictionary:(id)arg1 ;
-(void)_bluetoothScanComplete:(id)arg1 ;
-(void)userChoseNetwork:(id)arg1 ;
-(void)_trustCallbackWithID:(unsigned)arg1 type:(int)arg2 network:(WiFiNetworkRef)arg3 data:(id)arg4 ;
-(id)lastWifiScanDictionary;
-(void)_askToJoinWithID:(unsigned)arg1 ;
-(void)_bluetoothConnectionChanged:(id)arg1 ;
-(void)_appDeactivated:(id)arg1 ;
-(void)_wifiScanComplete:(CFArrayRef)arg1 ;
-(void)_lockButtonPressed:(id)arg1 ;
-(void)_scanFailed;
-(void)cancelTrust:(BOOL)arg1 ;
-(void)acceptTrust:(id)arg1 ;
-(void)_appLaunched:(id)arg1 ;
-(WiFiManagerClientRef)_managerLocked;
-(void)scan;
-(id)init;
-(void)dismissAlerts;
-(void)cancelPicker:(BOOL)arg1 ;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(id)knownNetworks;
@end

