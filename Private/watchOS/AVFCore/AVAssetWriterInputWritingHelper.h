//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetWriterInputWritingHelper_h
#define AVAssetWriterInputWritingHelper_h
@import Foundation;

#include "AVAssetWriterInputHelper.h"
#include "AVAssetWriterInputMediaDataRequester.h"
#include "AVAssetWriterInputMediaDataRequesterDelegate-Protocol.h"
#include "AVAssetWriterInputPassDescription.h"
#include "AVFigAssetWriterTrack.h"
#include "AVKeyPathDependencyHost-Protocol.h"
#include "AVKeyPathDependencyManager.h"
#include "AVWeakObservable-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper<AVAssetWriterInputMediaDataRequesterDelegate, AVWeakObservable, AVKeyPathDependencyHost> {
  /* instance variables */
  AVAssetWriterInputMediaDataRequester *_mediaDataRequester;
  BOOL _observingSelf;
  struct __CVPixelBufferPool * _pixelBufferPool;
  AVKeyPathDependencyManager *_keyPathDependencyManager;
  NSObject<OS_dispatch_queue> *_mediaDataRequesterSerialQueue;
  NSObject<OS_dispatch_queue> *_readyForMoreMediaDataObserverSerialQueue;
}

@property (readonly, nonatomic) AVFigAssetWriterTrack *assetWriterTrack;
@property (retain, nonatomic) AVAssetWriterInputPassDescription *currentPassDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfigurationState:(id)state;
- (id)initWithConfigurationState:(id)state assetWriterTrack:(id)track error:(id *)error;
- (void)addCallbackToCancelDuringDeallocation:(id)deallocation;
- (void)dealloc;
- (long long)status;
- (BOOL)canPerformMultiplePasses;
- (void)declareKeyPathDependenciesWithRegistry:(id)registry;
- (BOOL)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id /* block */)block;
- (void)stopRequestingMediaData;
- (void)_nudgeMediaDataRequesterIfAppropriate:(id)appropriate;
- (BOOL)mediaDataRequesterShouldRequestMediaData;
- (void)_startObservingReadyForMoreMediaDataKeyPath;
- (void)_stopObservingReadyForMoreMediaDataKeyPath;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)didStartInitialSession;
- (void)beginPassIfAppropriate;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)buffer error:(id *)error;
- (BOOL)appendPixelBuffer:(struct __CVBuffer *)buffer withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (BOOL)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup *)group withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)prepareToEndSession;
- (BOOL)prepareToFinishWritingReturningError:(id *)error;
- (void)markCurrentPassAsFinished;
- (void)markAsFinished;
- (void)markAsFinishedAndTransitionCurrentHelper:(id)helper;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)status;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (id)_assetWriterTrack;
@end

#endif /* AVAssetWriterInputWritingHelper_h */