/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class NSMutableString, NSData;

@interface CPArchive : NSObject <CPDisposable> {

	CFArrayRef selections;
	CFArrayRef imageNodes;
	NSMutableString* plainText;
	NSMutableString* htmlString;
	NSMutableString* htmlStringNoImages;
	NSData* webArchiveData;

}
-(id)webArchiveData;
-(void)dealloc;
-(id)init;
-(id)html;
-(void)addSelection:(CGPDFSelectionRef)arg1 ;
-(void)dispose;
-(id)plainText;
-(void)finalize;
@end
