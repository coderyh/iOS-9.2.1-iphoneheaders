/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFSearchResultHandler
@optional
-(void)handleMessage:(id)arg1;
-(void)setResultSummary:(char*)arg1;
-(id)filter;

@required
-(void)beginResult:(unsigned)arg1;
-(void)setResultSubject:(char*)arg1;
-(void)setResultSender:(char*)arg1;
-(void)setResultDateRecieved:(double)arg1;
-(void)setResultUnread:(BOOL)arg1;
-(void)endResult;

@end

