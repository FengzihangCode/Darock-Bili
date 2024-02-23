//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SSRSpeakerRecognizer_Protocol_h
#define SSRSpeakerRecognizer_Protocol_h
@import Foundation;

@protocol SSRSpeakerRecognizer <NSObject>

@property (readonly, nonatomic) NSDictionary *lastScoreCard;

/* instance methods */
- (id)initWithContext:(id)context delegate:(id)delegate;
- (void)processAudioData:(id)data numSamples:(unsigned long long)samples;
- (void)endAudio;
- (void)resetWithContext:(id)context;
@end

#endif /* SSRSpeakerRecognizer_Protocol_h */