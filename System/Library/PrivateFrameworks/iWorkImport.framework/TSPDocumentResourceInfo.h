/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSPDocumentResourceInfo : NSObject {

	BOOL _isDownloadable;
	NSString* _digestString;
	NSString* _locator;
	NSString* _extension;
	long long _fileSize;

}

@property (nonatomic,readonly) NSString * digestString;              //@synthesize digestString=_digestString - In the implementation block
@property (nonatomic,readonly) NSString * locator;                   //@synthesize locator=_locator - In the implementation block
@property (nonatomic,readonly) NSString * extension;                 //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) long long fileSize;                   //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) BOOL isDownloadable;                  //@synthesize isDownloadable=_isDownloadable - In the implementation block
-(NSString *)locator;
-(NSString *)digestString;
-(id)initWithDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3 fileSize:(long long)arg4 isDownloadable:(BOOL)arg5 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)extension;
-(BOOL)isDownloadable;
-(long long)fileSize;
@end
