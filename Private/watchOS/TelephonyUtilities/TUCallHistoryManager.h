//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUCallHistoryManager_h
#define TUCallHistoryManager_h
@import Foundation;

#include "TUCallHistoryManagerDataSource-Protocol.h"

@interface TUCallHistoryManager : NSObject

@property (readonly, nonatomic) NSObject<TUCallHistoryManagerDataSource> *dataSource;

/* instance methods */
- (id)init;
- (id)initWithDataSource:(id)source;
- (void)dealloc;
- (void)updateOutgoingLocalParticipantUUID:(id)uuid forCallsWithLocalParticipantUUID:(id)uuid;
- (void)updateOutgoingLocalParticipantUUID:(id)uuid forCallsWithOutgoingLocalParticipantUUID:(id)uuid;
- (void)reportRecentCallForConversation:(id)conversation withStartDate:(id)date avMode:(unsigned long long)mode;
@end

#endif /* TUCallHistoryManager_h */