//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPPersistentConnectionProtocol_Protocol_h
#define SPPersistentConnectionProtocol_Protocol_h
@import Foundation;

@protocol SPPersistentConnectionProtocol <NSObject>
/* instance methods */
- (void)startRefreshingPersistentConnectionWithBlock:(id /* block */)block;
- (void)beaconsToMaintainPersistentConnection:(id /* block */)connection;
- (void)stopRefreshingPersistentConnection;
@end

#endif /* SPPersistentConnectionProtocol_Protocol_h */