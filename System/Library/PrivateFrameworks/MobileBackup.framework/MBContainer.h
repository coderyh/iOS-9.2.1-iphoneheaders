/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSDate;

@interface MBContainer : NSObject <NSCopying> {

	NSMutableDictionary* _plist;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) int containerType; 
@property (nonatomic,readonly) NSString * containerTypeString; 
@property (nonatomic,retain) NSString * containerDir; 
@property (nonatomic,readonly) NSString * safeHarborDir; 
@property (nonatomic,retain) NSDate * datePlacedInSafeHarbor; 
@property (getter=isSafeHarbor,nonatomic,readonly) BOOL safeHarbor; 
+(id)containerWithPropertyList:(id)arg1 ;
+(id)containerWithDomainName:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)domain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)propertyListForBackupProperties;
-(BOOL)isSafeHarbor;
-(NSDate *)datePlacedInSafeHarbor;
-(NSString *)safeHarborDir;
-(NSString *)containerTypeString;
-(void)setContainerDir:(NSString *)arg1 ;
-(void)setDatePlacedInSafeHarbor:(NSDate *)arg1 ;
-(id)propertyListForSafeHarborInfo;
-(NSString *)containerDir;
-(id)initWithPropertyList:(id)arg1 ;
-(int)containerType;
@end

