//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetReaderOutput_h
#define AVAssetReaderOutput_h
@import Foundation;

#include "AVAssetReaderOutputInternal.h"
#include "AVWeakReference.h"

@class NSDictionary, NSString;

@interface AVAssetReaderOutput : NSObject {
  /* instance variables */
  AVAssetReaderOutputInternal *_internal;
}

@property (readonly, nonatomic) AVWeakReference *weakReferenceToAssetReader;
@property (nonatomic) int extractionID;
@property (readonly, nonatomic) NSDictionary *figAssetReaderExtractionOptions;
@property (readonly, nonatomic) BOOL trimsSampleDurations;
@property (readonly, nonatomic) NSString *mediaType;
@property (nonatomic) BOOL alwaysCopiesSampleData;

/* class methods */
+ (void)initialize;
+ (id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)settings withFormatDescription:(id)description;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)maximizePowerEfficiency;
- (void)setMaximizePowerEfficiency:(BOOL)efficiency;
- (BOOL)disablesMultithreadedAndAsyncVideoDecompression;
- (void)setDisablesMultithreadedAndAsyncVideoDecompression:(BOOL)decompression;
- (BOOL)supportsRandomAccess;
- (void)setSupportsRandomAccess:(BOOL)access;
- (id)_asset;
- (struct OpaqueFigAssetReader *)_figAssetReader;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader *)reader;
- (id)_weakReferenceToAssetReader;
- (void)_attachToWeakReferenceToAssetReader:(id)reader;
- (long long)_status;
- (int)_extractionID;
- (void)_setExtractionID:(int)id;
- (id)_figAssetReaderExtractionOptions;
- (BOOL)_trimsSampleDurations;
- (BOOL)_updateTimeRangesOnFigAssetReaderReturningError:(id *)error;
- (BOOL)_prepareForReadingReturningError:(id *)error;
- (BOOL)_enableTrackExtractionReturningError:(id *)error;
- (id)currentTimeRanges;
- (BOOL)_isFinished;
- (void)_markAsFinished;
- (void)_cancelReading;
- (id)_errorForOSStatus:(int)osstatus;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)id;
- (void)resetForReadingTimeRanges:(id)ranges;
- (void)markConfigurationAsFinal;
- (void)_figAssetReaderDecodeError;
- (void)_figAssetReaderFailed;
@end

#endif /* AVAssetReaderOutput_h */