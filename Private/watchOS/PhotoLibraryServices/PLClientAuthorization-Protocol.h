//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLClientAuthorization_Protocol_h
#define PLClientAuthorization_Protocol_h
@import Foundation;

@protocol PLClientAuthorization <PLClientIdentification>

@property (readonly, nonatomic) NSString *fetchFilterIdentifier;
@property (readonly, nonatomic) NSString *trustedCallerDisplayName;
@property (readonly, nonatomic) NSString *trustedCallerPhotoLibraryUsageDescription;
@property (readonly, nonatomic) BOOL photoKitEntitled;
@property (readonly, nonatomic) BOOL directDatabaseAccessAuthorized;
@property (readonly, nonatomic) BOOL directDatabaseWriteAuthorized;
@property (readonly, nonatomic) BOOL cloudInternalEntitled;
@property (readonly, nonatomic) BOOL analyticsCacheReadEntitled;
@property (readonly, nonatomic) BOOL analyticsCacheWriteEntitled;
@property (readonly, nonatomic) BOOL smartSharingCacheReadEntitled;
@property (readonly, nonatomic) BOOL smartSharingCacheWriteEntitled;
@property (readonly, nonatomic) BOOL limitedLibraryMode;
@property (readonly, nonatomic) BOOL clientLimitedLibraryCapable;
@property (readonly, nonatomic) BOOL clientIsSandboxed;
@property (readonly, nonatomic) BOOL photosDataVaultEntitled;
@property (readonly, nonatomic) BOOL internalDataReadWriteAuthorized;
@property (readonly, nonatomic) BOOL clientAuthorizedForTCCServicePhotos;
@property (readonly, nonatomic) BOOL clientAuthorizedForTCCServicePhotosAdd;

/* instance methods */
- (BOOL)photoKitEntitledFor:(id)for;
- (BOOL)isClientLimitedLibraryCapable;
- (BOOL)isClientAuthorizedForTCCServicePhotos;
- (BOOL)isClientAuthorizedForTCCServicePhotosAdd;
@end

#endif /* PLClientAuthorization_Protocol_h */