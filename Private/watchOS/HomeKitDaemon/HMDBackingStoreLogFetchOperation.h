//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBackingStoreLogFetchOperation_h
#define HMDBackingStoreLogFetchOperation_h
@import Foundation;

#include "HMDBackingStoreOperation.h"

@interface HMDBackingStoreLogFetchOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id /* block */ fetchBlock;
@property (retain, nonatomic) id sentinel;
@property (nonatomic) long long maskValue;
@property (nonatomic) long long compareValue;

/* instance methods */
- (id)initWithSentinel:(id)sentinel mask:(long long)mask compare:(long long)compare fetchResult:(id /* block */)result;
- (id)initWithNeedsPushTo:(unsigned long long)to result:(id /* block */)result;
- (id)initWithSentinel:(id)sentinel needsPushTo:(unsigned long long)to fetchResult:(id /* block */)result;
- (id)initWithAlreadyPushedTo:(unsigned long long)to result:(id /* block */)result;
- (id)initWithSentinel:(id)sentinel alreadyPushedTo:(unsigned long long)to fetchResult:(id /* block */)result;
- (id)mainReturningError;
@end

#endif /* HMDBackingStoreLogFetchOperation_h */