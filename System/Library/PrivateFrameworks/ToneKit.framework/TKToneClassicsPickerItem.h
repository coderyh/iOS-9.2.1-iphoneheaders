/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/TKTonePickerItem.h>

@class TKTonePickerItem;

@interface TKToneClassicsPickerItem : TKTonePickerItem {

	long long _classicToneIndex;

}

@property (nonatomic,readonly) TKTonePickerItem * parentItem; 
@property (assign,nonatomic) long long classicToneIndex;                   //@synthesize classicToneIndex=_classicToneIndex - In the implementation block
-(TKTonePickerItem *)parentItem;
-(void)_setClassicToneIndex:(long long)arg1 ;
-(id)childItemAtIndex:(long long)arg1 ;
-(long long)classicToneIndex;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
@end

