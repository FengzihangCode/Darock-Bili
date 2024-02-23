//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef CUIThemeSchemaRenditionGroup_h
#define CUIThemeSchemaRenditionGroup_h
@import Foundation;

#include "CUIRenditionKey.h"

@class NSArray;

@interface CUIThemeSchemaRenditionGroup : NSObject {
  /* instance variables */
  CUIRenditionKey *_baseKey;
  struct { char * x0; char * x1; struct _renditionkeytoken { unsigned short x20; unsigned short x1; } x[5] long long x3; long long x4; struct { char * x50; char * x1; long long x2; unsigned long long x3; } x[12] } * _part;
}

@property (retain, nonatomic) NSArray *renditions;

/* class methods */
+ (id)renditionGroupsForRenditions:(id)renditions part:(struct { char * x0; char * x1; struct _renditionkeytoken { unsigned short x20; unsigned short x1; } x[5] long long x3; long long x4; struct { char * x50; char * x1; long long x2; unsigned long long x3; } x[12] } *)part;

/* instance methods */
- (id)initWithRenditions:(id)renditions part:(struct { char * x0; char * x1; struct _renditionkeytoken { unsigned short x20; unsigned short x1; } x[5] long long x3; long long x4; struct { char * x50; char * x1; long long x2; unsigned long long x3; } x[12] } *)part;
- (id)baseKey;
- (void)addLayoutMetricsToPSDImageRef:(id)ref withRendition:(id)rendition;
- (id)mutablePSDImageRef;
- (id)mutablePSDImageRefColumnStyle;
- (id)description;
- (id)_renditionsSortedIntoLayers;
- (id)_layerNameForState:(long long)state;
- (id)_layerNameForDrawingLayer:(long long)layer;
- (id)themeSchemaLayers;
- (id)schemaLayersAndLayerGroups;
- (void)addStatesAndDrawingLayersToPSDLayers:(id)psdlayers forPresentationState:(unsigned long long)state;
- (void)addValueOrDim1LayersToPSDLayers:(id)psdlayers forPresentationState:(unsigned long long)state state:(unsigned long long)state drawingLayer:(unsigned long long)layer;
- (long long)partFeatures;
- (void)dealloc;
@end

#endif /* CUIThemeSchemaRenditionGroup_h */