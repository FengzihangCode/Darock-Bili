//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBRenderer_h
#define UIKBRenderer_h
@import Foundation;

#include "UIColor.h"
#include "UIImage.h"

@class NSData, NSString;

@interface UIKBRenderer : NSObject {
  /* instance variables */
  struct CGContext * _cachingContext;
  id /* block */ _cachingContextCompletion;
  long long _forceColorFormat;
  int _colorCount;
  struct CGContext * _ctx;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _layerPaddedFrame;
@property (nonatomic) double _layerRoundRectRadius;
@property (readonly, nonatomic) struct CGContext * context;
@property (readonly, nonatomic) NSData *contextData;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) BOOL opaque;
@property (readonly, nonatomic) long long renderFlags;
@property (readonly, nonatomic) UIImage *renderedImage;
@property (readonly, nonatomic) long long contentColorFormat;
@property (readonly, nonatomic) UIColor *singleColor;
@property (retain, nonatomic) NSString *cacheKey;
@property (nonatomic) BOOL colorDetectMode;
@property (nonatomic) BOOL disableInternalCaching;
@property (readonly, nonatomic) long long assetIdiom;

/* class methods */
+ (id)rendererWithContext:(struct CGContext *)context withSize:(struct CGSize { double x0; double x1; })size withScale:(double)scale opaque:(BOOL)opaque renderFlags:(long long)flags assetIdiom:(long long)idiom;
+ (struct CGContext *)imageContextWithSize:(struct CGSize { double x0; double x1; })size scale:(double)scale colorFormat:(long long)format opaque:(BOOL)opaque invert:(BOOL)invert;
+ (void)clearInternalCaches;

/* instance methods */
- (id)initWithContext:(struct CGContext *)context withSize:(struct CGSize { double x0; double x1; })size withScale:(double)scale opaque:(BOOL)opaque renderFlags:(long long)flags assetIdiom:(long long)idiom;
- (void)dealloc;
- (id)description;
- (void)forceColorFormat:(long long)format;
- (void)_addDetectedColor:(struct CGColor *)color;
- (void)detectColorsForNamedColor:(id)color;
- (void)detectColorsForGradient:(id)gradient;
- (void)detectColorsForEffect:(id)effect;
- (void)ensureContext;
- (void)renderNullEffect:(id)effect withTraits:(id)traits;
- (void)renderEdgeEffect:(id)effect withTraits:(id)traits;
- (void)renderShadowEffect:(id)effect withTraits:(id)traits;
- (void)renderDivotEffect:(id)effect withTraits:(id)traits;
- (void)_drawLinearGradient:(id)gradient inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)renderBackgroundTraits:(id)traits allowCaching:(BOOL)caching;
- (BOOL)loadCachedImageForHashString:(id)string;
- (void)_completeCacheImageWithTraitsIfNecessary:(id)necessary;
- (void)renderBackgroundTraits:(id)traits;
- (void)renderKeyContents:(id)contents withTraits:(id)traits;
- (void)_renderVariantsFromKeyContents:(id)contents withTraits:(id)traits;
- (void)_drawKeyImage:(id)image inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withStyle:(id)style force1xImages:(BOOL)images flipHorizontally:(BOOL)horizontally;
- (unsigned long long)renderKeyImageContents:(id)contents withTraits:(id)traits status:(unsigned long long)status;
- (id)symbolImageConfigForKey:(id)key traitCollection:(id)collection;
- (long long)symbolImageRenderingModeForIdiom:(long long)idiom;
- (BOOL)_drawSingleSymbol:(id)symbol inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withStyle:(id)style;
- (BOOL)_drawKeyString:(id)string inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withStyle:(id)style;
- (unsigned long long)renderKeyStringContents:(id)contents withTraits:(id)traits status:(unsigned long long)status;
- (struct CGPath *)_thinShiftGlyphPath;
- (struct CGPath *)_thickShiftGlyphPath;
- (struct CGPath *)_deleteGlyphPaths;
- (void)drawPath:(struct CGPath *)path weight:(double)weight transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform color:(struct CGColor *)color fill:(BOOL)fill;
- (void)drawShiftPath:(BOOL)path weight:(double)weight transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform color:(struct CGColor *)color;
- (BOOL)renderKeyPathContents:(id)contents withTraits:(id)traits;
- (void)addRoundRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect radius:(double)radius corners:(unsigned long long)corners;
- (void)addPathForTraits:(id)traits displayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect;
- (void)addPathForRenderGeometry:(id)geometry;
- (void)addPathForFlickGeometry:(id)geometry;
- (void)addPathForFlickPopupGeometries:(id)geometries;
- (void)addPathForSplitGeometry:(id)geometry;
- (id)pathForConcaveCornerWithGeometry:(id)geometry;
- (id)pathForRenderGeometry:(id)geometry;
- (id)defaultPathForRenderGeometry:(id)geometry;
- (id)watchPathForRenderGeometry:(id)geometry;
- (id)pathForFlickWidth:(double)width height:(double)height handleLength:(double)length keyMiddle:(struct CGPoint { double x0; double x1; })middle angle:(double)angle radius:(double)radius;
- (id)pathForFlickGeometry:(id)geometry;
- (id)pathForFlickPopupGeometries:(id)geometries;
- (id)pathForSplitGeometry:(id)geometry;
@end

#endif /* UIKBRenderer_h */