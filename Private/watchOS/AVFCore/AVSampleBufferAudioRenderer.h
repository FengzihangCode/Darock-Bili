//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVSampleBufferAudioRenderer_h
#define AVSampleBufferAudioRenderer_h
@import Foundation;

#include "AVContentKeyRecipient-Protocol.h"
#include "AVContentKeyRecipientInternal-Protocol.h"
#include "AVIntegrityChecking-Protocol.h"
#include "AVMediaDataRequesterConsumer-Protocol.h"
#include "AVQueuedSampleBufferRendering-Protocol.h"
#include "AVQueuedSampleBufferRenderingInternal-Protocol.h"
#include "AVSampleBufferAudioRendererInternal.h"

@class NSError, NSString;

@interface AVSampleBufferAudioRenderer : NSObject<AVIntegrityChecking, AVContentKeyRecipient, AVContentKeyRecipientInternal, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering> {
  /* instance variables */
  AVSampleBufferAudioRendererInternal *_audioRendererInternal;
}

@property (readonly, nonatomic) BOOL defunct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *audioOutputDeviceUniqueID;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (nonatomic) unsigned long long allowedAudioSpatializationFormats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain) struct OpaqueCMTimebase * timebase;
@property (readonly) BOOL readyForMoreMediaData;
@property (readonly, nonatomic) BOOL hasSufficientMediaDataForReliablePlaybackStart;

/* class methods */
+ (id)currentFigAudioRendererFactory;
+ (void)setFigAudioRendererFactory:(id)factory forQueue:(id)queue;
+ (id)makeRendererLoggingIdentifier;
+ (id)sampleBufferAudioRenderer;

/* instance methods */
- (id)loggingIdentifier;
- (void)setLoggingIdentifier:(id)identifier;
- (int)_attachToContentKeySession:(id)session contentKeyBoss:(struct CMBaseObject *)boss failedSinceAlreadyAttachedToAnotherSession:(BOOL *)session;
- (BOOL)_attachedToExternalContentKeySession;
- (id)contentKeySession;
- (void)expire;
- (BOOL)isDefunct;
- (int)_initializeTimebase;
- (void)_triggerMediaRequestCallback;
- (void)_wasFlushedAutomaticallyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (int)_installNotificationHandlers;
- (void)_uninstallNotificationHandlers;
- (id)outputContext;
- (void)setOutputContext:(id)context;
- (id)init;
- (void)dealloc;
- (void)setAudioSession:(id)session;
- (id)audioSession;
- (void)_transitionToStatus:(long long)status error:(id)error;
- (void)_transitionToFailedStatusWithOSStatus:(int)osstatus;
- (BOOL)willTrimShortDurationSamples;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)processor;
- (struct opaqueMTAudioProcessingTap *)audioTapProcessor;
- (void)setVolume:(float)volume;
- (float)volume;
- (void)setMuted:(BOOL)muted;
- (BOOL)isMuted;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer * *)renderer;
- (BOOL)setRenderSynchronizer:(id)synchronizer error:(id *)error;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)buffer;
- (void)flush;
- (void)flushFromSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time completionHandler:(id /* block */)handler;
- (BOOL)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id /* block */)block;
- (void)stopRequestingMediaData;
@end

#endif /* AVSampleBufferAudioRenderer_h */