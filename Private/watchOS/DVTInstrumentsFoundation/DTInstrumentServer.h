//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTInstrumentServer_h
#define DTInstrumentServer_h
@import Foundation;

#include "DTInstrumentServerAllowedRPC-Protocol.h"
#include "DTInstrumentServerSimulatorPrivilege-Protocol.h"

@class DTXConnection, NSString;

@interface DTInstrumentServer : NSObject<DTInstrumentServerAllowedRPC, DTInstrumentServerSimulatorPrivilege>

@property (readonly, nonatomic) DTXConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)isAppleInternal;
+ (void)takeOwnershipOfSharedAuthorization:(void *)authorization;
+ (unsigned int)taskForPid:(int)pid;
+ (void)_taskInvalid:(unsigned int)invalid forPid:(int)pid;
+ (void)_tfpPortReceived:(unsigned int)received;

/* instance methods */
- (id)initWithTransport:(id)transport;
- (void)resume;
- (void)cancel;
- (void)setMaxConnectionEnqueue:(unsigned long long)enqueue;
- (void)loadServicesAtPath:(id)path;
- (void)_notifyOfTFPCommunicationsPort:(unsigned int)port;
- (id)_blessSimulatorHub:(int)hub;
@end

#endif /* DTInstrumentServer_h */