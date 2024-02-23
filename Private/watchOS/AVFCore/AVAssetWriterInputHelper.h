//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetWriterInputHelper_h
#define AVAssetWriterInputHelper_h
@import Foundation;

#include "AVAssetWriterInputConfigurationState.h"
#include "AVAssetWriterInputPassDescription.h"
#include "AVOutputSettings.h"
#include "AVWeakReference.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface AVAssetWriterInputHelper : NSObject

@property (readonly, nonatomic) AVAssetWriterInputConfigurationState *configurationState;
@property (retain) AVWeakReference *weakReferenceToAssetWriterInput;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) AVOutputSettings *outputSettings;
@property (readonly, nonatomic) struct opaqueCMFormatDescription * sourceFormatHint;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) int mediaTimeScale;
@property (readonly, nonatomic) BOOL readyForMoreMediaData;
@property (nonatomic) BOOL expectsMediaDataInRealTime;
@property (nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (nonatomic) BOOL marksOutputTrackAsEnabled;
@property (nonatomic) float preferredVolume;
@property (nonatomic) long long layer;
@property (nonatomic) short alternateGroupID;
@property (nonatomic) short provisionalAlternateGroupID;
@property (readonly, nonatomic) NSDictionary *trackReferences;
@property (nonatomic) BOOL performsMultiPassEncodingIfSupported;
@property (readonly, nonatomic) BOOL canPerformMultiplePasses;
@property (readonly, nonatomic) AVAssetWriterInputPassDescription *currentPassDescription;
@property (readonly, nonatomic) BOOL shouldRespondToInitialPassDescription;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } preferredMediaChunkDuration;
@property (nonatomic) long long preferredMediaChunkAlignment;
@property (nonatomic) long long preferredMediaChunkSize;
@property (copy, nonatomic) NSString *mediaDataLocation;
@property (copy, nonatomic) NSURL *sampleReferenceBaseURL;
@property (nonatomic) BOOL maximizePowerEfficiency;
@property (copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) struct __CVPixelBufferPool * pixelBufferPool;

/* instance methods */
- (id)initWithConfigurationState:(id)state;
- (void)dealloc;
- (id)description;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)status;
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)error;
- (BOOL)isReadyForMoreMediaData;
- (BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id *)reason;
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id /* block */)block;
- (void)stopRequestingMediaData;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)buffer error:(id *)error;
- (BOOL)appendPixelBuffer:(struct __CVBuffer *)buffer withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (BOOL)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup *)group withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)didStartInitialSession;
- (void)prepareToEndSession;
- (BOOL)prepareToFinishWritingReturningError:(id *)error;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)input type:(id)type;
- (void)addTrackAssociationWithTrackOfInput:(id)input type:(id)type;
- (id)availableTrackAssociationTypes;
- (id)associatedInputsWithTrackAssociationType:(id)type;
@end

#endif /* AVAssetWriterInputHelper_h */