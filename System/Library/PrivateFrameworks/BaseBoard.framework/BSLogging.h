/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSLogging <NSObject>
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@required
-(void)logWithFormat:(id)arg1;
-(void)logWithFormat:(id)arg1 arguments:(char*)arg2;
-(BOOL)isEnabled;

@end
