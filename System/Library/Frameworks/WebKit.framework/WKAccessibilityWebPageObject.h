/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKAccessibilityWebPageObjectBase.h>

@class NSData;

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase {

	NSData* _remoteTokenData;

}

@property (nonatomic,retain) NSData * remoteTokenData;              //@synthesize remoteTokenData=_remoteTokenData - In the implementation block
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setRemoteTokenData:(NSData *)arg1 ;
-(void)_accessibilityCategoryInstalled:(id)arg1 ;
-(NSData *)remoteTokenData;
-(double)pageScale;
@end
