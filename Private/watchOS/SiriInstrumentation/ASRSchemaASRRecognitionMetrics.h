//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef ASRSchemaASRRecognitionMetrics_h
#define ASRSchemaASRRecognitionMetrics_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "ASRSchemaASREmojiMetrics.h"
#include "ASRSchemaASRRecognizerComponents.h"

@class NSArray, NSData, NSString;

@interface ASRSchemaASRRecognitionMetrics : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 personalizedLanguageModelAgeInNs; unsigned int x :1 personalizedLanguageModelWeight; unsigned int x :1 averageActiveTokensPerFrame; unsigned int x :1 signalToNoiseRatioInDecibels; unsigned int x :1 recognitionDurationInNs; unsigned int x :1 audioDurationInNs; unsigned int x :1 eagerEnabled; unsigned int x :1 utteranceDetectionEnabled; unsigned int x :1 utteranceConcatenationEnabled; unsigned int x :1 continuousListeningEnabled; unsigned int x :1 eagerCustomerPerceivedLatencyInNs; unsigned int x :1 cpuRealTimeFactor; unsigned int x :1 numLanguageModelEnrollmentDataStreams; unsigned int x :1 inverseTextNormalizationDurationInNs; unsigned int x :1 inverseTextNormalizationDurationForFinalResultInNs; unsigned int x :1 numberOfInverseTextNormalizationRuns; unsigned int x :1 secondaryPassDurationInNs; unsigned int x :1 numberOfSecondaryPassRuns; unsigned int x :1 cpuInstructionsInMillionsPerSecond; unsigned int x :1 appleNeuralEngineCpuTimeInNs; unsigned int x :1 pageInsWaitTimeInNs; unsigned int x :1 recognitionHardware; } _has;
}

