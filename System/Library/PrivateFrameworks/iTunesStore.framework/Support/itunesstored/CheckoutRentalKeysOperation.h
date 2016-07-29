/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, NSArray, SSURLConnectionResponse;

@interface CheckoutRentalKeysOperation : ISOperation {

	NSNumber* _accountIdentifier;
	BOOL _backgroundCheckout;
	NSString* _clientIdentifierHeader;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;
	SSURLConnectionResponse* _urlResponse;
	NSString* _userAgent;
	BOOL _shouldValidateRentalInfo;

}

@property (readonly) NSArray * sinfs; 
@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
@property (getter=isBackgroundCheckout) BOOL backgroundCheckout;              //@synthesize backgroundCheckout=_backgroundCheckout - In the implementation block
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSString * userAgent; 
@property (assign,nonatomic) BOOL shouldValidateRentalInfo;                   //@synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo - In the implementation block
@property (readonly) SSURLConnectionResponse * URLResponse; 
-(id)_primarySINF;
-(id)_copyAccountIdentifier;
-(id)_copyRentalIdentifier;
-(void)_showErrorDialogForOutput:(id)arg1 ;
-(BOOL)isBackgroundCheckout;
-(BOOL)_performCheckout:(id*)arg1 ;
-(BOOL)_haveValidRentalInformation;
-(id)initWithStoreDownloadSinfs:(id)arg1 ;
-(void)setBackgroundCheckout:(BOOL)arg1 ;
-(id)initWithSinfs:(id)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(BOOL)shouldValidateRentalInfo;
-(void)setShouldValidateRentalInfo:(BOOL)arg1 ;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_run;
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(BOOL)_handleResponse:(id)arg1 error:(id*)arg2 ;
-(SSURLConnectionResponse *)URLResponse;
-(NSNumber *)accountIdentifier;
-(id)_bodyData;
-(NSArray *)sinfs;
@end
