/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKSearchable <TSKModel>
@optional
-(id)searchForString:(id)arg1 options:(unsigned long long)arg2 searchCanvasDelegate:(id)arg3 onHit:(/*^block*/id)arg4;
-(id)searchForAnnotationsWithHitBlock:(/*^block*/id)arg1;
-(id)childCommandForReplaceAllCommand:(id)arg1;
-(void)continueAnnotationSearch:(id)arg1;
-(void)continueSearch:(id)arg1;

@end
