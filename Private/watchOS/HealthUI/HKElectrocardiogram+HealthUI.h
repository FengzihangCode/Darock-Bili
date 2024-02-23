//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKElectrocardiogram_HealthUI_h
#define HKElectrocardiogram_HealthUI_h
@import Foundation;

@interface HKElectrocardiogram (HealthUI)
/* class methods */
+ (id)createWithCodableECG:(id)ecg;
+ (id)hk_defaultCardHeaderColor;
+ (id)hk_defaultCardBackgroundColor;
+ (id)hk_defaultClassificationTextColor;
+ (id)hk_abnormalClassificationTextColor;
+ (id)hk_defaultTimeStampTextColor;
+ (id)hk_abnormalTimeStampTextColor;
+ (id)hk_defaultTimeStampCompositingFilter;
+ (id)hk_defaultBPMTextColor;
+ (id)hk_defaultNumSymptomsTextColor;
+ (id)hk_abnormalCardHeaderColor;
+ (id)hk_abnormalTimeStampCompositingFilter;
+ (id)hk_abnormalBPMTextColor;
+ (id)hk_positiveNumSymptomsTextColor;
+ (id)hk_onboardingCardHeaderColor;
+ (id)hk_onboardingCardBackgroundColor;
+ (id)hk_localizedAverageBPM:(id)bpm;

/* instance methods */
- (id)codableECG;
- (id)hk_waveformPathsWithNumberOfValues:(long long)values fitToWidth:(double)width pointsPerMillivolt:(double)millivolt minimumValueInMillivolts:(float)millivolts maximumValueInMillivolts:(float)millivolts;
- (id)_hk_waveformPathsWithNumberOfValues:(long long)values transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform maximumNumberOfValuesPerPath:(long long)path shouldResetXValues:(BOOL)xvalues initialValuesToOmit:(long long)omit minimumValueInMicrovolts:(float)microvolts maximumValueInMicrovolts:(float)microvolts;
- (id)hk_waveformPathsWithPointsPerSecond:(double)second pointsPerMillivolt:(double)millivolt minimumValueInMillivolts:(float)millivolts maximumValueInMillivolts:(float)millivolts;
- (id)hk_waveformPathsWithPointsPerSecond:(double)second pointsPerMillivolt:(double)millivolt wrappingDuration:(double)duration omittingInitialDuration:(double)duration;
- (id)hk_waveformPathsWithPointsPerSecond:(double)second pointsPerMillivolt:(double)millivolt wrappingDuration:(double)duration omittingInitialDuration:(double)duration minimumValueInMillivolts:(float)millivolts maximumValueInMillivolts:(float)millivolts;
- (id)_hk_waveformPathsWithPointsPerSecond:(double)second pointsPerMillivolt:(double)millivolt maximumNumberOfValuesPerPath:(long long)path shouldResetXValues:(BOOL)xvalues initialValuesToOmit:(long long)omit minimumValueInMicrovolts:(float)microvolts maximumValueInMicrovolts:(float)microvolts;
- (BOOL)hk_isClassificationSupported;
- (BOOL)hk_isPossibleAtrialFibrillation;
- (BOOL)hk_hasPositiveSymptoms;
- (BOOL)hk_isSymptomsNotSet;
- (BOOL)hk_isSymptomsNoSymptoms;
- (id)hk_cardHeaderColor;
- (id)hk_cardBackgroundColor;
- (id)hk_classificationTextColor;
- (id)hk_timeStampTextColor;
- (id)hk_timeStampCompositingFilter;
- (id)hk_BPMTextColor;
- (BOOL)hk_isBPMTextBold;
- (id)hk_numSymptomsTextColor;
- (id)hk_localizedAverageBPM;
- (id)hk_localizedDuration;
- (id)hk_localizedNumSymptoms;
- (id)hk_localizedUppercaseNumSymptoms;
- (BOOL)_hk_classificationHasAbnormalHeaderColorAndStyle;
- (BOOL)_hk_classificationHasAbnormalBPMFontColorAndStyle;
@end

#endif /* HKElectrocardiogram_HealthUI_h */