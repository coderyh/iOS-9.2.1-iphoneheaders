/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CSLHexAppNode;


@protocol CSLUIHexIconView <NSObject>
@property (assign,setter=setJiggling:,nonatomic) BOOL isJiggling; 
@property (nonatomic,retain) CSLHexAppNode * node; 
@required
-(void)dragToPoint:(CGPoint)arg1;
-(BOOL)isJiggling;
-(void)beginDraggingAtPoint:(CGPoint)arg1;
-(void)endDraggingToLayoutAttributes:(SCD_Struct_CS1)arg1;
-(void)setJiggling:(BOOL)arg1;
-(CSLHexAppNode *)node;
-(void)applyLayoutAttributes:(SCD_Struct_CS1)arg1;
-(void)setNode:(id)arg1;

@end