@property (nonatomic) unsigned long long personalizedLanguageModelAgeInNs;
@property (nonatomic) BOOL hasPersonalizedLanguageModelAgeInNs;
@property (nonatomic) float personalizedLanguageModelWeight;
@property (nonatomic) BOOL hasPersonalizedLanguageModelWeight;
@property (retain, nonatomic) ASRSchemaASRRecognizerComponents *recognizerComponents;
@property (nonatomic) BOOL hasRecognizerComponents;
@property (nonatomic) float averageActiveTokensPerFrame;
@property (nonatomic) BOOL hasAverageActiveTokensPerFrame;
@property (copy, nonatomic) NSArray *languageModelInterpolationWeights;
@property (nonatomic) float signalToNoiseRatioInDecibels;
@property (nonatomic) BOOL hasSignalToNoiseRatioInDecibels;
@property (nonatomic) unsigned long long recognitionDurationInNs;
@property (nonatomic) BOOL hasRecognitionDurationInNs;
@property (nonatomic) unsigned long long audioDurationInNs;
@property (nonatomic) BOOL hasAudioDurationInNs;
@property (nonatomic) BOOL eagerEnabled;
@property (nonatomic) BOOL hasEagerEnabled;
@property (nonatomic) BOOL utteranceDetectionEnabled;
@property (nonatomic) BOOL hasUtteranceDetectionEnabled;
@property (nonatomic) BOOL utteranceConcatenationEnabled;
@property (nonatomic) BOOL hasUtteranceConcatenationEnabled;
@property (nonatomic) BOOL continuousListeningEnabled;
@property (nonatomic) BOOL hasContinuousListeningEnabled;
@property (nonatomic) unsigned long long eagerCustomerPerceivedLatencyInNs;
@property (nonatomic) BOOL hasEagerCustomerPerceivedLatencyInNs;
@property (nonatomic) float cpuRealTimeFactor;
@property (nonatomic) BOOL hasCpuRealTimeFactor;
@property (nonatomic) unsigned int numLanguageModelEnrollmentDataStreams;
@property (nonatomic) BOOL hasNumLanguageModelEnrollmentDataStreams;
@property (copy, nonatomic) NSString *phoneticMatchDecoderName;
@property (nonatomic) BOOL hasPhoneticMatchDecoderName;
@property (nonatomic) unsigned long long inverseTextNormalizationDurationInNs;
@property (nonatomic) BOOL hasInverseTextNormalizationDurationInNs;
@property (retain, nonatomic) ASRSchemaASREmojiMetrics *emojiMetrics;
@property (nonatomic) BOOL hasEmojiMetrics;
@property (copy, nonatomic) NSArray *pausedAudioDurationsInNs;
@property (nonatomic) unsigned long long inverseTextNormalizationDurationForFinalResultInNs;
@property (nonatomic) BOOL hasInverseTextNormalizationDurationForFinalResultInNs;
@property (nonatomic) unsigned int numberOfInverseTextNormalizationRuns;
@property (nonatomic) BOOL hasNumberOfInverseTextNormalizationRuns;
@property (nonatomic) unsigned long long secondaryPassDurationInNs;
@property (nonatomic) BOOL hasSecondaryPassDurationInNs;
@property (nonatomic) unsigned int numberOfSecondaryPassRuns;
@property (nonatomic) BOOL hasNumberOfSecondaryPassRuns;
@property (nonatomic) unsigned long long cpuInstructionsInMillionsPerSecond;
@property (nonatomic) BOOL hasCpuInstructionsInMillionsPerSecond;
@property (nonatomic) unsigned long long appleNeuralEngineCpuTimeInNs;
@property (nonatomic) BOOL hasAppleNeuralEngineCpuTimeInNs;
@property (nonatomic) unsigned long long pageInsWaitTimeInNs;
@property (nonatomic) BOOL hasPageInsWaitTimeInNs;
@property (nonatomic) int recognitionHardware;
@property (nonatomic) BOOL hasRecognitionHardware;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deletePersonalizedLanguageModelAgeInNs;
- (void)deletePersonalizedLanguageModelWeight;
- (void)deleteRecognizerComponents;
- (void)deleteAverageActiveTokensPerFrame;
- (void)clearLanguageModelInterpolationWeights;
- (void)deleteLanguageModelInterpolationWeights;
- (void)addLanguageModelInterpolationWeights:(id)weights;
- (unsigned long long)languageModelInterpolationWeightsCount;
- (id)languageModelInterpolationWeightsAtIndex:(unsigned long long)index;
- (void)deleteSignalToNoiseRatioInDecibels;
- (void)deleteRecognitionDurationInNs;
- (void)deleteAudioDurationInNs;
- (void)deleteEagerEnabled;
- (void)deleteUtteranceDetectionEnabled;
- (void)deleteUtteranceConcatenationEnabled;
- (void)deleteContinuousListeningEnabled;
- (void)deleteEagerCustomerPerceivedLatencyInNs;
- (void)deleteCpuRealTimeFactor;
- (void)deleteNumLanguageModelEnrollmentDataStreams;
- (void)deletePhoneticMatchDecoderName;
- (void)deleteInverseTextNormalizationDurationInNs;
- (void)deleteEmojiMetrics;
- (void)clearPausedAudioDurationsInNs;
- (void)deletePausedAudioDurationsInNs;
- (void)addPausedAudioDurationsInNs:(unsigned long long)ns;
- (unsigned long long)pausedAudioDurationsInNsCount;
- (unsigned long long)pausedAudioDurationsInNsAtIndex:(unsigned long long)index;
- (void)deleteInverseTextNormalizationDurationForFinalResultInNs;
- (void)deleteNumberOfInverseTextNormalizationRuns;
- (void)deleteSecondaryPassDurationInNs;
- (void)deleteNumberOfSecondaryPassRuns;
- (void)deleteCpuInstructionsInMillionsPerSecond;
- (void)deleteAppleNeuralEngineCpuTimeInNs;
- (void)deletePageInsWaitTimeInNs;
- (void)deleteRecognitionHardware;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* ASRSchemaASRRecognitionMetrics_h */