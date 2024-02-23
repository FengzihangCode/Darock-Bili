//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef NSArray__LTAsyncMap_h
#define NSArray__LTAsyncMap_h
@import Foundation;

@interface NSArray (_LTAsyncMap)
/* instance methods */
- (void)_ltAsyncMap:(id /* block */)map completion:(id /* block */)completion;
- (void)_ltAsyncMap:(id /* block */)map queue:(id)queue completion:(id /* block */)completion;
- (void)_ltSequentialMap:(id /* block */)map completion:(id /* block */)completion;
@end

#endif /* NSArray__LTAsyncMap_h */