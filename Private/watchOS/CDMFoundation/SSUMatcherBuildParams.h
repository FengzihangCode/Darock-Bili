//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SSUMatcherBuildParams_h
#define SSUMatcherBuildParams_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSURL;

@interface SSUMatcherBuildParams : NSObject<NSCopying>

@property (readonly) NSURL *modelAssetsDirectoryURL;
@property (readonly) NSURL *datasetAssetsDirectoryURL;
@property (readonly) NSURL *cacheDirectoryURL;

/* instance methods */
- (id)initWithModelAssetsDirectoryURL:(id)url datasetAssetsDirectoryURL:(id)url cacheDirectoryURL:(id)url;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SSUMatcherBuildParams_h */