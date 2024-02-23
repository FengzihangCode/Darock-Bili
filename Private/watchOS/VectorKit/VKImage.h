//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKImage_h
#define VKImage_h
@import Foundation;

#include "VKResourceManager.h"

@class NSData, NSString;
@protocol {Box<float, 2>="_minimum"{Matrix<float, 2, 1>="_e"[2f]}"_maximum"{Matrix<float, 2, 1>="_e"[2f]}}, {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}}, {shared_ptr<md::TextureAtlasRegion>="__ptr_"^{TextureAtlasRegion}"__cntrl_"^{__shared_weak_count}};

@interface VKImage : NSObject {
  /* instance variables */
  struct CGImage * _imageRef;
  NSData *_data;
  NSString *_name;
  void * _gglTexture;
  struct shared_ptr<md::TextureAtlasRegion> { struct TextureAtlasRegion *__ptr_; struct __shared_weak_count *__cntrl_; } _textureAtlasRegion;
  struct Box<float, 2> { struct Matrix<float, 2, 1> { float x[2] _e; } _minimum; struct Matrix<float, 2, 1> { float x[2] _e; } _maximum; } _textureCoordinates;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _collisionRect;
  struct CGPoint { double x; double y; } _anchorPoint;
  struct CGPoint { double x; double y; } _labelingPoint;
  struct CGSize { double width; double height; } _size;
  double _scale;
  BOOL _hasCollisionRect;
  BOOL _hasAnchorPoint;
  BOOL _hasLabelingPoint;
  BOOL _usedAsTextureAndImage;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _isTextureReady;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _isImageReady;
  VKResourceManager *_resourceManager;
  unsigned char _imageHash[16];
}

/* instance methods */
- (id)initWithCGImage:(struct CGImage *)cgimage scale:(double)scale usedAsTextureAndImage:(BOOL)image;
- (id)initWithCGImage:(struct CGImage *)cgimage scale:(double)scale;
- (id)initWithData:(id)data scale:(double)scale usedAsTextureAndImage:(BOOL)image;
- (id)initWithData:(id)data scale:(double)scale;
- (id)initWithName:(id)name scale:(double)scale resourceManager:(id)manager;
- (void)dealloc;
- (void *)gglTexture;
- (const void *)textureCoordinates;
- (void)prepareTextureWithAtlas:(struct TextureAtlas { undefined * * x0; } *)atlas;
- (void)_prepareTextureWithAtlas:(struct TextureAtlas { undefined * * x0; } *)atlas;
- (struct CGImage *)image;
- (void)_prepareImage;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (struct CGPoint { double x0; double x1; })labelingPoint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collisionRect;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })point;
- (void)setLabelingPoint:(struct CGPoint { double x0; double x1; })point;
- (void)setCollisionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (int)compareTo:(id)to;
@end

#endif /* VKImage_h */