//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCProfileTrustEvaluator_h
#define MCProfileTrustEvaluator_h
@import Foundation;

@interface MCProfileTrustEvaluator : NSObject
/* instance methods */
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)defaults;
- (BOOL)_verifyCerts:(id)certs policy:(struct __SecPolicy *)policy;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)payload;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)devices;
@end

#endif /* MCProfileTrustEvaluator_h */