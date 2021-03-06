/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DBarExtrusionGeometry, TSCH3DBarVertexResource, TSCH3DBarNormalResource, TSCH3DBarTexCoordResource;

@interface TSCH3DBarResourceCacheItem : NSObject {

	TSCH3DBarExtrusionGeometry* mBarGeometry;
	TSCH3DBarVertexResource* mVertexResource;
	TSCH3DBarNormalResource* mNormalResource;
	TSCH3DBarTexCoordResource* mTexCoordResource;

}

@property (nonatomic,readonly) TSCH3DBarVertexResource * vertexResource; 
@property (nonatomic,readonly) TSCH3DBarNormalResource * normalResource; 
@property (nonatomic,readonly) TSCH3DBarTexCoordResource * texCoordResource; 
+(id)itemWithExtrusionSetting:(const BarExtrusionSetting*)arg1 ;
-(TSCH3DBarVertexResource *)vertexResource;
-(TSCH3DBarNormalResource *)normalResource;
-(TSCH3DBarTexCoordResource *)texCoordResource;
-(id)initWithExtrusionSetting:(const BarExtrusionSetting*)arg1 ;
-(void)dealloc;
@end

