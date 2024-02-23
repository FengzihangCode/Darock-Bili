//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIPBPropertyValue_h
#define CSLUIPBPropertyValue_h
@import Foundation;

#include "PBCodable.h"
#include "CSLUIPBNumber.h"
#include "CSLUIPBPropertyValue.h"
#include "CSLUIPBSize.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface CSLUIPBPropertyValue : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasNumberValue;
@property (retain, nonatomic) CSLUIPBNumber *numberValue;
@property (readonly, nonatomic) BOOL hasUUIDValue;
@property (retain, nonatomic) NSData *uUIDValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL hasSizeValue;
@property (retain, nonatomic) CSLUIPBSize *sizeValue;
@property (readonly, nonatomic) BOOL hasDictionaryKey;
@property (retain, nonatomic) CSLUIPBPropertyValue *dictionaryKey;
@property (retain, nonatomic) NSMutableArray *arrayValues;

/* instance methods */
- (void)clearArrayValues;
- (void)addArrayValues:(id)values;
- (unsigned long long)arrayValuesCount;
- (id)arrayValuesAtIndex:(unsigned long long)index;
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

#endif /* CSLUIPBPropertyValue_h */