/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDAutocompleteEntryHighlightLine : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _line;
	NSMutableArray* _spans;

}

@property (nonatomic,readonly) BOOL hasLine; 
@property (nonatomic,retain) NSString * line;                                //@synthesize line=_line - In the implementation block
@property (nonatomic,retain) NSMutableArray * spans;                         //@synthesize spans=_spans - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)line;
-(void)setLine:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addSpan:(id)arg1 ;
-(id)spanAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)spans;
-(BOOL)hasLine;
-(void)setSpans:(NSMutableArray *)arg1 ;
-(unsigned long long)spansCount;
-(void)clearSpans;
-(BOOL)readFrom:(id)arg1 ;
@end
