//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1270.60.4.0.0
//
#ifndef ICLWorkspace_h
#define ICLWorkspace_h
@import Foundation;

@interface ICLWorkspace : NSObject
/* class methods */
+ (id)defaultWorkspace;
+ (id)_connectionToInstallationDaemonWithError:(id *)error;

/* instance methods */
- (id)init;
- (BOOL)enumerateBuiltInSystemContentWithBlock:(id /* block */)block error:(id *)error;
- (id)bundleIDsForContainerizedContentWithError:(id *)error;
- (void)triggerRegistrationForContainerizedContentWithOptions:(id)options completion:(id /* block */)completion;
- (BOOL)triggerRegistrationForContainerizedContentWithOptions:(id)options withError:(id *)error;
- (void)triggerRegistrationForDiskImageContentWithOptions:(id)options completion:(id /* block */)completion;
- (id)infoForLaunchServicesWithWrapperURL:(id)url forBundleIdentifier:(id)identifier withError:(id *)error;
- (id)bundleRecordsForLaunchServicesWithWrapperURL:(id)url forBundleIdentifier:(id)identifier withError:(id *)error;
- (BOOL)enumerateCryptexContentWithBlock:(id /* block */)block error:(id *)error;
- (id)bundleRecordsWithFrameworkURL:(id)url options:(id)options withError:(id *)error;
- (id)containerizedAppBundleRecordsForIdentity:(id)identity inDomain:(unsigned long long)domain options:(id)options withError:(id *)error;
- (id)diskUsageForLaunchServicesWithBundleIDs:(id)ids options:(id)options withError:(id *)error;
@end

#endif /* ICLWorkspace_h */