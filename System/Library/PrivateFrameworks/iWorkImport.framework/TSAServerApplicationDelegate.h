/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSABaseApplicationDelegate;

@interface TSAServerApplicationDelegate : NSObject {

	TSABaseApplicationDelegate* _baseApplicationDelegate;

}

@property (nonatomic,retain) TSABaseApplicationDelegate * baseApplicationDelegate;              //@synthesize baseApplicationDelegate=_baseApplicationDelegate - In the implementation block
+(id)sharedDelegate;
-(void)setBaseApplicationDelegate:(TSABaseApplicationDelegate *)arg1 ;
-(id)initWithBaseApplicationDelegate:(id)arg1 ;
-(TSABaseApplicationDelegate *)baseApplicationDelegate;
-(id)init;
@end

