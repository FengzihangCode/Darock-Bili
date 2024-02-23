//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 267.0.0.0.0
//
#ifndef CompanionSync_h
#define CompanionSync_h

#import "NMSIncomingFileTransfer.h"
#import "NMSIncomingRequest.h"
#import "NMSIncomingResponse.h"
#import "NMSMessageCenter.h"
#import "NMSMessagePersistentContext.h"
#import "NMSObfuscatableDescription.h"
#import "NMSObfuscatableDescriptionItem.h"
#import "NMSOutgoingFileTransfer.h"
#import "NMSOutgoingRequest.h"
#import "NMSOutgoingResponse.h"
#import "NMSPBMapping.h"
#import "NMSPersistentDictionary.h"
#import "NMSWindowData.h"
#import "SYAtomicFIFO.h"
#import "SYBatchChunkAck.h"
#import "SYBatchSyncChunk.h"
#import "SYBatchSyncEnd.h"
#import "SYBatchSyncStart.h"
#import "SYChange.h"
#import "SYChangeMessage.h"
#import "SYClock.h"
#import "SYCompressedFileInputStream.h"
#import "SYCompressedFileOutputStream.h"
#import "SYCompressingOutputStream.h"
#import "SYDecompressingInputStream.h"
#import "SYDegenerateChange.h"
#import "SYDeletedObject.h"
#import "SYDevice.h"
#import "SYDictionaryObject.h"
#import "SYEndSyncSession.h"
#import "SYEndSyncSessionResponse.h"
#import "SYErrorInfo.h"
#import "SYFileTransferInfo.h"
#import "SYFileTransferSyncEngine.h"
#import "SYFullSyncRequestAck.h"
#import "SYIncomingBatchSyncSession.h"
#import "SYIncomingFullSyncSession.h"
#import "SYIncomingSyncAllObjectsSession.h"
#import "SYIncomingTransactionSession.h"
#import "SYInputStreamTransaction.h"
#import "SYLegacyStore.h"
#import "SYLogDeviceState.h"
#import "SYLogEngineState.h"
#import "SYLogErrorInfo.h"
#import "SYLogMultiSuspendableQueueState.h"
#import "SYLogPeerIDPair.h"
#import "SYLogServiceState.h"
#import "SYLogSessionState.h"
#import "SYLogTransportOption.h"
#import "SYLogs.h"
#import "SYMessageHeader.h"
#import "SYMessageStatusRecord.h"
#import "SYMessengerSyncEngine.h"
#import "SYObjectChangeSet.h"
#import "SYObjectWrapper.h"
#import "SYOutOfBandData.h"
#import "SYOutgoingBatchSyncSession.h"
#import "SYOutgoingDeltaTransactionSession.h"
#import "SYOutgoingSyncAllObjectsSession.h"
#import "SYOutputStreamTransaction.h"
#import "SYPeer.h"
#import "SYPersistentStore.h"
#import "SYQueueDumper.h"
#import "SYReceivingSession.h"
#import "SYRejectedVersion.h"
#import "SYRequestFullSync.h"
#import "SYResetRequest.h"
#import "SYResetResponse.h"
#import "SYRetryTimer.h"
#import "SYSendingSession.h"
#import "SYService.h"
#import "SYSession.h"
#import "SYStartSyncSession.h"
#import "SYStartSyncSessionResponse.h"
#import "SYStateProvider.h"
#import "SYStatisticStore.h"
#import "SYStore.h"
#import "SYStoreDeltaSessionOwner.h"
#import "SYStoreIncomingSessionOwner.h"
#import "SYStoreResetSessionOwner.h"
#import "SYStoreSessionOwner.h"
#import "SYSyncAllObjects.h"
#import "SYSyncBatch.h"
#import "SYSyncBatchResponse.h"
#import "SYSyncEndResponse.h"
#import "SYSyncEngine.h"
#import "SYSyncSessionRestartRequest.h"
#import "SYSyncSessionRestartResponse.h"
#import "SYTransaction.h"
#import "SYTransportLog.h"
#import "SYVectorClock.h"
#import "_NMSDispatchQueue.h"
#import "_SYCountedSemaphore.h"
#import "_SYDeferredIncomingSession.h"
#import "_SYDeviceMonitor.h"
#import "_SYIncomingBatch.h"
#import "_SYInputDataItem.h"
#import "_SYInputStreamer.h"
#import "_SYLazyChangeArray.h"
#import "_SYMessageTimerContext.h"
#import "_SYMessageTimerTable.h"
#import "_SYMultiSuspendableQueue.h"
#import "_SYObjectCompatibilityWrapper.h"
#import "_SYOutputDataItem.h"
#import "_SYOutputStreamer.h"
#import "_SYQueuedStartSession.h"
#import "_SYQuiescenceAllocation.h"
#import "_SYQuiescenceObserver.h"
#import "_SYSharedServiceDB.h"
#import "_SYStreamGuts.h"
#import "_SYStreamerThread.h"
#import "_SYWeakServiceDBRef.h"
#import "_SYZlibStreamInternal.h"
#import "IDSServiceDelegate-Protocol.h"
#import "NMSDeviceSourced-Protocol.h"
#import "NMSDeviceTargetable-Protocol.h"
#import "NMSMessageCenterDelegate-Protocol.h"
#import "NMSObfuscatableDescriptionProviding-Protocol.h"
#import "NRDevicePropertyObserver-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSFilePresenter-Protocol.h"
#import "NSLocking-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "NSStreamDelegate-Protocol.h"
#import "SYChange-Protocol.h"
#import "SYChangeSerializer-Protocol.h"
#import "SYChangeTracking-Protocol.h"
#import "SYChangeTrackingWithErrors-Protocol.h"
#import "SYCompressionBufferOptimization-Protocol.h"
#import "SYObject-Protocol.h"
#import "SYOutputCompressor-Protocol.h"
#import "SYServiceDelegate-Protocol.h"
#import "SYSessionDelegate-Protocol.h"
#import "SYStateLoggable-Protocol.h"
#import "SYStreamEventHandlerBlocks-Protocol.h"
#import "SYStreamProgress-Protocol.h"
#import "SYStreamThroughputCounter-Protocol.h"
#import "SYStreamTransaction-Protocol.h"
#import "SYSyncEngineResponder-Protocol.h"
#import "_SYStreamPropertyProxying-Protocol.h"
#import "_SYStreamRunLoopSourceHandler-Protocol.h"
#import "NSError+CPSafeDescription.h"
#import "NSKeyedUnarchiver+SYAdditions.h"
#import "NSFileManager+SYExtendedAttributes.h"
#import "NSURL+SYTemporaryFileAPI.h"
#import "NSStream+_SY_NSStreamDispatchQueueIntegration.h"

#endif /* CompanionSync_h */