/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMessageContentDisplayDelegate <NSObject>
@optional
-(void)endedDraggingMessageView;
-(UIEdgeInsets*)originalInsetsForMessageView;

@required
-(void)showCardForRecipientAtom:(id)arg1;
-(void)showCardForSenderAtom:(id)arg1;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end
