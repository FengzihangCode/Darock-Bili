//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef INFERENCESchemaINFERENCEContactSignalSet_h
#define INFERENCESchemaINFERENCEContactSignalSet_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "INFERENCESchemaINFERENCEPrivatizedHistoryStats.h"
#include "INFERENCESchemaINFERENCERequestMatchSignalSet.h"
#include "INFERENCESchemaINFERENCESpeechAlternativeRanks.h"

@class NSArray, NSData, NSString;

@interface INFERENCESchemaINFERENCEContactSignalSet : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 isQueryStrippedOfTitles; unsigned int x :1 isSuggestedContact; unsigned int x :1 areAllQueryTokensInContact; unsigned int x :1 areAllPrimaryContactTokensInQuery; unsigned int x :1 isHypocorism; unsigned int x :1 hasSuggestedProperties; unsigned int x :1 isPartialNameMatch; unsigned int x :1 isFromStandardSearch; unsigned int x :1 isFromNLXSearch; unsigned int x :1 isFromSRRSearch; unsigned int x :1 nlxScore; unsigned int x :1 srrScore; unsigned int x :1 isRecent; unsigned int x :1 isRecentInSameDomain; unsigned int x :1 isRecentInSiriRequest; unsigned int x :1 isRecentlyCorrected; unsigned int x :1 recencyRank; unsigned int x :1 recencyRankInSameDomain; unsigned int x :1 recencyRankInSiriRequest; unsigned int x :1 isMeCard; unsigned int x :1 isMeCardRelation; unsigned int x :1 isMeCardRelationExactMatch; unsigned int x :1 isRelationAlias; unsigned int x :1 areQueryDiacriticsRemoved; unsigned int x :1 isQueryNameDerivedFromRelationshipLabel; unsigned int x :1 isQueryRelationshipLabelDerivedFromName; unsigned int x :1 isThirdPartyMatch; unsigned int x :1 isFavorite; unsigned int x :1 isTransliterated; unsigned int x :1 hasHandleWithPreferredType; unsigned int x :1 hasHandleWithAllowedType; unsigned int x :1 isCommunalRequest; unsigned int x :1 fractionOfCommunalDevicesMatchingCandidate; unsigned int x :1 isPlusSignal; unsigned int x :1 isOnlyCandidate; unsigned int x :1 isQueryNormalized; unsigned int x :1 isQueryStrippedOfPunctuation; unsigned int x :1 isQueryStrippedOfWhitespace; unsigned int x :1 isQueryStrippedOfSymbols; } _has;
}

