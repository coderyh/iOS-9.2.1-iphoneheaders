/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CKRecord;

@interface CKRecordGraphNode : NSObject {

	NSMutableSet* _edges;
	long long _indegree;
	CKRecord* _record;

}

@property (nonatomic,copy) NSMutableSet * edges;              //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) long long indegree;              //@synthesize indegree=_indegree - In the implementation block
@property (nonatomic,retain) CKRecord * record;               //@synthesize record=_record - In the implementation block
-(id)init;
-(id)description;
-(void)setEdges:(NSMutableSet *)arg1 ;
-(NSMutableSet *)edges;
-(long long)indegree;
-(void)setIndegree:(long long)arg1 ;
-(CKRecord *)record;
-(id)CKPropertiesDescription;
-(void)setRecord:(CKRecord *)arg1 ;
@end

