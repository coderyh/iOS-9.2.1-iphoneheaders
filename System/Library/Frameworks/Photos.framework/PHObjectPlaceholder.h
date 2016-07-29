/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSString;

@interface PHObjectPlaceholder : PHObject {

	NSString* _localIdentifier;
	long long _assetMediaType;

}

@property (assign) long long assetMediaType;              //@synthesize assetMediaType=_assetMediaType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithLocalIdentifier:(id)arg1 ;
-(void)setAssetMediaType:(long long)arg1 ;
-(long long)assetMediaType;
-(id)localIdentifier;
@end
