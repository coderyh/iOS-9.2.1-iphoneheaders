/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKImageCanvasDelegate.h>

@class VKMapImageCanvas, VKGlobeImageCanvas, GEOResourceManifestConfiguration, NSLocale, VKMemoryObserver;

@interface VKMapSnapshotCreator : NSObject <VKImageCanvasDelegate> {

	VKMapImageCanvas* _mapCanvas;
	VKGlobeImageCanvas* _globeCanvas;
	long long _mapType;
	BOOL _didBecomeFullyDrawn;
	BOOL _hasFailedTiles;
	/*^block*/id _completion;
	GLRenderer* _gglRenderer;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	VKMemoryObserver* _memoryObserver;

}

@property (readonly) CGSize size; 
@property (assign,nonatomic) long long mapType; 
@property (assign,nonatomic) BOOL localizeLabels; 
@property (assign,nonatomic) long long labelScaleFactor; 
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings; 
+(BOOL)supportsSharingThumbnails;
+(BOOL)supportsHighResolutionSnapshots;
+(shared_ptr<ggl::GLDevice>*)device;
-(void)_mapkit_configureWithOptions:(id)arg1 ;
-(void)_mapkit_configureFromDefaults;
-(void)cancel;
-(CGSize)size;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(long long)mapType;
-(void)setMapType:(long long)arg1 ;
-(long long)labelScaleFactor;
-(BOOL)isRoadClassDisabled:(int)arg1 ;
-(void)imageCanvasDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2 ;
-(void)imageCanvasWillBecomeFullyDrawn:(id)arg1 ;
-(void)renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5 ;
-(void)_transferSettingsFrom:(id)arg1 to:(id)arg2 ;
-(void)lookAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 z:(unsigned long long)arg3 ;
-(id)activeCanvas;
-(BOOL)showsPointsOfInterest;
-(BOOL)showsBuildings;
-(BOOL)localizeLabels;
-(void)setLocalizeLabels:(BOOL)arg1 ;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(void)renderSnapshot:(/*^block*/id)arg1 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3 ;
-(void)setLabelScaleFactor:(long long)arg1 ;
-(void)setCenterCoordinate:(CGSize)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 ;
-(void)cancelFlushingTileDecodes:(BOOL)arg1 ;
@end

