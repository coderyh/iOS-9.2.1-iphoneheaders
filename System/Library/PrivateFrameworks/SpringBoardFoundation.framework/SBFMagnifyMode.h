/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBFMagnifyMode : NSObject <NSCopying> {

	float _zoomFactor;
	NSString* _name;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                   //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * name;               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) float zoomFactor;              //@synthesize zoomFactor=_zoomFactor - In the implementation block
+(id)currentMagnifyMode;
+(id)magnifyModeWithSize:(CGSize)arg1 name:(id)arg2 ;
-(CGSize)size;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setZoomFactor:(float)arg1 ;
-(float)zoomFactor;
@end

