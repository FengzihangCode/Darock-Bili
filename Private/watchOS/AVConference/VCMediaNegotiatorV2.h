//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaNegotiatorV2_h
#define VCMediaNegotiatorV2_h
@import Foundation;

#include "VCMediaNegotiatorBase.h"

@interface VCMediaNegotiatorV2 : VCMediaNegotiatorBase
/* class methods */
+ (id)newCompressedBlob:(id)blob;
+ (id)newDecompressedBlob:(id)blob;
+ (id)newUnserializedMediaBlob:(id)blob;
+ (BOOL)initializeLocalConfiguration:(id)configuration negotiationData:(id)data deviceRole:(int)role preferredAudioPayload:(int)payload;
+ (void)dumpRemoteNegotiationData:(id)data forceFileDump:(BOOL)dump;
+ (id)featureStringWithMediaBlob:(id)blob;
+ (unsigned int)capabilitiesWithMomentSettings:(id)settings;
+ (id)streamGroupIDsWithMediaBlob:(id)blob;
+ (BOOL)updateStreamGroupU1Config:(id)config forGroupId:(unsigned int)id withNegotiationBlob:(id)blob streamGroupBlob:(id)blob localSupportedVideoPayloads:(id)payloads;
+ (BOOL)updateCameraU1Config:(id)config forNegotiationBlob:(id)blob localSupportedVideoPayloads:(id)payloads;
+ (BOOL)updateScreenU1ConfigWithStreamGroupConfig:(id)config forNegotiationBlob:(id)blob streamGroupBlob:(id)blob localSupportedVideoPayloads:(id)payloads;

/* instance methods */
- (id)negotiationData;
- (BOOL)processRemoteNegotiationData:(id)data;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)mode connectionType:(int)type;
- (BOOL)appendGeneralInfoToMediaBlob:(id)blob;
- (BOOL)appendBandwidthSettingsToMediaBlob:(id)blob;
- (BOOL)appendCodecFeaturesToMediaBlob:(id)blob;
- (BOOL)appendMicrophoneOneToOneSettingsToMediaBlob:(id)blob;
- (BOOL)appendCameraOneToOneSettingsToMediaBlob:(id)blob;
- (BOOL)appendMomentsSettingsToMediaBlob:(id)blob;
- (BOOL)appendStreamGroupsToMediaBlob:(id)blob;
- (BOOL)setupNegotiatedResultsWithRemoteMediaBlob:(id)blob;
- (void)setupNegotiatedAudioResultsWithRemoteMediaBlob:(id)blob;
- (id)newNegotiatedSystemAudioResultsWithRemoteMediaBlob:(id)blob;
- (BOOL)selectBestDecodeVideoRuleForTransport:(unsigned char)transport payload:(int)payload localVideoRuleCollection:(id)collection remoteVideoRuleCollection:(id)collection;
- (BOOL)setupNegotiatedVideoSettingsWithRemoteMediaBlob:(id)blob;
- (BOOL)setupNegotiatedMomentsResultsWithRemoteMediaBlob:(id)blob;
- (BOOL)mediaBlobHasFLSPerCodec:(id)codec;
- (BOOL)negotiateStreamGroupConfig:(id)config remoteInviteBlob:(id)blob;
- (BOOL)setupStreamGroupsWithRemoteMediaBlob:(id)blob;
- (BOOL)negotiateU1SettingsForStreamGroup:(id)group;
- (void)setupNegotiatedFaceTimeSettingsWithRemoteMediaBlob:(id)blob;
@end

#endif /* VCMediaNegotiatorV2_h */