//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFMediaRouteDescriptor_h
#define WFMediaRouteDescriptor_h
@import Foundation;

#include "MTLModel.h"
#include "MTLJSONSerializing-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface WFMediaRouteDescriptor : MTLModel<NSSecureCoding, MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *routeName;
@property (readonly, copy, nonatomic) NSString *groupUID;
@property (readonly, copy, nonatomic) NSString *routeUID;
@property (readonly, nonatomic) BOOL isLocalDevice;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (BOOL)routeUID:(id)uid isEqualToRouteUID:(id)uid;

/* instance methods */
- (id)initWithRouteUID:(id)uid groupUID:(id)uid routeName:(id)name isLocalDevice:(BOOL)device;
- (BOOL)isEqualInRouteUIDs:(id)uids;
- (id)findMatchingRoute:(id)route;
@end

#endif /* WFMediaRouteDescriptor_h */