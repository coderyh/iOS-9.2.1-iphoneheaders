/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUITableRowCardSectionView.h>

@interface SearchUITableHeaderCardSectionView : SearchUITableRowCardSectionView {

	BOOL _isCompactTable;
	BOOL _headerIsVibrant;
	long long _firstTrailingIndex;

}

@property (assign) long long firstTrailingIndex;              //@synthesize firstTrailingIndex=_firstTrailingIndex - In the implementation block
@property (assign) BOOL isCompactTable;                       //@synthesize isCompactTable=_isCompactTable - In the implementation block
@property (assign) BOOL headerIsVibrant;                      //@synthesize headerIsVibrant=_headerIsVibrant - In the implementation block
-(long long)numberOfColumns;
-(double)fontSize;
-(id)initWithCardSection:(id)arg1 controller:(id)arg2 ;
-(void)setFirstTrailingIndex:(long long)arg1 ;
-(void)setIsCompactTable:(BOOL)arg1 ;
-(void)setHeaderIsVibrant:(BOOL)arg1 ;
-(long long)firstTrailingIndex;
-(BOOL)isCompactTable;
-(BOOL)headerIsVibrant;
-(void)setupWithTableRowCardSectionViews:(id)arg1 ;
-(double)labelBottomBaselineSpacing;
-(double)labelTopBaselineSpacing;
-(BOOL)labelsAreVibrant;
@end
