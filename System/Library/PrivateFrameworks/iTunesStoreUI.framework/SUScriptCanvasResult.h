/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class UIImage;

@interface SUScriptCanvasResult : NSObject {

	UIImage* _image;
	CGPathRef _path;

}

@property (nonatomic,readonly) UIImage * canvasImage;              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGPathRef canvasPath;               //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(UIImage *)canvasImage;
-(id)_initWithCanvas:(id)arg1 ;
-(CGPathRef)canvasPath;
@end