@property (retain, nonatomic) INFERENCESchemaINFERENCESpeechAlternativeRanks *speechAlternativeRanks;
@property (nonatomic) BOOL hasSpeechAlternativeRanks;
@property (nonatomic) BOOL isQueryStrippedOfTitles;
@property (nonatomic) BOOL hasIsQueryStrippedOfTitles;
@property (nonatomic) BOOL isSuggestedContact;
@property (nonatomic) BOOL hasIsSuggestedContact;
@property (nonatomic) BOOL areAllQueryTokensInContact;
@property (nonatomic) BOOL hasAreAllQueryTokensInContact;
@property (nonatomic) BOOL areAllPrimaryContactTokensInQuery;
@property (nonatomic) BOOL hasAreAllPrimaryContactTokensInQuery;
@property (nonatomic) BOOL isHypocorism;
@property (nonatomic) BOOL hasIsHypocorism;
@property (nonatomic) BOOL hasSuggestedProperties;
@property (nonatomic) BOOL hasHasSuggestedProperties;
@property (nonatomic) BOOL isPartialNameMatch;
@property (nonatomic) BOOL hasIsPartialNameMatch;
@property (nonatomic) BOOL isFromStandardSearch;
@property (nonatomic) BOOL hasIsFromStandardSearch;
@property (nonatomic) BOOL isFromNLXSearch;
@property (nonatomic) BOOL hasIsFromNLXSearch;
@property (nonatomic) BOOL isFromSRRSearch;
@property (nonatomic) BOOL hasIsFromSRRSearch;
@property (nonatomic) float nlxScore;
@property (nonatomic) BOOL hasNlxScore;
@property (nonatomic) float srrScore;
@property (nonatomic) BOOL hasSrrScore;
@property (nonatomic) BOOL isRecent;
@property (nonatomic) BOOL hasIsRecent;
@property (nonatomic) BOOL isRecentInSameDomain;
@property (nonatomic) BOOL hasIsRecentInSameDomain;
@property (nonatomic) BOOL isRecentInSiriRequest;
@property (nonatomic) BOOL hasIsRecentInSiriRequest;
@property (nonatomic) BOOL isRecentlyCorrected;
@property (nonatomic) BOOL hasIsRecentlyCorrected;
@property (nonatomic) int recencyRank;
@property (nonatomic) BOOL hasRecencyRank;
@property (nonatomic) int recencyRankInSameDomain;
@property (nonatomic) BOOL hasRecencyRankInSameDomain;
@property (nonatomic) int recencyRankInSiriRequest;
@property (nonatomic) BOOL hasRecencyRankInSiriRequest;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStats;
@property (nonatomic) BOOL hasHistoryStats;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStatsInSameDomain;
@property (nonatomic) BOOL hasHistoryStatsInSameDomain;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStatsInSiriRequests;
@property (nonatomic) BOOL hasHistoryStatsInSiriRequests;
@property (nonatomic) BOOL isMeCard;
@property (nonatomic) BOOL hasIsMeCard;
@property (nonatomic) BOOL isMeCardRelation;
@property (nonatomic) BOOL hasIsMeCardRelation;
@property (nonatomic) BOOL isMeCardRelationExactMatch;
@property (nonatomic) BOOL hasIsMeCardRelationExactMatch;
@property (nonatomic) BOOL isRelationAlias;
@property (nonatomic) BOOL hasIsRelationAlias;
@property (nonatomic) BOOL areQueryDiacriticsRemoved;
@property (nonatomic) BOOL hasAreQueryDiacriticsRemoved;
@property (nonatomic) BOOL isQueryNameDerivedFromRelationshipLabel;
@property (nonatomic) BOOL hasIsQueryNameDerivedFromRelationshipLabel;
@property (nonatomic) BOOL isQueryRelationshipLabelDerivedFromName;
@property (nonatomic) BOOL hasIsQueryRelationshipLabelDerivedFromName;
@property (nonatomic) BOOL isThirdPartyMatch;
@property (nonatomic) BOOL hasIsThirdPartyMatch;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL hasIsFavorite;
@property (nonatomic) BOOL isTransliterated;
@property (nonatomic) BOOL hasIsTransliterated;
@property (retain, nonatomic) INFERENCESchemaINFERENCERequestMatchSignalSet *requestMatchSignalSet;
@property (nonatomic) BOOL hasRequestMatchSignalSet;
@property (copy, nonatomic) NSArray *handlesWithPrivacySignalSets;
@property (nonatomic) BOOL hasHandleWithPreferredType;
@property (nonatomic) BOOL hasHasHandleWithPreferredType;
@property (nonatomic) BOOL hasHandleWithAllowedType;
@property (nonatomic) BOOL hasHasHandleWithAllowedType;
@property (nonatomic) BOOL isCommunalRequest;
@property (nonatomic) BOOL hasIsCommunalRequest;
@property (nonatomic) float fractionOfCommunalDevicesMatchingCandidate;
@property (nonatomic) BOOL hasFractionOfCommunalDevicesMatchingCandidate;
@property (nonatomic) BOOL isPlusSignal;
@property (nonatomic) BOOL hasIsPlusSignal;
@property (nonatomic) BOOL isOnlyCandidate;
@property (nonatomic) BOOL hasIsOnlyCandidate;
@property (copy, nonatomic) NSString *thirdPartyAppBundleId;
@property (nonatomic) BOOL hasThirdPartyAppBundleId;
@property (nonatomic) BOOL isQueryNormalized;
@property (nonatomic) BOOL hasIsQueryNormalized;
@property (nonatomic) BOOL isQueryStrippedOfPunctuation;
@property (nonatomic) BOOL hasIsQueryStrippedOfPunctuation;
@property (nonatomic) BOOL isQueryStrippedOfWhitespace;
@property (nonatomic) BOOL hasIsQueryStrippedOfWhitespace;
@property (nonatomic) BOOL isQueryStrippedOfSymbols;
@property (nonatomic) BOOL hasIsQueryStrippedOfSymbols;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteSpeechAlternativeRanks;
- (void)deleteIsQueryStrippedOfTitles;
- (void)deleteIsSuggestedContact;
- (void)deleteAreAllQueryTokensInContact;
- (void)deleteAreAllPrimaryContactTokensInQuery;
- (void)deleteIsHypocorism;
- (void)deleteHasSuggestedProperties;
- (void)deleteIsPartialNameMatch;
- (void)deleteIsFromStandardSearch;
- (void)deleteIsFromNLXSearch;
- (void)deleteIsFromSRRSearch;
- (void)deleteNlxScore;
- (void)deleteSrrScore;
- (void)deleteIsRecent;
- (void)deleteIsRecentInSameDomain;
- (void)deleteIsRecentInSiriRequest;
- (void)deleteIsRecentlyCorrected;
- (void)deleteRecencyRank;
- (void)deleteRecencyRankInSameDomain;
- (void)deleteRecencyRankInSiriRequest;
- (void)deleteHistoryStats;
- (void)deleteHistoryStatsInSameDomain;
- (void)deleteHistoryStatsInSiriRequests;
- (void)deleteIsMeCard;
- (void)deleteIsMeCardRelation;
- (void)deleteIsMeCardRelationExactMatch;
- (void)deleteIsRelationAlias;
- (void)deleteAreQueryDiacriticsRemoved;
- (void)deleteIsQueryNameDerivedFromRelationshipLabel;
- (void)deleteIsQueryRelationshipLabelDerivedFromName;
- (void)deleteIsThirdPartyMatch;
- (void)deleteIsFavorite;
- (void)deleteIsTransliterated;
- (void)deleteRequestMatchSignalSet;
- (void)clearHandlesWithPrivacySignalSets;
- (void)deleteHandlesWithPrivacySignalSets;
- (void)addHandlesWithPrivacySignalSets:(id)sets;
- (unsigned long long)handlesWithPrivacySignalSetsCount;
- (id)handlesWithPrivacySignalSetsAtIndex:(unsigned long long)index;
- (void)deleteHasHandleWithPreferredType;
- (void)deleteHasHandleWithAllowedType;
- (void)deleteIsCommunalRequest;
- (void)deleteFractionOfCommunalDevicesMatchingCandidate;
- (void)deleteIsPlusSignal;
- (void)deleteIsOnlyCandidate;
- (void)deleteThirdPartyAppBundleId;
- (void)deleteIsQueryNormalized;
- (void)deleteIsQueryStrippedOfPunctuation;
- (void)deleteIsQueryStrippedOfWhitespace;
- (void)deleteIsQueryStrippedOfSymbols;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* INFERENCESchemaINFERENCEContactSignalSet_h */