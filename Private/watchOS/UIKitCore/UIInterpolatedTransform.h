//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInterpolatedTransform_h
#define UIInterpolatedTransform_h
@import Foundation;

#include "UIVectorOperatable-Protocol.h"

@class NSString;

@interface UIInterpolatedTransform : NSObject<UIVectorOperatable> {
  /* instance variables */
  struct { double rotationX; double rotationY; double rotationZ; double scaleX; double scaleY; double scaleZ; double translationX; double translationY; double translationZ; } _transform;
  long long _rotationDirection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)valueWithCATransform3D:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })d;
+ (id)valueWithDecomposedTransform:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })transform;
+ (id)valueWithDecomposedTransform:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })transform rotationDirection:(long long)direction;
+ (id)epsilonCompatibleWithVector:(id)vector;
+ (id)zeroCompatibleWithVector:(id)vector;

/* instance methods */
- (id)getValue;
- (id)interpolateTo:(id)to progress:(double)progress;
- (BOOL)isApproximatelyEqualTo:(id)to withinEpsilon:(id)epsilon;
- (BOOL)isCompatibleWith:(id)with;
- (BOOL)isUndefined;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)integrateWithVelocity:(id)velocity target:(id)target intermediateTarget:(id)target intermediateTargetVelocity:(id)velocity parameters:(struct { struct { double x0; double x1; double x2; long long x3; } x0; struct { double x0; double x1; double x2; long long x3; } x1; struct { double x0; double x1; double x2; long long x3; } x2; BOOL x3; BOOL x4; BOOL x5; })parameters state:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; double x2; double x3; })state delta:(double)delta;
- (id)addVector:(id)vector;
- (id)multiplyByScalar:(double)scalar;
- (id)multiplyByVector:(id)vector;
- (void)reinitWithVector:(id)vector;
@end

#endif /* UIInterpolatedTransform_h */