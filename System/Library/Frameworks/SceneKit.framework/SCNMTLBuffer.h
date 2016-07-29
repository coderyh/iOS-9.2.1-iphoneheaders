/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
@interface SCNMTLBuffer : NSObject {

	long long _usedCount;
	id<MTLBuffer> _buffer;
	long long _offset;
	id _dataSource;

}

@property (assign) long long usedCount;                         //@synthesize usedCount=_usedCount - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) long long offset;                  //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) void* contents; 
@property (assign,nonatomic) id dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
-(void)setDataSource:(id)arg1 ;
-(void)dealloc;
-(id)dataSource;
-(void*)contents;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(void)setBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)buffer;
-(long long)usedCount;
-(void)setUsedCount:(long long)arg1 ;
-(void)incrementUsedCount;
-(long long)decrementUsedCount;
@end
