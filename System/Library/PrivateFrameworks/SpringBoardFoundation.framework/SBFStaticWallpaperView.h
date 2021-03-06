/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class NSMutableSet, UIImage, SBFColorBoxes;

@interface SBFStaticWallpaperView : SBFWallpaperView {

	NSMutableSet* _mappedBackdropKeys;
	UIImage* _image;
	UIImage* _displayedImage;
	BOOL _sampleAndDiplayedImageAreSame;
	double _overallContrast;
	SBFColorBoxes* _colorBoxes;

}

@property (nonatomic,retain) SBFColorBoxes * colorBoxes; 
+(BOOL)_allowsRasterization;
+(BOOL)_allowsParallax;
-(void)dealloc;
-(void)setContentView:(id)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(float)_zoomScale;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 treatWallpaper:(BOOL)arg3 forceNoTreatment:(BOOL)arg4 variant:(long long)arg5 ;
-(id)_displayedImage;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 ;
-(void)_setupContentView;
-(SBFColorBoxes *)colorBoxes;
-(id)_computeAverageColor;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(double)arg2 ;
-(double)contrastInRect:(CGRect)arg1 ;
-(id)_blurredImage;
-(id)_imageForBackdropParameters:(SCD_Struct_SB7)arg1 includeTint:(BOOL)arg2 ;
-(BOOL)contrastRequiresTreatments;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(double)cropZoomScale;
-(id)snapshotImage;
-(BOOL)isDisplayingWallpaper:(id)arg1 forVariant:(long long)arg2 options:(id)arg3 ;
-(void)_setSampleImage:(id)arg1 ;
-(id)_repeatingGradientImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)_createColorBoxes;
-(void)setColorBoxes:(SBFColorBoxes *)arg1 ;
-(void)_setupSampleImage:(id)arg1 treated:(BOOL)arg2 ;
-(void)_cacheImagesIfNeededTreated:(BOOL)arg1 ;
-(id)_wallpaperImageForAnalysis;
-(void)_setupWallpaperImage:(id)arg1 treated:(BOOL)arg2 forceNoTreatment:(BOOL)arg3 ;
-(id)_sampleImageKey;
-(id)_displayedImageKey;
-(void)_removeMappedBlurs;
-(id)_mappedImageKeyForParameters:(SCD_Struct_SB7)arg1 includingTint:(BOOL)arg2 ;
-(id)_untintedImageForBackdropParameters:(SCD_Struct_SB7)arg1 ;
-(void)_resetColorBoxes;
-(id)wallpaperImage;
-(CGSize)_imageSize;
-(void)_setImage:(id)arg1 ;
@end

