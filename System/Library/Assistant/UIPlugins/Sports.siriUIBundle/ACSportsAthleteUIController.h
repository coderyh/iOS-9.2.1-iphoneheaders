/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsUIController.h>

@class SAUISnippet;

@interface ACSportsAthleteUIController : ACSportsUIController {

	SAUISnippet* _snippet;

}
+(id)listViewWithSnippet:(id)arg1 frame:(CGRect)arg2 ;
-(id)snippet;
-(void)setSnippet:(id)arg1 ;
-(id)initWithSnippet:(id)arg1 ;
-(void)configureReusableHeaderView:(id)arg1 ;
-(Class)headerViewClass;
@end

