//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKDaemonInterface_Protocol_h
#define _DKDaemonInterface_Protocol_h
@import Foundation;

@protocol _DKDaemonInterface 
/* instance methods */
- (void)saveObjects:(id)objects reply:(id /* block */)reply;
- (void)deleteObjects:(id)objects reply:(id /* block */)reply;
- (void)executeQuery:(id)query reply:(id /* block */)reply;
- (void)deleteAllEventsInEventStreamNamed:(id)named reply:(id /* block */)reply;
- (void)deleteAllEventsMatchingPredicate:(id)predicate reply:(id /* block */)reply;
- (void)synchronizeWithReply:(id /* block */)reply;
- (void)synchronizeWithUrgency:(unsigned long long)urgency client:(id)client reply:(id /* block */)reply;
- (void)deleteRemoteState:(id /* block */)state;
- (void)sourceDeviceIdentityWithReply:(id /* block */)reply;
- (void)deviceUUIDWithReply:(id /* block */)reply;
- (void)confirmDatabaseConnectionWithReply:(id /* block */)reply;
- (void)requestBiomeEndpoint:(BOOL)endpoint reply:(id /* block */)reply;
@end

#endif /* _DKDaemonInterface_Protocol_h */