/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLImageTable;

@interface PLImageTableSegment : NSObject {

	PLImageTable* _imageTable;
	unsigned long long _index;
	void* _ptr;
	unsigned long long _length;
	BOOL _dying;

}
-(void)dealloc;
-(oneway void)release;
-(void*)bytes;
-(id)initWithImageTable:(id)arg1 index:(unsigned long long)arg2 length:(unsigned long long)arg3 idealAddress:(void*)arg4 ;
-(id)initWithImageTable:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3 ;
@end

