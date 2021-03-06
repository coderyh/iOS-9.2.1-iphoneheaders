/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoSignDataResponse : PBCodable <NSCopying> {

	NSData* _signedData;
	BOOL _pending;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                      //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasSignedData; 
@property (nonatomic,retain) NSData * signedData;               //@synthesize signedData=_signedData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(NSData *)signedData;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(BOOL)pending;
-(void)setSignedData:(NSData *)arg1 ;
-(BOOL)hasSignedData;
-(BOOL)readFrom:(id)arg1 ;
@end

