/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@protocol MFAttachmentHandlingDelegate;
@interface MessageSaveAllAttachmentsActivity : UIActivity {

	int _context;
	id<MFAttachmentHandlingDelegate> _attachmentHandlingDelegate;

}

@property (assign,nonatomic) id<MFAttachmentHandlingDelegate> attachmentHandlingDelegate;              //@synthesize attachmentHandlingDelegate=_attachmentHandlingDelegate - In the implementation block
@property (assign,nonatomic) int context;                                                              //@synthesize context=_context - In the implementation block
-(id<MFAttachmentHandlingDelegate>)attachmentHandlingDelegate;
-(void)setAttachmentHandlingDelegate:(id<MFAttachmentHandlingDelegate>)arg1 ;
-(id)initWithAttachmentHandlingDelegate:(id)arg1 context:(int)arg2 ;
-(id)activityType;
-(int)context;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)setContext:(int)arg1 ;
-(id)activityImage;
-(id)_beforeActivity;
@end
