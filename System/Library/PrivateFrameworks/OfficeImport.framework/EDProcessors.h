/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDWorkbook, NSMutableArray;

@interface EDProcessors : NSObject {

	EDWorkbook* mWorkbook;
	NSMutableArray* mProcessors;

}
-(void)dealloc;
-(void)removeAllObjects;
-(void)markObject:(id)arg1 processor:(Class)arg2 ;
-(id)initWithWorkbook:(id)arg1 ;
-(void)addProcessorClass:(Class)arg1 ;
-(BOOL)hasProcessors;
-(void)removeProcessorClass:(Class)arg1 ;
-(void)applyProcessorsWithSheet:(id)arg1 ;
@end

