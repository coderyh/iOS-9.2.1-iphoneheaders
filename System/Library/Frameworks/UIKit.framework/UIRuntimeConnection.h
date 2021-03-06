/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface UIRuntimeConnection : NSObject <NSCoding> {

	id _source;
	id _destination;
	NSString* _label;

}

@property (nonatomic,retain) id source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) id destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)connectForSimulator;
-(void)connect;
-(id)source;
-(void)setSource:(id)arg1 ;
-(id)destination;
-(void)setDestination:(id)arg1 ;
@end

