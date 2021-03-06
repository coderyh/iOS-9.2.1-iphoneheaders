/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoBackup.framework/NanoBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface NBManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _externalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;              //@synthesize externalQueue=_externalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(void)dealloc;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(id)connection;
-(void)unsafe_invalidate;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)listBackupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createBackupForPairingID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)restoreFromBackup:(id)arg1 forPairingID:(id)arg2 pairingDataStore:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)restoreFromBackup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteBackup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)restoreFromPairingID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

