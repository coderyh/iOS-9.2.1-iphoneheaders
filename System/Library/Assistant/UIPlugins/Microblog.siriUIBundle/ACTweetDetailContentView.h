/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <UIKit/UIView.h>

@class UITextView, UILabel;

@interface ACTweetDetailContentView : UIView {

	UITextView* _contentTextView;
	UILabel* _creationDateLabel;

}
+(id)_tweetLabelEmphasisedAttributes;
+(void)_enumerateMatchingRangesForString:(id)arg1 inString:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(id)_contentTextForPost:(id)arg1 ;
+(id)_tweetLabelHyperlinkAttributes;
-(id)initWithFrame:(CGRect)arg1 tweet:(id)arg2 ;
-(CGSize)_calculateSizeForWidth:(double)arg1 setFrames:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
