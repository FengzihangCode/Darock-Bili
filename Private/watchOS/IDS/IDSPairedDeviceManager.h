//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSPairedDeviceManager_h
#define IDSPairedDeviceManager_h
@import Foundation;

#include "IDSDaemonListenerProtocol-Protocol.h"
#include "IDSXPCDaemonController.h"
#include "_IDSCompletionHandler.h"

@class NSSet, NSString;

@interface IDSPairedDeviceManager : NSObject<IDSDaemonListenerProtocol> {
  /* instance variables */
  _IDSCompletionHandler *_deleteCompletion;
  _IDSCompletionHandler *_localCompletion;
  _IDSCompletionHandler *_pairedCompletion;
  _IDSCompletionHandler *_deliveryStatsCompletion;
}

@property (retain, nonatomic) IDSXPCDaemonController *xpcDaemonController;
@property (retain, nonatomic) NSSet *allowedTrafficClassifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
- (void)setPairedDeviceInfo:(id)info;
- (void)deletePairedDevice:(id)device withCompletionBlock:(id /* block */)block queue:(id)queue;
- (void)getLocalDeviceInfoWithCompletionBlock:(id /* block */)block queue:(id)queue;
- (void)getPairedDeviceInfoWithCompletionBlock:(id /* block */)block queue:(id)queue;
- (void)getDeliveryStatsWithCompletionBlock:(id /* block */)block queue:(id)queue;
- (void)device:(id)device pairingDeleted:(BOOL)deleted;
- (void)deliveryStats:(id)stats;
- (void)constructRAResponseDictionary:(id)dictionary completionHandler:(id /* block */)handler;
@end

#endif /* IDSPairedDeviceManager_h */