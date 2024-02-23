//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTransitEnterExitInfo_h
#define GEOTransitEnterExitInfo_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class PBUnknownFields;

@interface GEOTransitEnterExitInfo : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_accessPointIndex; unsigned int x :1 has_stopIndex; unsigned int x :1 has_transferTime; unsigned int x :1 has_displayStop; unsigned int x :1 has_uncertainArrival; } _flags;
}

@property (nonatomic) BOOL hasAccessPointIndex;
@property (nonatomic) unsigned int accessPointIndex;
@property (nonatomic) BOOL hasStopIndex;
@property (nonatomic) unsigned int stopIndex;
@property (nonatomic) BOOL hasDisplayStop;
@property (nonatomic) BOOL displayStop;
@property (nonatomic) BOOL hasTransferTime;
@property (nonatomic) unsigned int transferTime;
@property (nonatomic) BOOL hasUncertainArrival;
@property (nonatomic) BOOL uncertainArrival;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOTransitEnterExitInfo_h */