//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef AMSBag_MetricsKit_h
#define AMSBag_MetricsKit_h
@import Foundation;

@interface AMSBag (MetricsKit) <AMSMetricsBagContract, AMSMescalBagContract>
/* class methods */
+ (id)metricsAMSBagWithProfileName:(id)name profileVersion:(id)version;

/* instance methods */
- (id)metricsDictionary;
- (id)trustedDomains;
- (id)mescalCertificateURL;
- (id)mescalSetupURL;
- (id)mescalPrimingURL;
- (id)mescalSignedActions;
- (id)mescalSignSapRequests;
- (id)mescalSignSapResponses;
@end

#endif /* AMSBag_MetricsKit_h */