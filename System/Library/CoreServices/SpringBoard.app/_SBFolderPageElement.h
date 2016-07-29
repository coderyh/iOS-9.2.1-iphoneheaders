/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBIconGridImage, SBFolderIcon;

@interface _SBFolderPageElement : NSObject {

	SBIconGridImage* _gridImage;
	unsigned long long _visibleRow;
	unsigned long long _pageIndex;
	SBFolderIcon* _folderIcon;

}

@property (nonatomic,retain) SBIconGridImage * gridImage;                //@synthesize gridImage=_gridImage - In the implementation block
@property (assign,nonatomic) unsigned long long visibleRow;              //@synthesize visibleRow=_visibleRow - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;               //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) SBFolderIcon * folderIcon;                  //@synthesize folderIcon=_folderIcon - In the implementation block
-(void)setFolderIcon:(SBFolderIcon *)arg1 ;
-(SBFolderIcon *)folderIcon;
-(unsigned long long)visibleRow;
-(SBIconGridImage *)gridImage;
-(unsigned long long)firstVisibleMiniIconIndex;
-(unsigned long long)firstVisibleRowForGap;
-(void)setGridImage:(SBIconGridImage *)arg1 ;
-(void)setVisibleRow:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
@end
