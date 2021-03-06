/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CloudLibraryConnection, NSURL;

@interface SagaSubscribedPlaylistUpdater : NSObject {

	BOOL _ignoreMinRefreshInterval;
	NSArray* _playlistCloudIDs;
	CloudLibraryConnection* _connection;
	long long _requestReason;
	NSURL* _payloadDownloadPathOverride;

}

@property (nonatomic,copy,readonly) NSArray * playlistCloudIDs;                  //@synthesize playlistCloudIDs=_playlistCloudIDs - In the implementation block
@property (nonatomic,readonly) CloudLibraryConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) long long requestReason;                            //@synthesize requestReason=_requestReason - In the implementation block
@property (assign,nonatomic) BOOL ignoreMinRefreshInterval;                      //@synthesize ignoreMinRefreshInterval=_ignoreMinRefreshInterval - In the implementation block
@property (nonatomic,copy) NSURL * payloadDownloadPathOverride;                  //@synthesize payloadDownloadPathOverride=_payloadDownloadPathOverride - In the implementation block
-(BOOL)ignoreMinRefreshInterval;
-(NSURL *)payloadDownloadPathOverride;
-(id)initWithSubscribedPlaylistCloudIDs:(id)arg1 cloudLibraryConnection:(id)arg2 ;
-(BOOL)performUpdateWithError:(id*)arg1 ;
-(NSArray *)playlistCloudIDs;
-(void)setIgnoreMinRefreshInterval:(BOOL)arg1 ;
-(void)setPayloadDownloadPathOverride:(NSURL *)arg1 ;
-(CloudLibraryConnection *)connection;
-(long long)requestReason;
-(void)setRequestReason:(long long)arg1 ;
@end

