//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef _CNUIUserActionUserActivityOpener_h
#define _CNUIUserActionUserActivityOpener_h
@import Foundation;

#include "CNLSApplicationWorkspace.h"
#include "CNUIUserActionUserActivityOpener-Protocol.h"

@class NSString;

@interface _CNUIUserActionUserActivityOpener : NSObject<CNUIUserActionUserActivityOpener>

@property (readonly, nonatomic) CNLSApplicationWorkspace *applicationWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)errorForUnableToOpenUserActivity:(id)activity withUnderlyingError:(id)error;

/* instance methods */
- (id)init;
- (id)initWithApplicationWorkspace:(id)workspace;
- (id)openUserActivity:(id)activity usingBundleIdentifier:(id)identifier withScheduler:(id)scheduler;
@end

#endif /* _CNUIUserActionUserActivityOpener_h */