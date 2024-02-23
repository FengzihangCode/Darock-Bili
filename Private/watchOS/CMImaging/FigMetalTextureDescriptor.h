//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigMetalTextureDescriptor_h
#define FigMetalTextureDescriptor_h
@import Foundation;

@class MTLTextureDescriptor, NSString;

@interface FigMetalTextureDescriptor : NSObject

@property (nonatomic) BOOL isLinear;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) MTLTextureDescriptor *desc;
@property (nonatomic) int allocationHint;

/* instance methods */
- (id)init;
- (void)initFromDescriptor:(id)descriptor;
@end

#endif /* FigMetalTextureDescriptor_h */