//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef NSArray_SCWAdditions_h
#define NSArray_SCWAdditions_h
@import Foundation;

@interface NSArray (SCWAdditions)
/* instance methods */
- (id)scw_dictionaryWithKeyBlock:(id /* block */)block;
- (BOOL)scw_containsObjectPassingTest:(id /* block */)test;
@end

#endif /* NSArray_SCWAdditions_h */