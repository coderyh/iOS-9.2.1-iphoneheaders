/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPUserPrivacySettings : PBCodable <NSCopying> {

	BOOL _discoverable;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasDiscoverable; 
@property (assign,nonatomic) BOOL discoverable;                 //@synthesize discoverable=_discoverable - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)discoverable;
-(void)setDiscoverable:(BOOL)arg1 ;
-(BOOL)hasDiscoverable;
-(void)setHasDiscoverable:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
