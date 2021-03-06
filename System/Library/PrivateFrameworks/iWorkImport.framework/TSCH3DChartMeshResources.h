/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@protocol TSCH3DChartMeshCreator;
@class NSObject, TSCHChartSeries, TSCH3DChartMeshSharedResource, TSCH3DResource, TSCH3DChartTexcoordSharedResource, TSCH3DGeometry;

@interface TSCH3DChartMeshResources : NSObject <TSCHUnretainedParent> {

	NSObject*<TSCH3DChartMeshCreator> mCreator;
	TSCHChartSeries* mSeries;
	TSCH3DChartMeshSharedResource* mVertex;
	TSCH3DChartMeshSharedResource* mBounds;
	TSCH3DResource* mCachedBounds;
	TSCH3DChartMeshSharedResource* mNormal;
	TSCH3DChartTexcoordSharedResource* mTexcoord;
	GeometryArrays mArrays;
	TSCH3DGeometry* mGeometry;

}

@property (nonatomic,readonly) TSCH3DResource * vertex; 
@property (nonatomic,readonly) TSCH3DResource * bounds; 
@property (nonatomic,readonly) TSCH3DResource * normal; 
@property (nonatomic,readonly) TSCH3DResource * texcoord; 
+(id)nullBuffer;
+(id)resourcesWithSeries:(id)arg1 creator:(id)arg2 ;
-(void)clearParent;
-(void)regenerateForChild:(id)arg1 ;
-(TSCH3DResource *)vertex;
-(id)initWithSeries:(id)arg1 creator:(id)arg2 ;
-(void)regenerateBounds;
-(TSCH3DResource *)texcoord;
-(GeometryResource)geometryResourceWithPrimitiveType:(int)arg1 ;
-(TSCH3DResource *)bounds;
-(void)dealloc;
-(void)regenerate;
-(TSCH3DResource *)normal;
@end

