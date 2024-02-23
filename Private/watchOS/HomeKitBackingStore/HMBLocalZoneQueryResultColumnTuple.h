//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBLocalZoneQueryResultColumnTuple_h
#define HMBLocalZoneQueryResultColumnTuple_h
@import Foundation;

#include "HMFObject.h"
#include "HMBModelField.h"

@class NSString;

@interface HMBLocalZoneQueryResultColumnTuple : HMFObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int offset;
@property (readonly, nonatomic) HMBModelField *modelField;

/* instance methods */
- (id)initWithName:(id)name offset:(int)offset modelField:(id)field;
- (id)description;
@end

#endif /* HMBLocalZoneQueryResultColumnTuple_h */