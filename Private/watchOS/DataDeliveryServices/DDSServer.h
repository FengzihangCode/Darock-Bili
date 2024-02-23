//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64.0.0.0.0
//
#ifndef DDSServer_h
#define DDSServer_h
@import Foundation;

#include "DDSAssetProviding-Protocol.h"
#include "DDSManaging-Protocol.h"
#include "DDSManagingDelegate-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface DDSServer : NSObject<NSXPCListenerDelegate, DDSManagingDelegate>

@property (readonly, nonatomic) NSObject<DDSManaging> *manager;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *clientConnections;
@property (readonly) NSObject<DDSAssetProviding> *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)setUpAssertionStorageDirectory;
+ (id)sharedInstance;
+ (id)sharedInstanceWithConfiguration:(id)configuration;
+ (id)interface;

/* instance methods */
- (id)initWithXPCServiceName:(id)name assertionStorageFileURL:(id)url;
- (void)setCompatabilityVersion:(long long)version forAssetType:(id)type;
- (void)start;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)handleEndedConnection:(id)connection;
- (void)dealloc;
@end

#endif /* DDSServer_h */