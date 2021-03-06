/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary;

@interface TSTCSEData : NSObject {

	unordered_map<TSTExpressionNode *, TSTCSENodeData, std::__1::hash<TSTExpressionNode *>, std::__1::equal_to<TSTExpressionNode *>, std::__1::allocator<std::__1::pair<TSTExpressionNode *const, TSTCSENodeData> > >* _nodesToData;
	NSMutableDictionary* _hashesToNodeSets;

}
-(id)expressionsIdenticalToExpression:(id)arg1 ;
-(unsigned long long)expressionSize:(id)arg1 ;
-(void)recordExpression:(id)arg1 data:(TSTCSENodeData)arg2 ;
-(id)expressionsMatchingCSENodeData:(TSTCSENodeData)arg1 forNode:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

