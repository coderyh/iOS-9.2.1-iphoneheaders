/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class OADColor;

@interface PDAnimateColorBehavior : PDAnimateBehavior {

	BOOL mHasBy;
	double mBy[3];
	BOOL mHasFrom;
	OADColor* mFrom;
	BOOL mHasTo;
	OADColor* mTo;
	BOOL mHasColorSpace;
	int mColorSpace;
	BOOL mHasColorDirection;
	int mDirection;

}
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(id)from;
-(id)to;
-(void)setFrom:(id)arg1 ;
-(void)setTo:(id)arg1 ;
-(double*)by;
-(void)setBy:(double)arg1 ;
-(BOOL)hasTo;
-(BOOL)hasFrom;
-(BOOL)hasBy;
-(BOOL)hasColorSpace;
-(int)colorSpace;
-(void)setColorSpace:(int)arg1 ;
-(BOOL)hasColorDirection;
@end

