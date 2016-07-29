/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPAddMediaEntityToWishList.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface MPAssistantAddMediaEntityToWishList : SAMPAddMediaEntityToWishList <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_addTrackToWishListWithStoreID:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addRadioTrackToWishListWithStoreID:(unsigned long long)arg1 stationHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchCurrentRadioTrackInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end
