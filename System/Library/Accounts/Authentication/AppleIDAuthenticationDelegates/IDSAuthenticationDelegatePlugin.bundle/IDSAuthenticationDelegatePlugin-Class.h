/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Accounts/Authentication/AppleIDAuthenticationDelegates/IDSAuthenticationDelegatePlugin.bundle/IDSAuthenticationDelegatePlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountAuthenticationDelegate/AAAuthenticationDelegateProtocol.h>

@interface IDSAuthenticationDelegatePlugin : NSObject <AAAuthenticationDelegateProtocol>
-(void)_storeAccountForServiceType:(id)arg1 accountStore:(id)arg2 parameters:(id)arg3 group:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)didReceiveAuthenticationResponseParameters:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
