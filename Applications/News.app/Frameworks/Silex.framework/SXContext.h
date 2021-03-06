/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXResourceDataSource, SXInteractivityManagerProtocol, SXTextComponentLayoutHosting;
@class SXDocumentController, SXAdController;

@interface SXContext : NSObject {

	SXDocumentController* _documentController;
	SXAdController* _adController;
	id<SXResourceDataSource> _resourceDataSource;
	id<SXInteractivityManagerProtocol> _interactivityManager;
	id<SXTextComponentLayoutHosting> _textComponentLayoutHost;

}

@property (nonatomic,readonly) SXDocumentController * documentController;                                  //@synthesize documentController=_documentController - In the implementation block
@property (nonatomic,readonly) SXAdController * adController;                                              //@synthesize adController=_adController - In the implementation block
@property (nonatomic,__weak,readonly) id<SXResourceDataSource> resourceDataSource;                         //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SXInteractivityManagerProtocol> interactivityManager;               //@synthesize interactivityManager=_interactivityManager - In the implementation block
@property (assign,nonatomic,__weak) id<SXTextComponentLayoutHosting> textComponentLayoutHost;              //@synthesize textComponentLayoutHost=_textComponentLayoutHost - In the implementation block
+(void)prewarm;
-(SXDocumentController *)documentController;
-(void)setInteractivityManager:(id<SXInteractivityManagerProtocol>)arg1 ;
-(void)setTextComponentLayoutHost:(id<SXTextComponentLayoutHosting>)arg1 ;
-(SXAdController *)adController;
-(id<SXResourceDataSource>)resourceDataSource;
-(id)initWithJSONData:(id)arg1 resourceDataSource:(id)arg2 error:(id*)arg3 ;
-(id<SXInteractivityManagerProtocol>)interactivityManager;
-(id<SXTextComponentLayoutHosting>)textComponentLayoutHost;
@end

