/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSNumber, NSDictionary;

@interface SoftwareProperties : NSObject <NSCopying> {

	NSData* _appReceiptData;
	NSData* _artworkData;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _installType;
	BOOL _isFromStore;
	NSDictionary* _iTunesMetadata;
	NSData* _newsstandArtworkData;
	NSString* _packagePath;
	NSData* _sinfData;
	NSData* _transitMapData;
	long long _downloadIdentifier;
	NSString* _scratchDirectory;

}

@property (nonatomic,copy) NSData * appReceiptData;                     //@synthesize appReceiptData=_appReceiptData - In the implementation block
@property (nonatomic,copy) NSData * artworkData;                        //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                    //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic) long long downloadIdentifier;              //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * installType;                      //@synthesize installType=_installType - In the implementation block
@property (nonatomic,copy) NSDictionary * ITunesMetadata;               //@synthesize iTunesMetadata=_iTunesMetadata - In the implementation block
@property (assign,nonatomic) BOOL isFromStore;                          //@synthesize isFromStore=_isFromStore - In the implementation block
@property (nonatomic,copy) NSData * newsstandArtworkData;               //@synthesize newsstandArtworkData=_newsstandArtworkData - In the implementation block
@property (nonatomic,copy) NSString * packagePath;                      //@synthesize packagePath=_packagePath - In the implementation block
@property (nonatomic,copy) NSString * scratchDirectory;                 //@synthesize scratchDirectory=_scratchDirectory - In the implementation block
@property (nonatomic,copy) NSData * sinfData;                           //@synthesize sinfData=_sinfData - In the implementation block
@property (nonatomic,copy) NSData * transitMapData;                     //@synthesize transitMapData=_transitMapData - In the implementation block
-(NSData *)sinfData;
-(NSData *)newsstandArtworkData;
-(NSData *)transitMapData;
-(NSDictionary *)ITunesMetadata;
-(void)setAppReceiptData:(NSData *)arg1 ;
-(void)setInstallType:(NSNumber *)arg1 ;
-(BOOL)isFromStore;
-(void)setIsFromStore:(BOOL)arg1 ;
-(void)setITunesMetadata:(NSDictionary *)arg1 ;
-(void)setNewsstandArtworkData:(NSData *)arg1 ;
-(void)setSinfData:(NSData *)arg1 ;
-(void)setTransitMapData:(NSData *)arg1 ;
-(NSString *)scratchDirectory;
-(void)setScratchDirectory:(NSString *)arg1 ;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(NSData *)appReceiptData;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
-(NSString *)packagePath;
-(void)setPackagePath:(NSString *)arg1 ;
-(long long)downloadIdentifier;
-(NSNumber *)installType;
@end

