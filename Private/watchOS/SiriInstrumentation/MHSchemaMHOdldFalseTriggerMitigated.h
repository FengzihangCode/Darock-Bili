//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef MHSchemaMHOdldFalseTriggerMitigated_h
#define MHSchemaMHOdldFalseTriggerMitigated_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData, NSString;

@interface MHSchemaMHOdldFalseTriggerMitigated : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 odldScore; unsigned int x :1 odldScoreThreshold; unsigned int x :1 errorCode; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) float odldScore;
@property (nonatomic) BOOL hasOdldScore;
@property (nonatomic) float odldScoreThreshold;
@property (nonatomic) BOOL hasOdldScoreThreshold;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) BOOL hasErrorMessage;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteModelVersion;
- (void)deleteOdldScore;
- (void)deleteOdldScoreThreshold;
- (void)deleteErrorMessage;
- (void)deleteErrorCode;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* MHSchemaMHOdldFalseTriggerMitigated_h */