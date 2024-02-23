//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPM2LogEventOccurred_h
#define PPM2LogEventOccurred_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface PPM2LogEventOccurred : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 event; } _has;
}

@property (nonatomic) BOOL hasEvent;
@property (nonatomic) int event;

/* instance methods */
- (id)eventAsString:(int)string;
- (int)StringAsEvent:(id)event;
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

#endif /* PPM2LogEventOccurred_h */