//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPEdgeDetector_h
#define VCPEdgeDetector_h
@import Foundation;

@interface VCPEdgeDetector : NSObject {
  /* instance variables */
  unsigned long long _widthPadded;
  unsigned long long _heightPadded;
  unsigned long long _width;
  unsigned long long _height;
  int _widthExt;
  int _heightExt;
  struct DSPSplitComplex { float *realp; float *imagp; } _gradient;
  float * _image;
  float * _imageFiltered;
  float * _nonMaxSuppressed;
  float * _gradientX;
  float * _gradientY;
  float * _gradientMag;
  float * _edgeMap;
}

/* instance methods */
- (id)initWithImage:(float *)image edgeMap:(float *)map width:(unsigned long long)width height:(unsigned long long)height widthExtension:(int)extension heightExtension:(int)extension;
- (void)dealloc;
- (int)detectWithSigma:(float)sigma lowThreshold:(float)threshold highThreshold:(float)threshold;
- (int)noiseReduction:(float *)reduction sigma:(float)sigma imageFiltered:(float *)filtered;
- (int)gradientEstimation:(float *)estimation width:(unsigned long long)width height:(unsigned long long)height gradient:(struct DSPSplitComplex { float * x0; float * x1; })gradient gradientMag:(float *)mag;
- (BOOL)isInImage:(int)image width:(int)width height:(int)height;
@end

#endif /* VCPEdgeDetector_h */