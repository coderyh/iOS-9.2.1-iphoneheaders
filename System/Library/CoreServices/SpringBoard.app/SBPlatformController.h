/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSOrderedSet, NSLock, NSSet, NSString;

@interface SBPlatformController : NSObject {

	long long _defaultIconInfoOnce;
	NSDictionary* _defaultStarkIconState;
	NSDictionary* _defaultIconState;
	NSOrderedSet* _defaultIconStateDisplayIdentifiers;
	NSLock* _iconStateDisplayIdentifiersLock;
	NSSet* _iconStateDisplayIdentifiers;
	NSString* _localizedDeviceName;
	BOOL _hasGasGauge;
	BOOL _supportsOpenGLES2;
	BOOL _internalInstall;
	BOOL _carrierInstall;
	BOOL _singleCoreDevice;
	BOOL _isH4Device;
	BOOL _starkDevice;
	BOOL _medusaDevice;
	BOOL _supportsAllMedusaFeatures;

}
+(id)uniqueDeviceIdentifier;
+(id)sharedInstance;
+(id)hardwareModel;
+(id)systemBuildVersion;
+(id)deviceClass;
+(id)productType;
-(void)registerForIconVisibilityChanges;
-(BOOL)isMedusaDevice;
-(id)defaultIconStateDisplayIdentifiers;
-(id)iconStateDisplayIdentifiers;
-(BOOL)isSingleCoreDevice;
-(BOOL)isH4Device;
-(id)localizedPlatformName;
-(void)_loadDefaultIconInfoIfNecessary;
-(void)_visibleIdentifiersChanged:(id)arg1 ;
-(id)defaultIconState;
-(id)defaultStarkIconState;
-(BOOL)supportsOpenGLES2;
-(BOOL)isDeveloperInstall;
-(BOOL)isStarkDevice;
-(BOOL)supportsAllMedusaFeatures;
-(BOOL)hasGasGauge;
-(void)dealloc;
-(id)init;
-(BOOL)isCarrierInstall;
-(BOOL)isInternalInstall;
@end

