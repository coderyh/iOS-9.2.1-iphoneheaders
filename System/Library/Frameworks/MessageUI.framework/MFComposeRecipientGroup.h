/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient {

	NSArray* _children;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)displayString;
-(id)label;
-(BOOL)isGroup;
-(int)recordID;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 ;
-(id)placeholderName;
-(id)sortedChildren;
-(id)childrenWithCompleteMatches;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(void)_populateSortedChildren;
-(int)property;
-(id)address;
-(void*)record;
-(id)compositeName;
-(id)commentedAddress;
-(BOOL)isRemovableFromSearchResults;
-(id)unlocalizedLabel;
-(id)children;
@end

