//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMStoreSource_h
#define BMStoreSource_h
@import Foundation;

#include "BMSource.h"
#include "BMComputeSourceClient.h"

@class BMAccessClient, BMStreamDatastoreWriter, NSMutableArray;
@protocol OS_os_transaction;

@interface BMStoreSource : BMSource {
  /* instance variables */
  BMStreamDatastoreWriter *_writer;
  BMAccessClient *_accessClient;
  BOOL _shouldSendMetrics;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_os_transaction> *_transaction;
  NSMutableArray *_pendingWrites;
  void * _lockStateRegistration;
}

@property (readonly, nonatomic) BMComputeSourceClient *computeSource;

/* instance methods */
- (id)initWithIdentifier:(id)identifier storeConfig:(id)config;
- (id)initWithIdentifier:(id)identifier storeConfig:(id)config accessClient:(id)client;
- (id)initWithIdentifier:(id)identifier storeConfig:(id)config accessClient:(id)client eventDataClass:(Class)class;
- (void)dealloc;
- (void)sendEvent:(id)event;
- (void)sendEvent:(id)event timestamp:(double)timestamp;
- (void)_processPendingWrites;
- (BOOL)_writeEvent:(id)event timestamp:(double)timestamp signpostID:(unsigned long long)id notifyCompute:(BOOL)compute;
@end

#endif /* BMStoreSource_h */