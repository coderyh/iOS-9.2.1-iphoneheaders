/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyRPC/TelephonyRPC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NanoPhoneVoicemailBody : PBCodable <NSCopying> {

	long long _voicemailNumber;
	NSData* _voicemailRecording;

}

@property (assign,nonatomic) long long voicemailNumber;                 //@synthesize voicemailNumber=_voicemailNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasVoicemailRecording; 
@property (nonatomic,retain) NSData * voicemailRecording;               //@synthesize voicemailRecording=_voicemailRecording - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)voicemailNumber;
-(void)setVoicemailNumber:(long long)arg1 ;
-(void)setVoicemailRecording:(NSData *)arg1 ;
-(BOOL)hasVoicemailRecording;
-(NSData *)voicemailRecording;
@end

