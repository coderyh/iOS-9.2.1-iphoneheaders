/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SXMosaicGalleryCluster : NSObject {

	NSArray* _items;

}

@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
-(BOOL)isClusterOfType:(int)arg1 ;
-(BOOL)clusterIsEqualToTileTypes:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
@end

