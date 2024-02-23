//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ENAuthCache_h
#define ENAuthCache_h
@import Foundation;

#include "ENAuthCacheEntry.h"

@class NSMutableDictionary;

@interface ENAuthCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *linkedCache;
@property (retain, nonatomic) ENAuthCacheEntry *businessCache;

/* instance methods */
- (id)init;
- (void)setAuthenticationResult:(id)result forLinkedNotebookGuid:(id)guid;
- (id)authenticationResultForLinkedNotebookGuid:(id)guid;
- (void)setAuthenticationResultForBusiness:(id)business;
- (id)authenticationResultForBusiness;
@end

#endif /* ENAuthCache_h */