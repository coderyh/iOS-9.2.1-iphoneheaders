/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSServiceDelegate, OS_dispatch_queue;
@class NSObject;

@interface BLTTestIDSServiceDelegate : NSObject {

	id<IDSServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) id<IDSServiceDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setDelegate:(id<IDSServiceDelegate>)arg1 ;
-(id<IDSServiceDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

