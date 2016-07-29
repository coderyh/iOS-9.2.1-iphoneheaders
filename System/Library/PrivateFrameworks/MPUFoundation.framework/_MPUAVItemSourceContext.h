/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPAVItemPlaylistIdentifier.h>

@protocol MPAVItemQueueIdentifier;
@class MPQueueFeeder, NSString;

@interface _MPUAVItemSourceContext : NSObject <MPAVItemPlaylistIdentifier> {

	id<MPAVItemQueueIdentifier> _itemIdentifier;
	MPQueueFeeder* _queueFeeder;
	long long _playlistIteration;
	unsigned long long _originalIterationIndex;

}

@property (nonatomic,retain) id<MPAVItemQueueIdentifier> itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) MPQueueFeeder * queueFeeder;                             //@synthesize queueFeeder=_queueFeeder - In the implementation block
@property (assign,nonatomic) long long playlistIteration;                             //@synthesize playlistIteration=_playlistIteration - In the implementation block
@property (assign,nonatomic) unsigned long long originalIterationIndex;               //@synthesize originalIterationIndex=_originalIterationIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQueueFeeder:(MPQueueFeeder *)arg1 ;
-(id<MPAVItemQueueIdentifier>)itemIdentifier;
-(void)setItemIdentifier:(id<MPAVItemQueueIdentifier>)arg1 ;
-(long long)playlistIteration;
-(void)setPlaylistIteration:(long long)arg1 ;
-(void)setOriginalIterationIndex:(unsigned long long)arg1 ;
-(unsigned long long)originalIterationIndex;
-(MPQueueFeeder *)queueFeeder;
@end
