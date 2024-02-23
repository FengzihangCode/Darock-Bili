//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 149.1.0.0.0
//
#ifndef AXAuditAssetManager_h
#define AXAuditAssetManager_h
@import Foundation;

#include "AXAssetControllerObserver-Protocol.h"

@class NSArray, NSString;

@interface AXAuditAssetManager : NSObject<AXAssetControllerObserver>

@property (retain, nonatomic) NSArray *_assetControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)downloadAssetsIfNecessary;
- (void)assetController:(id)controller didFinishRefreshingAssets:(id)assets wasSuccessful:(BOOL)successful error:(id)error;
- (void)assetController:(id)controller didFinishDownloadingAsset:(id)asset wasSuccessful:(BOOL)successful error:(id)error hasRemainingDownloads:(BOOL)downloads;
@end

#endif /* AXAuditAssetManager_h */