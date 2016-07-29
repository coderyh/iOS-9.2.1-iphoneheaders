/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSARenderingExporter.h>

@class TPPdfHyperlinkController;

@interface TPRenderingExporter : TSARenderingExporter {

	TPPdfHyperlinkController* mHyperlinkController;
	unsigned long long mPageIndex;
	unsigned long long mPageCount;
	long long mLastPageIndexForLayout;
	BOOL mDidLimitPageLayout;

}

@property (assign,nonatomic) long long lastPageIndexForLayout; 
@property (readonly) BOOL didLimitPageLayout; 
-(CGRect)boundsRect;
-(id)currentInfos;
-(double)totalProgess;
-(CGRect)unscaledClipRect;
-(BOOL)incrementPage;
-(BOOL)preparePage:(unsigned long long)arg1 ;
-(double)progressForCurrentPage;
-(BOOL)hasMoreThanOnePageToPrint;
-(unsigned long long)pageCount;
-(id)initWithDocumentRoot:(id)arg1 ;
-(long long)lastPageIndexForLayout;
-(void)setLastPageIndexForLayout:(long long)arg1 ;
-(BOOL)didLimitPageLayout;
-(void)dealloc;
-(void)setup;
-(void)teardown;
@end
