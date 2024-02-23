//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUINTERNALUtteranceRule_h
#define SIRINLUINTERNALUtteranceRule_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "SIRINLUINTERNALCompareOptions.h"

@class NSMutableArray, NSString;

@interface SIRINLUINTERNALUtteranceRule : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 type; } _has;
}

@property (readonly, nonatomic) BOOL hasPattern;
@property (retain, nonatomic) NSString *pattern;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCompareOptions;
@property (retain, nonatomic) SIRINLUINTERNALCompareOptions *compareOptions;
@property (retain, nonatomic) NSMutableArray *spansForNamedCaptureGroups;

/* class methods */
+ (Class)spansForNamedCaptureGroupsType;

/* instance methods */
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
- (void)clearSpansForNamedCaptureGroups;
- (void)addSpansForNamedCaptureGroups:(id)groups;
- (unsigned long long)spansForNamedCaptureGroupsCount;
- (id)spansForNamedCaptureGroupsAtIndex:(unsigned long long)index;
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

#endif /* SIRINLUINTERNALUtteranceRule_h */