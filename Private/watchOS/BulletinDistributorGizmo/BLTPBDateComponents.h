//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTPBDateComponents_h
#define BLTPBDateComponents_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface BLTPBDateComponents : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 hour; unsigned int x :1 minute; unsigned int x :1 second; unsigned int x :1 weekday; } _has;
}

@property (nonatomic) BOOL hasSecond;
@property (nonatomic) int second;
@property (nonatomic) BOOL hasHour;
@property (nonatomic) int hour;
@property (nonatomic) BOOL hasMinute;
@property (nonatomic) int minute;
@property (nonatomic) BOOL hasWeekday;
@property (nonatomic) int weekday;

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

#endif /* BLTPBDateComponents_h */