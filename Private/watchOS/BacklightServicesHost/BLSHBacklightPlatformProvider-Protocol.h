//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHBacklightPlatformProvider_Protocol_h
#define BLSHBacklightPlatformProvider_Protocol_h
@import Foundation;

@protocol BLSHBacklightPlatformProvider <NSObject>

@property (readonly, nonatomic) double backlightFadeInDuration;
@property (readonly, nonatomic) double backlightFadeOutDuration;
@property (readonly, nonatomic) NSObject<BLSHBacklightEnvironmentSessionProviding> *sessionProvider;
@property (readonly, nonatomic) BOOL showingBlankingWindow;
@property (readonly, nonatomic) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) BLSHFlipbookSpecification *flipbookSpecification;
@property (readonly, nonatomic) NSObject<BLSHFlipbookTelemetry> *flipbookTelemetryDelegate;
@property (readonly, nonatomic) BOOL useAlwaysOnBrightnessCurve;
@property (readonly, nonatomic) float backlightDimmedFactor;
@property (readonly, nonatomic) double backlightDimmingDuration;
@property (readonly, nonatomic) BOOL suppressionSupported;

/* instance methods */
- (void)showBlankingWindow:(BOOL)window withFadeDuration:(double)duration;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (BOOL)isShowingBlankingWindow;
@optional
/* instance methods */
- (void)useAlwaysOnBrightnessCurve:(BOOL)curve withRampDuration:(double)duration;
- (BOOL)isAlwaysOnEnabled;
- (BOOL)isUsingAlwaysOnBrightnessCurve;
@end

#endif /* BLSHBacklightPlatformProvider_Protocol_h */