//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDSearchableIndexHookResponder_Protocol_h
#define EDSearchableIndexHookResponder_Protocol_h
@import Foundation;

@protocol EDSearchableIndexHookResponder <NSObject>
@optional
/* instance methods */
- (void)searchableIndexDidAssignTransaction:(long long)transaction toUpdates:(id)updates withMissingIdentifiers:(id)identifiers generationWindow:(id)window;
- (void)searchableIndexDidAssignIndexingType:(long long)type forIdentifiers:(id)identifiers generationWindow:(id)window;
@end

#endif /* EDSearchableIndexHookResponder_Protocol_h */