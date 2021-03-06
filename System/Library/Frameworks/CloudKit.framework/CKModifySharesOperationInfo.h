/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKModifySharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _sharesToSave;
	NSArray* _shareIDsToDelete;

}

@property (nonatomic,retain) NSArray * sharesToSave;                  //@synthesize sharesToSave=_sharesToSave - In the implementation block
@property (nonatomic,retain) NSArray * shareIDsToDelete;              //@synthesize shareIDsToDelete=_shareIDsToDelete - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSharesToSave:(NSArray *)arg1 ;
-(void)setShareIDsToDelete:(NSArray *)arg1 ;
-(NSArray *)sharesToSave;
-(NSArray *)shareIDsToDelete;
@end

