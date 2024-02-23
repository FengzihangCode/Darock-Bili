//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASCodableCloudKitRelationshipEvent_h
#define ASCodableCloudKitRelationshipEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface ASCodableCloudKitRelationshipEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 anchor; unsigned int x :1 date; unsigned int x :1 type; } _has;
}

@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) long long anchor;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* ASCodableCloudKitRelationshipEvent_h */