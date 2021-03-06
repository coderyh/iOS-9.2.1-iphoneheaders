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

@class NSMutableArray, NSString;

@interface GEOPDEntity : PBCodable <NSCopying> {

	NSMutableArray* _altFaxs;
	NSMutableArray* _altTelephones;
	NSMutableArray* _altUrls;
	NSString* _fax;
	NSMutableArray* _localizedCategorys;
	NSMutableArray* _names;
	NSMutableArray* _spokenNames;
	NSString* _telephone;
	int _type;
	NSString* _url;
	BOOL _isDisputed;
	BOOL _isPermanentlyClosed;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasTelephone; 
@property (nonatomic,retain) NSString * telephone;                             //@synthesize telephone=_telephone - In the implementation block
@property (nonatomic,retain) NSMutableArray * altTelephones;                   //@synthesize altTelephones=_altTelephones - In the implementation block
@property (nonatomic,readonly) BOOL hasFax; 
@property (nonatomic,retain) NSString * fax;                                   //@synthesize fax=_fax - In the implementation block
@property (nonatomic,retain) NSMutableArray * altFaxs;                         //@synthesize altFaxs=_altFaxs - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSMutableArray * altUrls;                         //@synthesize altUrls=_altUrls - In the implementation block
@property (assign,nonatomic) BOOL hasIsPermanentlyClosed; 
@property (assign,nonatomic) BOOL isPermanentlyClosed;                         //@synthesize isPermanentlyClosed=_isPermanentlyClosed - In the implementation block
@property (assign,nonatomic) BOOL hasIsDisputed; 
@property (assign,nonatomic) BOOL isDisputed;                                  //@synthesize isDisputed=_isDisputed - In the implementation block
@property (nonatomic,retain) NSMutableArray * names;                           //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenNames;                     //@synthesize spokenNames=_spokenNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedCategorys;              //@synthesize localizedCategorys=_localizedCategorys - In the implementation block
+(id)entityForPlaceData:(id)arg1 ;
-(id)bestLocalizedName;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)url;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(NSString *)telephone;
-(void)setTelephone:(NSString *)arg1 ;
-(BOOL)hasTelephone;
-(void)setHasIsDisputed:(BOOL)arg1 ;
-(BOOL)hasIsDisputed;
-(BOOL)isDisputed;
-(void)setIsDisputed:(BOOL)arg1 ;
-(BOOL)hasUrl;
-(void)setAltTelephones:(NSMutableArray *)arg1 ;
-(void)setAltUrls:(NSMutableArray *)arg1 ;
-(BOOL)isPermanentlyClosed;
-(void)addLocalizedCategory:(id)arg1 ;
-(unsigned long long)localizedCategorysCount;
-(id)localizedCategoryAtIndex:(unsigned long long)arg1 ;
-(void)setFax:(NSString *)arg1 ;
-(void)clearAltTelephones;
-(NSMutableArray *)altFaxs;
-(BOOL)hasIsPermanentlyClosed;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)setHasIsPermanentlyClosed:(BOOL)arg1 ;
-(void)clearLocalizedCategorys;
-(void)addAltTelephone:(id)arg1 ;
-(void)setIsPermanentlyClosed:(BOOL)arg1 ;
-(NSMutableArray *)altUrls;
-(id)altTelephoneAtIndex:(unsigned long long)arg1 ;
-(void)clearAltUrls;
-(unsigned long long)altFaxsCount;
-(void)setAltFaxs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)altTelephones;
-(void)setSpokenNames:(NSMutableArray *)arg1 ;
-(void)addName:(id)arg1 ;
-(void)clearNames;
-(NSString *)fax;
-(void)addSpokenName:(id)arg1 ;
-(void)addAltFax:(id)arg1 ;
-(void)clearAltFaxs;
-(unsigned long long)spokenNamesCount;
-(id)spokenNameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)localizedCategorys;
-(unsigned long long)altUrlsCount;
-(id)nameAtIndex:(unsigned long long)arg1 ;
-(void)setLocalizedCategorys:(NSMutableArray *)arg1 ;
-(unsigned long long)namesCount;
-(NSMutableArray *)spokenNames;
-(BOOL)hasFax;
-(void)addAltUrl:(id)arg1 ;
-(void)clearSpokenNames;
-(id)altFaxAtIndex:(unsigned long long)arg1 ;
-(id)altUrlAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)altTelephonesCount;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)names;
-(BOOL)hasType;
@end

