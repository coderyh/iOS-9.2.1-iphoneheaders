/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSWPTOCEntryStyle;

@interface TSWPTOCMapEntry : NSObject {

	BOOL _showInTOC;
	TSWPTOCEntryStyle* _tocEntryStyle;

}

@property (nonatomic,retain) TSWPTOCEntryStyle * tocEntryStyle;              //@synthesize tocEntryStyle=_tocEntryStyle - In the implementation block
@property (assign,nonatomic) BOOL showInTOC;                                 //@synthesize showInTOC=_showInTOC - In the implementation block
-(id)copyWithContext:(id)arg1 ;
-(BOOL)showInTOC;
-(id)initWithTOCEntryStyle:(id)arg1 showInTOC:(BOOL)arg2 ;
-(TSWPTOCEntryStyle *)tocEntryStyle;
-(void)setTocEntryStyle:(TSWPTOCEntryStyle *)arg1 ;
-(void)setShowInTOC:(BOOL)arg1 ;
@end
