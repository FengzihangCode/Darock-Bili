//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef NLXSchemaCDMUserWantedToRepeat_h
#define NLXSchemaCDMUserWantedToRepeat_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaUUID.h"

@class NSData;

@interface NLXSchemaCDMUserWantedToRepeat : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *systemDialogActId;
@property (nonatomic) BOOL hasSystemDialogActId;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteSystemDialogActId;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* NLXSchemaCDMUserWantedToRepeat_h */