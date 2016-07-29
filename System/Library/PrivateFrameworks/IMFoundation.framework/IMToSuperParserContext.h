/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMXMLParserContext.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSMutableAttributedString, NSAttributedString, NSArray;

@interface IMToSuperParserContext : IMXMLParserContext {

	unsigned long long _underlineCount;
	unsigned long long _boldCount;
	unsigned long long _italicCount;
	unsigned long long _strikethroughCount;
	unsigned long long _messagePartNumber;
	NSMutableArray* _fontFamilyStack;
	NSMutableArray* _fontSizeStack;
	NSMutableArray* _linkStack;
	NSMutableArray* _backgroundColorStack;
	NSMutableArray* _foregroundColorStack;
	NSMutableDictionary* _currentAttributes;
	BOOL _didAddBodyAttributes;
	long long _baseWritingDirection;
	NSString* _backgroundColor;
	NSString* _foregroundColor;
	NSMutableAttributedString* _body;
	NSMutableArray* _fileTransferGUIDs;

}

@property (nonatomic,retain) NSString * backgroundColor;               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSString * foregroundColor;               //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) NSAttributedString * body; 
@property (nonatomic,retain) NSArray * fileTransferGUIDs;              //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (assign) long long baseWritingDirection;                     //@synthesize baseWritingDirection=_baseWritingDirection - In the implementation block
-(void)setBackgroundColor:(NSString *)arg1 ;
-(NSString *)backgroundColor;
-(void)dealloc;
-(id)name;
-(void)reset;
-(void)appendString:(id)arg1 ;
-(NSAttributedString *)body;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(long long)baseWritingDirection;
-(NSString *)foregroundColor;
-(void)_updateFontSize;
-(void)setForegroundColor:(NSString *)arg1 ;
-(void)setFileTransferGUIDs:(NSArray *)arg1 ;
-(id)resultsForLogging;
-(void)_clearIvars;
-(void)_initIvars;
-(void)_updateFontFamily;
-(void)_pushValue:(id)arg1 ontoStack:(id)arg2 attributeName:(id)arg3 ;
-(void)_popValueFromStack:(id)arg1 attributeName:(id)arg2 ;
-(void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4 emoji:(long long)arg5 ;
-(void)_incrementMessagePartNumber;
-(void)incrementBoldCount;
-(void)decrementBoldCount;
-(void)incrementItalicCount;
-(void)decrementItalicCount;
-(void)incrementUnderlineCount;
-(void)decrementUnderlineCount;
-(void)incrementStrikethroughCount;
-(void)decrementStrikethroughCount;
-(void)pushFontFamily:(id)arg1 ;
-(void)popFontFamily;
-(void)pushFontSize:(id)arg1 ;
-(void)popFontSize;
-(void)pushLink:(id)arg1 ;
-(void)popLink;
-(void)pushBackgroundColor:(id)arg1 ;
-(void)popBackgroundColor;
-(void)pushForegroundColor:(id)arg1 ;
-(void)popForegroundColor;
-(void)appendFileTransferWithGUID:(id)arg1 ;
-(void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4 ;
-(NSArray *)fileTransferGUIDs;
@end
