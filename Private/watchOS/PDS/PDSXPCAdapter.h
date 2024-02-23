//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef PDSXPCAdapter_h
#define PDSXPCAdapter_h
@import Foundation;

#include "PDSXPCConnectionVendor-Protocol.h"
#include "PDSXPCInterfaceVendor-Protocol.h"

@class NSString;

@interface PDSXPCAdapter : NSObject<PDSXPCInterfaceVendor, PDSXPCConnectionVendor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)disableXPC;
+ (void)setDisableXPC:(BOOL)xpc;
+ (id)defaultInterfaceVendor;
+ (id)defaultConnectionVendor;
+ (id)_sharedInstance;

/* instance methods */
- (id)_init;
- (id)interfaceWithProtocol:(id)protocol;
- (id)connectionForMachService:(id)service;
@end

#endif /* PDSXPCAdapter_h */