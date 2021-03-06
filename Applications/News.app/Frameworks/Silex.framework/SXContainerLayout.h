/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDContainerLayout.h>
#import <TSReading/TSDWrappable.h>

@class TSDWrapPolygon, TSDBezierPath, NSMutableArray, NSString;

@interface SXContainerLayout : TSDContainerLayout <TSDWrappable> {

	TSDWrapPolygon* mCachedWrapPolygon;
	TSDBezierPath* mCachedWrapPath;
	TSDBezierPath* mCachedExternalWrapPath;
	NSMutableArray* _oldchildLayouts;

}

@property (nonatomic,retain) NSMutableArray * oldchildLayouts;              //@synthesize oldchildLayouts=_oldchildLayouts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasAlpha; 
-(id)additionalLayouts;
-(id)childrenForLayout;
-(void)childLayoutCreated:(id)arg1 ;
-(id)i_exteriorTextWrap;
-(CGRect)boundsInRoot;
-(int)wrapDirection;
-(int)wrapFitType;
-(NSMutableArray *)oldchildLayouts;
-(void)setOldchildLayouts:(NSMutableArray *)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(BOOL)isHTMLWrap;
-(id)i_wrapPath;
-(void)updateChildrenFromInfo;
-(void)parentDidChange;
-(void)dragBy:(CGPoint)arg1 ;
-(void)invalidateExteriorWrap;
-(id)i_externalWrapPath;
-(BOOL)allowsConnections;
-(BOOL)supportsInspectorPositioning;
-(id)i_computeWrapPathClosed:(BOOL)arg1 ;
-(id)i_computeWrapPath;
-(CGRect)boundsInfluencingExteriorWrap;
-(void)invalidateParentForWrap;
-(void)i_invalidateWrap;
-(id)wrapPolygon;
-(void)dealloc;
-(void)invalidate;
-(void)setGeometry:(id)arg1 ;
-(BOOL)hasAlpha;
-(int)wrapType;
@end

