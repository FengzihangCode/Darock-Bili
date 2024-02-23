//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXAssetPolicy_h
#define AXAssetPolicy_h
@import Foundation;

@class NSNumber, NSString;

@interface AXAssetPolicy : NSObject

@property (readonly, nonatomic) NSString *assetType;
@property (nonatomic) BOOL daemonShouldDownloadInBackgroundIfNeeded;
@property (retain, nonatomic) NSNumber *minSupportedFormatVersion;
@property (retain, nonatomic) NSNumber *maxSupportedFormatVersion;
@property (retain, nonatomic) NSNumber *compatibilityVersion;
@property (nonatomic) double downloadResourceTimeout;
@property (nonatomic) double updateCatalogTimeout;
@property (nonatomic) double refreshRetryInterval;
@property (nonatomic) double downloadRetryInterval;
@property (readonly, nonatomic) BOOL shouldCopyLocally;
@property (readonly, nonatomic) BOOL shouldUseProductionServerForInternalBuilds;
@property (retain, nonatomic) NSString *launchActivityIdentifier;
@property (nonatomic) double updateInterval;
@property (readonly, nonatomic) NSString *assetTypeSuffix;

/* class methods */
+ (id)policy;

/* instance methods */
- (id)newAssetQuery;
- (id)downloadOptionsForOperation:(unsigned long long)operation userInitiated:(BOOL)initiated;
- (id)init;
- (id)description;
- (BOOL)shouldDownloadAsset:(id)asset withInstalledAssets:(id)assets;
- (BOOL)isAssetContentVersion:(id)version greatherThanInstalledAssets:(id)assets;
- (BOOL)isAssetSupported:(id)supported;
- (BOOL)_isAssetSupportedBasedOnMinMaxFormatVersion:(id)version;
- (BOOL)_isAssetSupportedBasedOnCompatibilityVersion:(id)version;
- (id)assetsToDownloadFromRefreshedAssets:(id)assets;
- (id)assetsToPurgeFromInstalledAssets:(id)assets withRefreshedAssets:(id)assets;
- (id)assetsToPurgeFromInstalledAssets:(id)assets;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* AXAssetPolicy_h */