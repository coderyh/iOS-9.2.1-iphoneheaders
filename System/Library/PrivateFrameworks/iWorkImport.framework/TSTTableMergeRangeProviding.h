/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTTableMergeRangeProviding <NSObject>
@required
-(TSUColumnRowRect*)expandCellRangeToCoverMergedCells:(TSUColumnRowRect)arg1;
-(id)expandCellRegionToCoverMergedCells:(id)arg1;
-(id)allMergeRanges;
-(id)mergeRangesForCellRange:(TSUColumnRowRect)arg1;
-(id)mergeRangesForCellRegion:(id)arg1;

@end
