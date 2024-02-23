//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 445.201.0.0.0
//
#ifndef CHTriangleRecognitionResult_h
#define CHTriangleRecognitionResult_h
@import Foundation;

#include "CHSketchRecognitionResult.h"

@interface CHTriangleRecognitionResult : CHSketchRecognitionResult

@property (readonly) struct CGPoint { double x0; double x1; } vertex1;
@property (readonly) struct CGPoint { double x0; double x1; } vertex2;
@property (readonly) struct CGPoint { double x0; double x1; } vertex3;

/* instance methods */
- (id)initWithString:(id)string score:(double)score rotation:(double)rotation vertex1:(struct CGPoint { double x0; double x1; })vertex1 vertex2:(struct CGPoint { double x0; double x1; })vertex2 vertex3:(struct CGPoint { double x0; double x1; })vertex3;
@end

#endif /* CHTriangleRecognitionResult_h */