//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKRemoteCloudStoreAssetManifestItem_h
#define PKRemoteCloudStoreAssetManifestItem_h
@import Foundation;

#include "PKRemoteAssetManifestItem.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface PKRemoteCloudStoreAssetManifestItem : PKRemoteAssetManifestItem<NSSecureCoding>

@property (readonly, nonatomic) NSString *recordName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (unsigned long long)itemType;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)delegate completion:(id /* block */)completion;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)delegate tryCount:(unsigned long long)count completion:(id /* block */)completion;
@end

#endif /* PKRemoteCloudStoreAssetManifestItem_h */