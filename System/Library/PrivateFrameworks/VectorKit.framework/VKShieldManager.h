/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class GEOResourceManifestConfiguration, VKResourceManager, VKGenericShieldGenerator, NSArray, NSMapTable, NSLock, NSString;

@interface VKShieldManager : NSObject <GEOResourceManifestTileGroupObserver> {

	GEOGenericContainer<md::ShieldCacheKey, VKShieldArtwork *, std::__1::hash<md::ShieldCacheKey>, std::__1::equal_to<md::ShieldCacheKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _artworkPool;
	GEOGenericContainer<md::GenericShieldCacheKey, VKShieldArtwork *, std::__1::hash<md::GenericShieldCacheKey>, std::__1::equal_to<md::GenericShieldCacheKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _genericArtworks;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	VKResourceManager* _resourceManager;
	VKGenericShieldGenerator* _genericShieldGenerator;
	NSArray* _nonRegionalResourceNames;
	NSMapTable* _atlases;
	NSLock* _atlasesLock;
	NSMapTable* _indexes;
	NSLock* _indexesLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)dealloc;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(void)purge;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2 ;
-(id)artworkForShieldType:(long long)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 resourceNames:(id)arg4 style:(shared_ptr<gss::GenericShieldDrawStyle>*)arg5 size:(long long)arg6 idiom:(long long)arg7 numberOfLines:(unsigned long long)arg8 colors:(SCD_Struct_VK81*)arg9 featureType:(unsigned long long)arg10 variant:(unsigned long long)arg11 ;
-(id)artworkForShieldName:(id)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 resourceNames:(id)arg4 size:(long long)arg5 idiom:(long long)arg6 numberOfLines:(unsigned long long)arg7 colors:(SCD_Struct_VK81*)arg8 ;
-(id)_indexForName:(id)arg1 ;
-(id)_nonRegionalIndexesAndPacks;
-(id)artworkForShieldType:(long long)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 size:(long long)arg4 idiom:(long long)arg5 mapRect:(SCD_Struct_VK112)arg6 colors:(SCD_Struct_VK81*)arg7 featureType:(unsigned long long)arg8 variant:(unsigned long long)arg9 ;
-(id)_atlasForName:(id)arg1 ;
-(id)artworkForShieldType:(long long)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 size:(long long)arg4 idiom:(long long)arg5 colors:(SCD_Struct_VK81*)arg6 featureType:(unsigned long long)arg7 variant:(unsigned long long)arg8 ;
-(id)imageForShieldType:(long long)arg1 shieldText:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 idiom:(long long)arg5 colors:(SCD_Struct_VK81*)arg6 featureType:(unsigned long long)arg7 variant:(unsigned long long)arg8 ;
@end
