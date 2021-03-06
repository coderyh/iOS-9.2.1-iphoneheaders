/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordID, CKDPCSData;

@interface CKDRecordPCSData : CKDPCSData {

	CKRecordID* _recordID;
	CKDPCSData* _zonePCSData;
	CKDPCSData* _sharePCSData;

}

@property (nonatomic,retain) CKRecordID * recordID;                  //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) CKDPCSData * zonePCSData;               //@synthesize zonePCSData=_zonePCSData - In the implementation block
@property (nonatomic,retain) CKDPCSData * sharePCSData;              //@synthesize sharePCSData=_sharePCSData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataWithRecordID:(id)arg1 pcsData:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)itemID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)recordID;
-(void)setZonePCSData:(CKDPCSData *)arg1 ;
-(void)setSharePCSData:(CKDPCSData *)arg1 ;
-(CKDPCSData *)zonePCSData;
-(CKDPCSData *)sharePCSData;
-(BOOL)decryptPCSDataWithManager:(id)arg1 error:(id*)arg2 ;
-(id)initWithRecordID:(id)arg1 pcsData:(id)arg2 ;
@end

