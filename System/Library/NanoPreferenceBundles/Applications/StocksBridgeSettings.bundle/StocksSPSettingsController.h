/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/StocksBridgeSettings.bundle/StocksBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class BPSAppGlanceManager, NSArray;

@interface StocksSPSettingsController : PSListController {

	BPSAppGlanceManager* _manager;
	NSArray* _nanoSpecifiers;

}

@property (nonatomic,retain) BPSAppGlanceManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSArray * nanoSpecifiers;                   //@synthesize nanoSpecifiers=_nanoSpecifiers - In the implementation block
-(void)setNanoSpecifiers:(NSArray *)arg1 ;
-(void)_setComplicationDisplayDefault:(long long)arg1 ;
-(NSArray *)nanoSpecifiers;
-(id)defaultStockChoice:(id)arg1 ;
-(BPSAppGlanceManager *)manager;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setManager:(BPSAppGlanceManager *)arg1 ;
-(id)localizedPaneTitle;
-(id)specifiers;
@end
