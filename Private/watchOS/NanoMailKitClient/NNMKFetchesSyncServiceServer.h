//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKFetchesSyncServiceServer_h
#define NNMKFetchesSyncServiceServer_h
@import Foundation;

#include "NNMKSyncServiceEndpoint.h"

@protocol NNMKFetchesSyncServiceServerDelegate;

@interface NNMKFetchesSyncServiceServer : NNMKSyncServiceEndpoint

@property (weak, nonatomic) NSObject<NNMKFetchesSyncServiceServerDelegate> *delegate;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (void)requestPrepareForFullSync:(id)sync;
- (void)warnErrorDownloadingContentForMessage:(id)message notificationPriority:(BOOL)priority userRequested:(BOOL)requested;
- (void)notifyOldMessagesAvailable:(id)available;
- (void)notifyFetchRequestCompleted:(id)completed;
- (id)reportComposedMessageSendingProgress:(id)progress;
- (void)successfullySentProtobufWithIDSIdentifier:(id)idsidentifier;
- (void)failedSendingProtobufWithIDSIdentifier:(id)idsidentifier errorCode:(long long)code;
- (void)readProtobufData:(id)data type:(unsigned long long)type;
@end

#endif /* NNMKFetchesSyncServiceServer_h */