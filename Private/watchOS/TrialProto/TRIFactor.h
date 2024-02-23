//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFactor_h
#define TRIFactor_h
@import Foundation;

#include "TRIPBMessage.h"

@class NSMutableArray, NSString;

@interface TRIFactor : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *id_p;
@property (@dynamic, nonatomic) BOOL hasId_p;
@property (copy, @dynamic, nonatomic) NSString *name;
@property (@dynamic, nonatomic) BOOL hasName;
@property (@dynamic, nonatomic) int type;
@property (@dynamic, nonatomic) BOOL hasType;
@property (@dynamic, nonatomic) int namespaceId;
@property (@dynamic, nonatomic) BOOL hasNamespaceId;
@property (copy, @dynamic, nonatomic) NSString *namespaceName;
@property (@dynamic, nonatomic) BOOL hasNamespaceName;
@property (retain, @dynamic, nonatomic) NSMutableArray *metadataKeysArray;
@property (readonly, @dynamic, nonatomic) unsigned long long metadataKeysArray_Count;
@property (copy, @dynamic, nonatomic) NSString *alias;
@property (@dynamic, nonatomic) BOOL hasAlias;

/* class methods */
+ (id)descriptor;

/* instance methods */
- (id)typeString;
- (BOOL)hasNamespace;
- (id)namespaceString;
- (BOOL)isInNamespaceName:(id)name;
@end

#endif /* TRIFactor_h */