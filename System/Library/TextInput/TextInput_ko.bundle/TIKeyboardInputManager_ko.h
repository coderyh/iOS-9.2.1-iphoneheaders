/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/TextInput/TextInput_ko.bundle/TextInput_ko
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ko/TextInput_ko-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_ko : TIKeyboardInputManagerZephyr {

	Hangul2SetAutomata* _batchConverter;
	BOOL _deleteSyllable;

}
-(void)dealloc;
-(void)clearInput;
-(BOOL)shouldExtendPriorWord;
-(BOOL)canHandleKeyHitTest;
-(BOOL)needsKeyHitTestResults;
-(void)setInput:(id)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(void)setInputIndex:(unsigned)arg1 ;
-(BOOL)doesComposeText;
-(void)acceptInput;
-(BOOL)dictionaryUsesExternalEncoding;
-(id)internalStringToExternal:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 ;
-(BOOL)acceptsCharacter:(unsigned)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)composeJamo:(id)arg1 ;
@end
