/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, _CSIRenditionBlockData, NSMutableArray;

@interface _CUIThemePixelRendition : CUIThemeRendition {

	unsigned _nimages;
	CGImage* _image[16];
	CGImageRef _unslicedImage;
	CUIRenditionMetrics* _renditionMetrics;
	CUIRenditionSliceInformation* _sliceInformation;
	_CSIRenditionBlockData* _cachedBlockDataBGRX;
	_CSIRenditionBlockData* _cachedBlockDataRGBX;
	unsigned long long _sourceRowbytes;
	NSMutableArray* _layers;

}
-(id)layerReferences;
-(CGImageRef)unslicedImage;
-(BOOL)isTiled;
-(id)imageForSliceIndex:(long long)arg1 ;
-(BOOL)isScaled;
-(id)maskForSliceIndex:(long long)arg1 ;
-(BOOL)edgesOnly;
-(id)sliceInformation;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(unsigned long long)sourceRowbytes;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(CGImageRef)newImageFromCSIDataSlice:(slice)arg1 ofBitmap:(csibitmap*)arg2 usingColorspace:(CGColorSpaceRef)arg3 ;
-(id)copySharedBlockDataWithPixelFormat:(int)arg1 ;
-(void)setSharedBlockData:(id)arg1 ;
-(void)dealloc;
-(id)metrics;
-(int)pixelFormat;
@end
