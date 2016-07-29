/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDFlyover : PBCodable <NSCopying> {

	SCD_Struct_GE193* _cameraPaths;
	unsigned long long _cameraPathsCount;
	unsigned long long _cameraPathsSpace;
	SCD_Struct_GE194* _labelFrames;
	unsigned long long _labelFramesCount;
	unsigned long long _labelFramesSpace;
	NSMutableArray* _labels;
	NSMutableArray* _notificationMessages;
	BOOL _useSplines;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) unsigned long long cameraPathsCount; 
@property (nonatomic,readonly) SCD_Struct_GE193* cameraPaths; 
@property (assign,nonatomic) BOOL hasUseSplines; 
@property (assign,nonatomic) BOOL useSplines;                                    //@synthesize useSplines=_useSplines - In the implementation block
@property (nonatomic,readonly) unsigned long long labelFramesCount; 
@property (nonatomic,readonly) SCD_Struct_GE194* labelFrames; 
@property (nonatomic,retain) NSMutableArray * labels;                            //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationMessages;              //@synthesize notificationMessages=_notificationMessages - In the implementation block
+(id)flyoverForPlaceData:(id)arg1 ;
-(id)bestLocalizedLabelAtIndex:(unsigned long long)arg1 ;
-(id)bestLocalizedAnnouncementMessage;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)labelsCount;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(void)clearLabels;
-(void)addLabel:(id)arg1 ;
-(unsigned long long)notificationMessagesCount;
-(void)setCameraPaths:(SCD_Struct_GE193*)arg1 count:(unsigned long long)arg2 ;
-(id)notificationMessageAtIndex:(unsigned long long)arg1 ;
-(void)addNotificationMessage:(id)arg1 ;
-(unsigned long long)labelFramesCount;
-(void)setLabelFrames:(SCD_Struct_GE194*)arg1 count:(unsigned long long)arg2 ;
-(void)addLabelFrame:(SCD_Struct_GE194)arg1 ;
-(SCD_Struct_GE193*)cameraPaths;
-(void)clearCameraPaths;
-(SCD_Struct_GE194*)labelFrames;
-(void)clearNotificationMessages;
-(void)addCameraPath:(SCD_Struct_GE193)arg1 ;
-(void)setUseSplines:(BOOL)arg1 ;
-(BOOL)useSplines;
-(SCD_Struct_GE194)labelFrameAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasUseSplines;
-(void)setNotificationMessages:(NSMutableArray *)arg1 ;
-(SCD_Struct_GE193)cameraPathAtIndex:(unsigned long long)arg1 ;
-(void)setHasUseSplines:(BOOL)arg1 ;
-(unsigned long long)cameraPathsCount;
-(void)clearLabelFrames;
-(NSMutableArray *)notificationMessages;
-(NSMutableArray *)labels;
-(BOOL)readFrom:(id)arg1 ;
@end
