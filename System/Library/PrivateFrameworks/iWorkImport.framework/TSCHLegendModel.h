/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHStyleOwnerCollaborationSupport.h>
#import <iWorkImport/TSCHPropertyMapsGeneratedProtocol.h>
#import <iWorkImport/TSCHUnretainedParent.h>
#import <iWorkImport/TSCHStyleOwning.h>
#import <iWorkImport/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHChartInfo, NSString;

@interface TSCHLegendModel : NSObject <TSCHStyleOwnerCollaborationSupport, TSCHPropertyMapsGeneratedProtocol, TSCHUnretainedParent, TSCHStyleOwning, TSDMixing, NSCopying> {

	TSCHChartInfo* mChartInfo;
	CGRect mLegendFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) TSCHChartInfo * chartInfo; 
@property (assign,nonatomic) CGPoint legendOffset; 
@property (assign,nonatomic) CGSize legendSize; 
+(unsigned char)styleOwnerPathType;
-(void)loadFromUnityArchive:(const ChartArchive*)arg1 ;
-(void)saveToUnityArchive:(ChartArchive*)arg1 ;
-(id)g_genericToDefaultPropertyMap;
-(id)g_operationPropertyNameForGenericProperty:(int)arg1 ;
-(void)loadFromPreUFFArchive:(const LegendModelArchive*)arg1 ;
-(void)willModify;
-(id)objectValueForProperty:(int)arg1 ;
-(int)intValueForProperty:(int)arg1 defaultValue:(int)arg2 ;
-(TSCHChartInfo *)chartInfo;
-(void)clearParent;
-(int)defaultPropertyForGeneric:(int)arg1 ;
-(id)p_genericToDefaultPropertyMap;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2 ;
-(BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2 ;
-(BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2 ;
-(id)operationPropertyNameFromGenericProperty:(int)arg1 ;
-(id)nonstyle;
-(id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2 ;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 ;
-(float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2 ;
-(void)setLegendOffset:(CGPoint)arg1 ;
-(void)setLegendSize:(CGSize)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(void)setChartInfo:(TSCHChartInfo *)arg1 ;
-(CGPoint)legendOffset;
-(CGSize)legendSize;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)style;
-(id)context;
-(id)model;
-(id)valueForProperty:(int)arg1 ;
-(id)defaultProperties;
@end

