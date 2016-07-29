/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPClientCapabilities : PBCodable <NSCopying> {

	BOOL _hasFeatureHandle;
	BOOL _hasNoOptInRequest;
	BOOL _hasUnconstrainedProblemStatusSize;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasHasUnconstrainedProblemStatusSize; 
@property (assign,nonatomic) BOOL hasUnconstrainedProblemStatusSize;                 //@synthesize hasUnconstrainedProblemStatusSize=_hasUnconstrainedProblemStatusSize - In the implementation block
@property (assign,nonatomic) BOOL hasHasNoOptInRequest; 
@property (assign,nonatomic) BOOL hasNoOptInRequest;                                 //@synthesize hasNoOptInRequest=_hasNoOptInRequest - In the implementation block
@property (assign,nonatomic) BOOL hasHasFeatureHandle; 
@property (assign,nonatomic) BOOL hasFeatureHandle;                                  //@synthesize hasFeatureHandle=_hasFeatureHandle - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasHasNoOptInRequest;
-(BOOL)hasNoOptInRequest;
-(void)setHasNoOptInRequest:(BOOL)arg1 ;
-(BOOL)hasHasFeatureHandle;
-(void)setHasHasFeatureHandle:(BOOL)arg1 ;
-(BOOL)hasUnconstrainedProblemStatusSize;
-(BOOL)hasHasUnconstrainedProblemStatusSize;
-(void)setHasHasUnconstrainedProblemStatusSize:(BOOL)arg1 ;
-(void)setHasUnconstrainedProblemStatusSize:(BOOL)arg1 ;
-(BOOL)hasFeatureHandle;
-(void)setHasFeatureHandle:(BOOL)arg1 ;
-(void)setHasHasNoOptInRequest:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
