/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDSlideChild.h>

@class PDNotesMaster;

@interface PDNotesSlide : PDSlideChild {

	PDNotesMaster* mNotesMaster;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)parentSlideBase;
-(void)doneWithContent;
-(id)notesMaster;
-(id)masterPlaceholderOfType:(int)arg1 ;
-(void)setNotesMaster:(id)arg1 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
@end

