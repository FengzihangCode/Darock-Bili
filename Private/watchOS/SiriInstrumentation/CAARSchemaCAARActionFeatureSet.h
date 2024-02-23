//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef CAARSchemaCAARActionFeatureSet_h
#define CAARSchemaCAARActionFeatureSet_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "CAARSchemaCAARActionLevelDisambiguationHistory.h"
#include "CAARSchemaCAARAppHistoryFeatures.h"
#include "CAARSchemaCAARAppLevelDisambiguationHistory.h"
#include "CAARSchemaCAARProactiveFeatures.h"
#include "SISchemaUUID.h"

@class NSData, NSString;

@interface CAARSchemaCAARActionFeatureSet : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 isHighConfidence; unsigned int x :1 isAppInForeground; unsigned int x :1 appNameMentioned; unsigned int x :1 isTopRankedPlugin; unsigned int x :1 entityTypeMentioned; unsigned int x :1 isColdOpenAllowlist; unsigned int x :1 isLinkActionOnScreen; unsigned int x :1 isDefaultLinkAction; unsigned int x :1 isVocabNameMatch; unsigned int x :1 isLinkAction; unsigned int x :1 isAutoshortcut; unsigned int x :1 isAutoshortcutAppOnScreen; unsigned int x :1 entitySaliencyMaxScore; unsigned int x :1 numSalientEntities; unsigned int x :1 nlParseProbability; unsigned int x :1 isTopRankedParse; unsigned int x :1 isRepeatedFlowHandlerId; unsigned int x :1 isAutoShortcutEnabled; unsigned int x :1 isAmbiguousFirstRunPreviouslyShown; unsigned int x :1 isInterpretableAsUniversalCommand; unsigned int x :1 domainProtectionLevel; } _has;
}

@property (retain, nonatomic) SISchemaUUID *actionCandidateId;
@property (nonatomic) BOOL hasActionCandidateId;
@property (nonatomic) BOOL isHighConfidence;
@property (nonatomic) BOOL hasIsHighConfidence;
@property (nonatomic) BOOL isAppInForeground;
@property (nonatomic) BOOL hasIsAppInForeground;
@property (nonatomic) BOOL appNameMentioned;
@property (nonatomic) BOOL hasAppNameMentioned;
@property (nonatomic) BOOL isTopRankedPlugin;
@property (nonatomic) BOOL hasIsTopRankedPlugin;
@property (nonatomic) BOOL entityTypeMentioned;
@property (nonatomic) BOOL hasEntityTypeMentioned;
@property (nonatomic) BOOL isColdOpenAllowlist;
@property (nonatomic) BOOL hasIsColdOpenAllowlist;
@property (nonatomic) BOOL isLinkActionOnScreen;
@property (nonatomic) BOOL hasIsLinkActionOnScreen;
@property (nonatomic) BOOL isDefaultLinkAction;
@property (nonatomic) BOOL hasIsDefaultLinkAction;
@property (nonatomic) BOOL isVocabNameMatch;
@property (nonatomic) BOOL hasIsVocabNameMatch;
@property (nonatomic) BOOL isLinkAction;
@property (nonatomic) BOOL hasIsLinkAction;
@property (nonatomic) BOOL isAutoshortcut;
@property (nonatomic) BOOL hasIsAutoshortcut;
@property (nonatomic) BOOL isAutoshortcutAppOnScreen;
@property (nonatomic) BOOL hasIsAutoshortcutAppOnScreen;
@property (nonatomic) unsigned int entitySaliencyMaxScore;
@property (nonatomic) BOOL hasEntitySaliencyMaxScore;
@property (nonatomic) unsigned int numSalientEntities;
@property (nonatomic) BOOL hasNumSalientEntities;
@property (nonatomic) float nlParseProbability;
@property (nonatomic) BOOL hasNlParseProbability;
@property (nonatomic) BOOL isTopRankedParse;
@property (nonatomic) BOOL hasIsTopRankedParse;
@property (nonatomic) BOOL isRepeatedFlowHandlerId;
@property (nonatomic) BOOL hasIsRepeatedFlowHandlerId;
@property (retain, nonatomic) CAARSchemaCAARAppHistoryFeatures *appHistoryFeatures;
@property (nonatomic) BOOL hasAppHistoryFeatures;
@property (retain, nonatomic) CAARSchemaCAARAppLevelDisambiguationHistory *appLevelDisambiguationHistory;
@property (nonatomic) BOOL hasAppLevelDisambiguationHistory;
@property (retain, nonatomic) CAARSchemaCAARActionLevelDisambiguationHistory *actionLevelDisambiguationHistory;
@property (nonatomic) BOOL hasActionLevelDisambiguationHistory;
@property (retain, nonatomic) CAARSchemaCAARProactiveFeatures *proactiveFeatures;
@property (nonatomic) BOOL hasProactiveFeatures;
@property (nonatomic) BOOL isAutoShortcutEnabled;
@property (nonatomic) BOOL hasIsAutoShortcutEnabled;
@property (nonatomic) BOOL isAmbiguousFirstRunPreviouslyShown;
@property (nonatomic) BOOL hasIsAmbiguousFirstRunPreviouslyShown;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (nonatomic) BOOL hasActionIdentifier;
@property (nonatomic) BOOL isInterpretableAsUniversalCommand;
@property (nonatomic) BOOL hasIsInterpretableAsUniversalCommand;
@property (nonatomic) int domainProtectionLevel;
@property (nonatomic) BOOL hasDomainProtectionLevel;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteActionCandidateId;
- (void)deleteIsHighConfidence;
- (void)deleteIsAppInForeground;
- (void)deleteAppNameMentioned;
- (void)deleteIsTopRankedPlugin;
- (void)deleteEntityTypeMentioned;
- (void)deleteIsColdOpenAllowlist;
- (void)deleteIsLinkActionOnScreen;
- (void)deleteIsDefaultLinkAction;
- (void)deleteIsVocabNameMatch;
- (void)deleteIsLinkAction;
- (void)deleteIsAutoshortcut;
- (void)deleteIsAutoshortcutAppOnScreen;
- (void)deleteEntitySaliencyMaxScore;
- (void)deleteNumSalientEntities;
- (void)deleteNlParseProbability;
- (void)deleteIsTopRankedParse;
- (void)deleteIsRepeatedFlowHandlerId;
- (void)deleteAppHistoryFeatures;
- (void)deleteAppLevelDisambiguationHistory;
- (void)deleteActionLevelDisambiguationHistory;
- (void)deleteProactiveFeatures;
- (void)deleteIsAutoShortcutEnabled;
- (void)deleteIsAmbiguousFirstRunPreviouslyShown;
- (void)deleteActionIdentifier;
- (void)deleteIsInterpretableAsUniversalCommand;
- (void)deleteDomainProtectionLevel;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* CAARSchemaCAARActionFeatureSet_h */