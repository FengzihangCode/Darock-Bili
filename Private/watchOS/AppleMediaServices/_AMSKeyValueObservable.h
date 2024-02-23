//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef _AMSKeyValueObservable_h
#define _AMSKeyValueObservable_h
@import Foundation;

#include "AMSObservable.h"

@class NSObject, NSString;

@interface _AMSKeyValueObservable : AMSObservable

@property (retain, nonatomic) NSObject *context;
@property (copy, nonatomic) NSString *keyPath;
@property (weak, nonatomic) NSObject *object;

/* instance methods */
- (id)initWithObject:(id)object keyPath:(id)path options:(unsigned long long)options;
- (BOOL)cancel;
- (BOOL)sendCompletion;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* _AMSKeyValueObservable_h */