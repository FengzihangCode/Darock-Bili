//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STStatusDomainServerHandle_Protocol_h
#define STStatusDomainServerHandle_Protocol_h
@import Foundation;

@protocol STStatusDomainServerHandle <NSObject>
/* instance methods */
- (id)dataForDomain:(unsigned long long)domain;
- (void)registerClient:(id)client forDomain:(unsigned long long)domain;
- (void)removeClient:(id)client forDomain:(unsigned long long)domain;
- (void)reportUserInteraction:(id)interaction forClient:(id)client domain:(unsigned long long)domain;
@end

#endif /* STStatusDomainServerHandle_Protocol_h */