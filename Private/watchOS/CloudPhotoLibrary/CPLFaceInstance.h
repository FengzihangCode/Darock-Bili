//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLFaceInstance_h
#define CPLFaceInstance_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface CPLFaceInstance : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 bodyCenterX; unsigned int x :1 bodyCenterY; unsigned int x :1 bodyHeight; unsigned int x :1 bodyWidth; unsigned int x :1 centerX; unsigned int x :1 centerY; unsigned int x :1 size; unsigned int x :1 detectionType; unsigned int x :1 faceState; unsigned int x :1 nameSource; } _has;
}

@property (readonly, nonatomic) BOOL noneState;
@property (nonatomic) BOOL keyFace;
@property (nonatomic) BOOL manual;
@property (readonly, nonatomic) BOOL hasPersonIdentifier;
@property (retain, nonatomic) NSString *personIdentifier;
@property (nonatomic) BOOL hasCenterX;
@property (nonatomic) double centerX;
@property (nonatomic) BOOL hasCenterY;
@property (nonatomic) double centerY;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) double size;
@property (nonatomic) BOOL hasFaceState;
@property (nonatomic) unsigned int faceState;
@property (retain, nonatomic) NSMutableArray *rejectedPersonIdentifiers;
@property (nonatomic) BOOL hasNameSource;
@property (nonatomic) unsigned int nameSource;
@property (nonatomic) BOOL hasDetectionType;
@property (nonatomic) unsigned int detectionType;
@property (nonatomic) BOOL hasBodyCenterX;
@property (nonatomic) double bodyCenterX;
@property (nonatomic) BOOL hasBodyCenterY;
@property (nonatomic) double bodyCenterY;
@property (nonatomic) BOOL hasBodyWidth;
@property (nonatomic) double bodyWidth;
@property (nonatomic) BOOL hasBodyHeight;
@property (nonatomic) double bodyHeight;

/* class methods */
+ (Class)rejectedPersonIdentifiersType;

/* instance methods */
- (BOOL)isPetDetectionType;
- (long long)compare:(id)compare;
- (id)pointerDescription;
- (void)clearState;
- (BOOL)isNoneState;
- (BOOL)isKeyFace;
- (BOOL)isManual;
- (void)_setFaceStateBit:(unsigned int)bit fromBoolValue:(BOOL)value;
- (BOOL)_isFaceStateBitSet:(unsigned int)set;
- (BOOL)isTorsoOnly;
- (void)clearRejectedPersonIdentifiers;
- (void)addRejectedPersonIdentifiers:(id)identifiers;
- (unsigned long long)rejectedPersonIdentifiersCount;
- (id)rejectedPersonIdentifiersAtIndex:(unsigned long long)index;
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

#endif /* CPLFaceInstance_h */