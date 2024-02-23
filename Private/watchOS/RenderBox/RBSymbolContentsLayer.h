//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.1.16.0.0
//
#ifndef RBSymbolContentsLayer_h
#define RBSymbolContentsLayer_h
@import Foundation;

#include "RBLayer.h"

@interface RBSymbolContentsLayer : RBLayer
/* instance methods */
- (void)drawInDisplayList:(id)list;
- (void)renderInContext:(struct CGContext *)context;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* RBSymbolContentsLayer_h */