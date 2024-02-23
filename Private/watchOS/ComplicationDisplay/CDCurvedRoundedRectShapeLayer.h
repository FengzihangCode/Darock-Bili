//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CDCurvedRoundedRectShapeLayer_h
#define CDCurvedRoundedRectShapeLayer_h
@import Foundation;

#include "CAShapeLayer.h"

@interface CDCurvedRoundedRectShapeLayer : CAShapeLayer
/* instance methods */
- (id)initWithAngularWidth:(double)width innerRadius:(double)radius outerRadius:(double)radius cornerRadius:(double)radius;
- (id)initWithAngularWidth:(double)width innerRadius:(double)radius outerRadius:(double)radius cornerRadius:(double)radius style:(long long)style;
- (id)initWithAngularWidth:(double)width innerRadius:(double)radius outerRadius:(double)radius cornerRadius:(double)radius style:(long long)style gapAngle:(double)angle;
- (struct CGPoint { double x0; double x1; })_findCircleLineIntersectionWithOffset:(double)offset cornerRadiusOffset:(double)offset radius:(double)radius slope:(double)slope;
- (struct CGPoint { double x0; double x1; })_findPointThatIsDistance:(double)distance fromPoint:(struct CGPoint { double x0; double x1; })point onSlope:(double)slope offset:(double)offset;
- (double)_findPointOfIntersectionBetweenCircleOfRadius:(double)radius slope:(double)slope offset:(double)offset;
- (struct CGPoint { double x0; double x1; })_getMirroredPoint:(struct CGPoint { double x0; double x1; })point;
- (struct CGPoint { double x0; double x1; })_pointAtAngle:(double)angle radius:(double)radius;
- (struct CGPoint { double x0; double x1; })_midPointOfPoint1:(struct CGPoint { double x0; double x1; })point1 point2:(struct CGPoint { double x0; double x1; })point2;
- (double)_findNewOffsetOfParalelLineWithSlope:(double)slope offset:(double)offset distanceFrom:(double)from;
- (struct CGPoint { double x0; double x1; })_findIntersectionOfCircle:(struct CGPoint { double x0; double x1; })circle cornerRadius:(double)radius offset:(double)offset;
@end

#endif /* CDCurvedRoundedRectShapeLayer_h */