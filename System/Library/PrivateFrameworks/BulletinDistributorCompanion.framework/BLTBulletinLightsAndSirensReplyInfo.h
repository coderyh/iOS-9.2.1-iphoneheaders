/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BLTBulletinLightsAndSirensReplyInfo : NSObject {

	BOOL _handledLightsAndSirens;
	BOOL _didPlayLightsAndSirens;
	/*^block*/id _reply;

}

@property (nonatomic,copy) id reply;                                   //@synthesize reply=_reply - In the implementation block
@property (assign,nonatomic) BOOL handledLightsAndSirens;              //@synthesize handledLightsAndSirens=_handledLightsAndSirens - In the implementation block
@property (assign,nonatomic) BOOL didPlayLightsAndSirens;              //@synthesize didPlayLightsAndSirens=_didPlayLightsAndSirens - In the implementation block
-(void)setReply:(id)arg1 ;
-(id)reply;
-(BOOL)didPlayLightsAndSirens;
-(void)setDidPlayLightsAndSirens:(BOOL)arg1 ;
-(BOOL)handledLightsAndSirens;
-(void)setHandledLightsAndSirens:(BOOL)arg1 ;
@end

