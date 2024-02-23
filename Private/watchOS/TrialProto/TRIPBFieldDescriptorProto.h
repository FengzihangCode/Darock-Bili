//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBFieldDescriptorProto_h
#define TRIPBFieldDescriptorProto_h
@import Foundation;

#include "TRIPBMessage.h"
#include "TRIPBFieldOptions.h"

@class NSString;

@interface TRIPBFieldDescriptorProto : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *name;
@property (@dynamic, nonatomic) BOOL hasName;
@property (@dynamic, nonatomic) int number;
@property (@dynamic, nonatomic) BOOL hasNumber;
@property (@dynamic, nonatomic) int label;
@property (@dynamic, nonatomic) BOOL hasLabel;
@property (@dynamic, nonatomic) int type;
@property (@dynamic, nonatomic) BOOL hasType;
@property (copy, @dynamic, nonatomic) NSString *typeName;
@property (@dynamic, nonatomic) BOOL hasTypeName;
@property (copy, @dynamic, nonatomic) NSString *extendee;
@property (@dynamic, nonatomic) BOOL hasExtendee;
@property (copy, @dynamic, nonatomic) NSString *defaultValue;
@property (@dynamic, nonatomic) BOOL hasDefaultValue;
@property (@dynamic, nonatomic) int oneofIndex;
@property (@dynamic, nonatomic) BOOL hasOneofIndex;
@property (copy, @dynamic, nonatomic) NSString *jsonName;
@property (@dynamic, nonatomic) BOOL hasJsonName;
@property (retain, @dynamic, nonatomic) TRIPBFieldOptions *options;
@property (@dynamic, nonatomic) BOOL hasOptions;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIPBFieldDescriptorProto_h */