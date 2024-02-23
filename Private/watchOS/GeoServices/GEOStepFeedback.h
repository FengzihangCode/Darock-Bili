//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOStepFeedback_h
#define GEOStepFeedback_h
@import Foundation;

#include "PBCodable.h"
#include "GEOEVStepFeedbackInfo.h"
#include "NSCopying-Protocol.h"

@class NSData, PBDataReader;

@interface GEOStepFeedback : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_completionTimeStamp; unsigned int x :1 has_stepEndPathPointOffset; unsigned int x :1 has_expectedTime; unsigned int x :1 has_maneuverType; unsigned int x :1 has_routeIndex; unsigned int x :1 has_stepID; unsigned int x :1 has_stepEndPathPointIndex; unsigned int x :1 has_waypointRouteID; unsigned int x :1 has_completedStep; unsigned int x :1 has_lightGuidance; unsigned int x :1 has_routePaused; unsigned int x :1 has_routeResumed; unsigned int x :1 read_etaTrafficUpdateResponseId; unsigned int x :1 read_evStepInfo; unsigned int x :1 read_routeID; unsigned int x :1 read_stepZilch; unsigned int x :1 read_tripID; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) BOOL hasCompletionTimeStamp;
@property (nonatomic) double completionTimeStamp;
@property (nonatomic) BOOL hasCompletedStep;
@property (nonatomic) BOOL completedStep;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) BOOL hasRouteIndex;
@property (nonatomic) unsigned int routeIndex;
@property (nonatomic) BOOL hasLightGuidance;
@property (nonatomic) BOOL lightGuidance;
@property (readonly, nonatomic) BOOL hasTripID;
@property (retain, nonatomic) NSData *tripID;
@property (nonatomic) BOOL hasRoutePaused;
@property (nonatomic) BOOL routePaused;
@property (nonatomic) BOOL hasRouteResumed;
@property (nonatomic) BOOL routeResumed;
@property (readonly, nonatomic) BOOL hasEvStepInfo;
@property (retain, nonatomic) GEOEVStepFeedbackInfo *evStepInfo;
@property (nonatomic) BOOL hasWaypointRouteID;
@property (nonatomic) unsigned int waypointRouteID;
@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) int maneuverType;
@property (nonatomic) BOOL hasExpectedTime;
@property (nonatomic) unsigned int expectedTime;
@property (readonly, nonatomic) BOOL hasStepZilch;
@property (retain, nonatomic) NSData *stepZilch;
@property (nonatomic) BOOL hasStepEndPathPointIndex;
@property (nonatomic) int stepEndPathPointIndex;
@property (nonatomic) BOOL hasStepEndPathPointOffset;
@property (nonatomic) double stepEndPathPointOffset;
@property (readonly, nonatomic) BOOL hasEtaTrafficUpdateResponseId;
@property (retain, nonatomic) NSData *etaTrafficUpdateResponseId;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)maneuverTypeAsString:(int)string;
- (int)StringAsManeuverType:(id)type;
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
@end

#endif /* GEOStepFeedback_h */