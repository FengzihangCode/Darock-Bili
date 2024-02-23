//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMSiriUserAggregationId_h
#define BMSiriUserAggregationId_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSData, NSDate, NSString, NSUUID;

@interface BMSiriUserAggregationId : BMEventBase<BMStoreData> {
  /* instance variables */
  NSData *_raw_aggregationId;
  BOOL _hasRaw_effectiveFrom;
  double _raw_effectiveFrom;
  BOOL _hasRaw_createdOn;
  double _raw_createdOn;
  BOOL _hasRaw_adoptedOn;
  double _raw_adoptedOn;
}

@property (readonly, nonatomic) NSUUID *aggregationId;
@property (readonly, nonatomic) NSDate *effectiveFrom;
@property (readonly, nonatomic) unsigned int validityDays;
@property (nonatomic) BOOL hasValidityDays;
@property (readonly, nonatomic) NSDate *createdOn;
@property (readonly, nonatomic) NSDate *adoptedOn;
@property (readonly, nonatomic) unsigned int switchedCount;
@property (nonatomic) BOOL hasSwitchedCount;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithAggregationId:(id)id effectiveFrom:(id)from validityDays:(id)days createdOn:(id)on adoptedOn:(id)on switchedCount:(id)count;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMSiriUserAggregationId_h */