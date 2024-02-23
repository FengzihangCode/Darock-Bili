//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDModifyBadgeURLRequest_h
#define CKDModifyBadgeURLRequest_h
@import Foundation;

#include "CKDURLRequest.h"

@interface CKDModifyBadgeURLRequest : CKDURLRequest

@property (readonly, nonatomic) unsigned long long badgeValue;

/* instance methods */
- (id)initWithOperation:(id)operation badgeValue:(unsigned long long)value;
- (void)fillOutEquivalencyPropertiesBuilder:(id)builder;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)object;
@end

#endif /* CKDModifyBadgeURLRequest_h */