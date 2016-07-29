/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface HLPHelpTopicHistoryItem : NSObject <NSCopying, NSCoding> {

	NSString* _identifier;
	CGPoint _contentOffset;
	CGSize _contentSize;

}

@property (assign,nonatomic) CGPoint contentOffset;              //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                 //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPoint)contentOffset;
-(CGSize)contentSize;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
@end
