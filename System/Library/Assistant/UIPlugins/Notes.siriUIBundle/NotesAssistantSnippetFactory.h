/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Notes.siriUIBundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AcousticId/SiriUISnippetPlugin.h>

@class NSString;

@interface NotesAssistantSnippetFactory : NSObject <SiriUISnippetPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForSnippet:(id)arg1 error:(id*)arg2 ;
-(id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2 ;
-(id)speakableNamespaceProviderForAceObject:(id)arg1 ;
@end
