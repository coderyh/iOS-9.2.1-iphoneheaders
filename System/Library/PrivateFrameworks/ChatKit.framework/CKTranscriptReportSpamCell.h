/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptLabelCell.h>

@class UIButton, NSAttributedString;

@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell {

	UIButton* _reportSpamButton;

}

@property (nonatomic,copy) NSAttributedString * attributedButtonText; 
@property (nonatomic,retain) UIButton * reportSpamButton;                          //@synthesize reportSpamButton=_reportSpamButton - In the implementation block
+(id)reportSpamButton;
-(void)configureForChatItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviewsForAlignmentContents;
-(UIButton *)reportSpamButton;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(void)setReportSpamButton:(UIButton *)arg1 ;
-(NSAttributedString *)attributedButtonText;
@end

