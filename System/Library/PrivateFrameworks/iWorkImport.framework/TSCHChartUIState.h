/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCHChartUIState : NSObject <NSCopying> {

	BOOL _useFullKeyboard;
	unsigned long long _lastRowSelectedInCDE;
	unsigned long long _lastRowCountInCDE;
	unsigned long long _lastColSelectedInCDE;
	unsigned long long _lastColCountInCDE;
	unsigned long long _multiDataSetIndex;

}

@property (nonatomic,readonly) unsigned long long lastRowSelectedInCDE;              //@synthesize lastRowSelectedInCDE=_lastRowSelectedInCDE - In the implementation block
@property (nonatomic,readonly) unsigned long long lastRowCountInCDE;                 //@synthesize lastRowCountInCDE=_lastRowCountInCDE - In the implementation block
@property (nonatomic,readonly) unsigned long long lastColSelectedInCDE;              //@synthesize lastColSelectedInCDE=_lastColSelectedInCDE - In the implementation block
@property (nonatomic,readonly) unsigned long long lastColCountInCDE;                 //@synthesize lastColCountInCDE=_lastColCountInCDE - In the implementation block
@property (nonatomic,readonly) unsigned long long multiDataSetIndex;                 //@synthesize multiDataSetIndex=_multiDataSetIndex - In the implementation block
@property (nonatomic,readonly) BOOL useFullKeyboard;                                 //@synthesize useFullKeyboard=_useFullKeyboard - In the implementation block
-(unsigned long long)multiDataSetIndex;
-(id)initWithRowRange:(NSRange)arg1 colRange:(NSRange)arg2 useFullKeyboard:(BOOL)arg3 multiDataSetIndex:(unsigned long long)arg4 ;
-(unsigned long long)lastRowSelectedInCDE;
-(unsigned long long)lastRowCountInCDE;
-(unsigned long long)lastColSelectedInCDE;
-(unsigned long long)lastColCountInCDE;
-(BOOL)useFullKeyboard;
-(id)initWithRowRange:(NSRange)arg1 colRange:(NSRange)arg2 useFullKeyboard:(BOOL)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)saveToArchive:(ChartUIState*)arg1 ;
-(id)initWithArchive:(const ChartUIState*)arg1 ;
@end

