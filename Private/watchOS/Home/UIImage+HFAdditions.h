//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef UIImage_HFAdditions_h
#define UIImage_HFAdditions_h
@import Foundation;

@interface UIImage (HFAdditions)
/* class methods */
+ (id)hf_fetchImageFromURL:(id)url;
+ (id)hf_safetyAndSecurityImage;

/* instance methods */
- (struct CGSize { double x0; double x1; })hf_sizeInScreenScale;
- (id)imageWithNormalizedOrientation;
@end

#endif /* UIImage_HFAdditions_h */