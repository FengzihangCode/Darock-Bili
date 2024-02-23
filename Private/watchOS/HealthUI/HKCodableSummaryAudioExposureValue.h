//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCodableSummaryAudioExposureValue_h
#define HKCodableSummaryAudioExposureValue_h
@import Foundation;

#include "PBCodable.h"
#include "HKCodableQuantity.h"
#include "NSCopying-Protocol.h"

@interface HKCodableSummaryAudioExposureValue : PBCodable<NSCopying> {
  /* instance variables */
  struct APPLE_HKCodableSummaryAudioExposureValue_1 { unsigned int x :1 daysAggregated; unsigned int x :1 lastUpdatedDateData; unsigned int x :1 secondsListened; } _has;
}

@property (readonly, nonatomic) BOOL hasLeqQuantity;
@property (retain, nonatomic) HKCodableQuantity *leqQuantity;
@property (nonatomic) BOOL hasSecondsListened;
@property (nonatomic) double secondsListened;
@property (nonatomic) BOOL hasDaysAggregated;
@property (nonatomic) long long daysAggregated;
@property (nonatomic) BOOL hasLastUpdatedDateData;
@property (nonatomic) double lastUpdatedDateData;

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

#endif /* HKCodableSummaryAudioExposureValue_h */