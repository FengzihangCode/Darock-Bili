//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNSyntheticRouteHypothesizerProvider_h
#define CALNSyntheticRouteHypothesizerProvider_h
@import Foundation;

#include "CALNRouteHypothesizerProvider-Protocol.h"

@class CADSyntheticRouteHypothesizerCache, NSString;

@interface CALNSyntheticRouteHypothesizerProvider : NSObject<CALNRouteHypothesizerProvider>

@property (readonly, nonatomic) CADSyntheticRouteHypothesizerCache *syntheticRouteHypothesizerCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)hypothesizerForPlannedDestination:(id)destination;
- (void)didDismissUINotification:(unsigned long long)uinotification forPlannedDestination:(id)destination dismissalType:(unsigned long long)type;
- (void)createdRouteHypothesizer:(id)hypothesizer forEventExternalURL:(id)url;
- (void)removedRouteHypothesizerForEventExternalURL:(id)url;
@end

#endif /* CALNSyntheticRouteHypothesizerProvider_h */