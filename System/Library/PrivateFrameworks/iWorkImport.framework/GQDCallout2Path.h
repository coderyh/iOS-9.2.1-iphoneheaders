/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDPath.h>

@interface GQDCallout2Path : GQDPath {

	CGSize mSize;
	double mCornerRadius;
	CGPoint mTailPosition;
	double mTailSize;
	BOOL mTailAtCenter;

}
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(CGPathRef)createBezierPath;
-(CGPoint)tailCenter;
-(CGPoint)tailPosition;
-(double)tailSize;
-(BOOL)tailAtCenter;
-(CGSize)size;
-(double)cornerRadius;
@end

