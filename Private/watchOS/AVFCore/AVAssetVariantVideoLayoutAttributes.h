//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetVariantVideoLayoutAttributes_h
#define AVAssetVariantVideoLayoutAttributes_h
@import Foundation;

@class FigAlternateObjCVideoLayoutAttributes;

@interface AVAssetVariantVideoLayoutAttributes : NSObject {
  /* instance variables */
  FigAlternateObjCVideoLayoutAttributes *_figVideoLayoutAttributes;
}

@property (readonly, nonatomic) unsigned long long packingType;
@property (readonly, nonatomic) unsigned long long projectionType;
@property (readonly, nonatomic) unsigned long long stereoViewComponents;

/* instance methods */
- (id)initWithFigVideoImmersiveAttributes:(id)attributes;
- (void)dealloc;
- (id)description;
@end

#endif /* AVAssetVariantVideoLayoutAttributes_h */