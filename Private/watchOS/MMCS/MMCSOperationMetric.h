//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.0.0.0.0
//
#ifndef MMCSOperationMetric_h
#define MMCSOperationMetric_h
@import Foundation;

#include "MMCSOperationMetric-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MMCSOperationMetric : NSObject<MMCSOperationMetric>

@property (retain, nonatomic) NSDate *startDate;
@property double duration;
@property (retain, nonatomic) NSMutableArray *ranges;
@property double queueing;
@property double executing;
@property unsigned long long bytesUploaded;
@property unsigned long long bytesDownloaded;
@property unsigned long long connections;
@property unsigned long long connectionsCreated;
@property unsigned long long bytesFulfilledByPeers;
@property unsigned long long bytesFulfilledLocally;
@property unsigned long long bytesResumed;
@property (readonly) NSMutableDictionary *totalBytesByChunkProfile;
@property (readonly) NSMutableDictionary *chunkCountByChunkProfile;
@property (readonly) NSMutableDictionary *fileCountByChunkProfile;
@property (readonly) NSMutableSet *requestUUIDs;
@property (readonly) NSArray *rangesCopy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)newRangeWithOperationState:(unsigned long long)state startDate:(id)date duration:(double)duration;
- (id)initWithDate:(id)date;
- (void)addRange:(id)range;
- (void)rangesCompleted;
- (id)describeRanges;
- (double)absoluteStart;
- (double)other;
- (long long)compareStartTime:(id)time;
- (long long)compareExecutingStartTime:(id)time;
- (double)absoluteStop;
@end

#endif /* MMCSOperationMetric_h */