/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUIAceObjectViewController.h>

@class SiriServerUtteranceView, NSString;

@interface SiriServerUtteranceController : SiriUIAceObjectViewController {

	SiriServerUtteranceView* _utteranceView;
	NSString* _utterance;

}
-(void)_loadFromObject:(id)arg1 ;
-(id)description;
-(void)loadView;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)setAceObject:(id)arg1 ;
-(long long)_pinAnimationType;
-(long long)_insertionAnimation;
-(long long)_replacementAnimation;
-(double)_insertionAnimatedZPosition;
@end
