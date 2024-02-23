//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMNLAssetCollection_h
#define CDMNLAssetCollection_h
@import Foundation;

@class NSDictionary, NSString;

@interface CDMNLAssetCollection : NSObject

@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSDictionary *assetPaths;

/* class methods */
+ (id)assetCollectionWithAssetPaths:(id)paths withLanguageCode:(id)code;

/* instance methods */
- (id)_initWithAssetPaths:(id)paths withLanguageCode:(id)code;
- (id)getAssetForFactorName:(id)name;
- (id)getAssetBundlePathForFactorName:(id)name;
- (id)getAssetPaths;
@end

#endif /* CDMNLAssetCollection_h */