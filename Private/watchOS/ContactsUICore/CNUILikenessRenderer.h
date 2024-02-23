//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUILikenessRenderer_h
#define CNUILikenessRenderer_h
@import Foundation;

@interface CNUILikenessRenderer : NSObject
/* class methods */
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysForCaching;
+ (id)rendererWithLikenessResolver:(id)resolver schedulerProvider:(id)provider;
+ (id)cachingRendererWithLikenessResolver:(id)resolver schedulerProvider:(id)provider;
+ (id)cachingRendererWithLikenessResolver:(id)resolver capacity:(unsigned long long)capacity schedulerProvider:(id)provider;
+ (id)concurrentCachingRendererWithLikenessResolver:(id)resolver capacity:(unsigned long long)capacity schedulerProvider:(id)provider;
@end

#endif /* CNUILikenessRenderer_h */