/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UILabel.h>

@interface MKAttributionLabel : UILabel {

	unsigned long long _mapType;
	BOOL _useDarkText;

}

@property (assign,nonatomic) unsigned long long mapType;              //@synthesize mapType=_mapType - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1 ;
-(id)_attributesWithStroke:(BOOL)arg1 ;
-(void)_prepareLabel;
@end

