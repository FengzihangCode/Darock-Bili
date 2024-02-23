//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFBaseFilterDataConsumer_h
#define MFBaseFilterDataConsumer_h
@import Foundation;

#include "MFDataConsumer-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface MFBaseFilterDataConsumer : NSObject<MFDataConsumer>

@property (nonatomic) BOOL serialAppend;
@property (readonly, nonatomic) NSArray *consumers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)filterWithConsumers:(id)consumers;
+ (id)filterWithConsumer:(id)consumer;

/* instance methods */
- (id)initWithConsumers:(id)consumers;
- (id)initWithConsumer:(id)consumer;
- (long long)appendData:(id)data;
- (void)done;
- (BOOL)isSerialAppend;
@end

#endif /* MFBaseFilterDataConsumer_h */