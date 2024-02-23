//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.16.0.0.0
//
#ifndef ACUISActivityItemMetricsRequest_h
#define ACUISActivityItemMetricsRequest_h
@import Foundation;

#include "ACUISEdgeInsets.h"
#include "ACUISSizeDimensionRequest.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class _TtC18ActivityUIServices26ActivityItemMetricsRequest;

@interface ACUISActivityItemMetricsRequest : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  ActivityUIServices.ActivityItemMetricsRequest *_itemMetricsRequest;
}

@property (copy, nonatomic) ACUISSizeDimensionRequest *widthRequest;
@property (copy, nonatomic) ACUISSizeDimensionRequest *heightRequest;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double clipMargin;
@property (nonatomic) ACUISEdgeInsets *edgeInsets;
@property (nonatomic) double scaleFactor;

/* class methods */
+ (id)new;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithWidth:(id)width height:(id)height cornerRadius:(double)radius;
- (id)initWithWidth:(id)width height:(id)height cornerRadius:(double)radius edgeInsets:(id)insets;
- (id)initWithWidth:(id)width height:(id)height cornerRadius:(double)radius edgeInsets:(id)insets clipMargin:(double)margin;
- (id)initWithWidth:(id)width height:(id)height cornerRadius:(double)radius edgeInsets:(id)insets clipMargin:(double)margin scaleFactor:(double)factor;
- (id)_initWithItemMetrics:(id)metrics;
- (struct CGSize { double x0; double x1; })initialSize;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)_activityItemMetricsRequest;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ACUISActivityItemMetricsRequest_h */