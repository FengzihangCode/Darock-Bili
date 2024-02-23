//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIScreenMode_h
#define UIScreenMode_h
@import Foundation;

@class FBSDisplayMode;

@interface UIScreenMode : NSObject {
  /* instance variables */
  FBSDisplayMode *_mode;
  BOOL _isMainScreen;
  double _scale;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double pixelAspectRatio;

/* class methods */
+ (id)_screenModeForDisplayMode:(id)mode mainScreen:(BOOL)screen actualDisplayScale:(double)scale;

/* instance methods */
- (id)initWithDisplayMode:(id)mode mainScreen:(BOOL)screen actualDisplayScale:(double)scale;
- (struct CGSize { double x0; double x1; })_sizeWithLevel:(unsigned long long)level;
- (id)valueForKey:(id)key;
- (id)_displayMode;
- (id)description;
@end

#endif /* UIScreenMode_h */