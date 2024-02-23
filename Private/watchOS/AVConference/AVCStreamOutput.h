//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef AVCStreamOutput_h
#define AVCStreamOutput_h
@import Foundation;

#include "AVCStreamOutputDelegate-Protocol.h"
#include "AVConferenceXPCClient.h"
#include "VCRemoteVideoManagerStreamOutputDelegate-Protocol.h"
#include "VCStreamOutput.h"

@class NSString, VCWeakObjectHolder;
@protocol OS_dispatch_queue;

@interface AVCStreamOutput : NSObject<VCRemoteVideoManagerStreamOutputDelegate> {
  /* instance variables */
  AVConferenceXPCClient *_connection;
  struct __CFDictionary * _attachments;
  BOOL _isMediaStalled;
  int _processID;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastHealthPrintTime;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSampleBufferTime;
  unsigned int _sampleBufferCount;
  float _estimatedDataRate;
  VCStreamOutput *_vcStreamOutput;
  BOOL _printSampleBufferDetailsEnabled;
  struct opaqueVCRemoteImageQueue * _receiverQueue;
  VCWeakObjectHolder *_weakSelf;
}

@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) BOOL isDegraded;
@property (nonatomic) BOOL isSuspended;
@property (nonatomic) BOOL isValid;
@property (nonatomic) NSObject<AVCStreamOutputDelegate> *delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalReceiverQueue;
@property (readonly, nonatomic) long long streamToken;
@property (nonatomic) float synchronizationTimeOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStreamToken:(long long)token delegate:(id)delegate queue:(id)queue error:(id *)error;
- (void)dealloc;
- (void)setupDelegateQueue:(id)queue;
- (int)createReceiverQueue;
- (int)setupXPCConnection;
- (void)remoteQueueOperationHandlerWithError:(int)error operation:(struct FigRemoteOperation { int x0; int x1; unsigned long long x2; struct __CFString * x3; union { struct { struct __CFDictionary * x0; struct __CFDictionary * x1; } x0; struct { void * x0; struct __IOSurface * x1; struct __IOSurface * x2; } x1; struct { struct opaqueCMSampleBuffer * x0; unsigned long long x1; struct __CFArray * x2; } x2; struct { struct opaqueCMFormatDescription * x0; } x3; struct { long long x0; struct opaqueCMFormatDescription * x1; } x4; } x4; } *)operation;
- (int)setupRemoteQueueWithSenderQueue:(id)queue;
- (void)didPause:(BOOL)pause;
- (void)didStall:(BOOL)stall;
- (void)didDegrade:(BOOL)degrade;
- (void)didSuspend:(BOOL)suspend;
- (void)didInvalidate;
- (void)didUpdateAttachments:(struct __CFDictionary *)attachments;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)buffer;
- (int)processID;
- (void)serviceHandlerDidDieWithArguments:(id)arguments error:(id)error;
- (void)serviceHandlerDidPauseWithArguments:(id)arguments error:(id)error;
- (void)serviceHandlerDidStallWithArguments:(id)arguments error:(id)error;
- (void)serviceHandlerDidDegradeWithArguments:(id)arguments error:(id)error;
- (void)serviceHandlerDidSuspendWithArguments:(id)arguments error:(id)error;
- (void)serviceHandlerDidReleaseOutputQueueWithArguments:(id)arguments error:(id)error;
- (void)serviceHandlerDidReceiveFrameWithArguments:(id)arguments error:(id)error;
- (void)registerBlocksForNotification;
- (void)deregisterBlocksForNotifications;
- (void)terminateConnection;
@end

#endif /* AVCStreamOutput_h */