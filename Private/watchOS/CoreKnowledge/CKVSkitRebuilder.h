//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKVSkitRebuilder_h
#define CKVSkitRebuilder_h
@import Foundation;

#include "CKVIndexManager.h"
#include "CKVLocalization.h"

@interface CKVSkitRebuilder : NSObject {
  /* instance variables */
  CKVIndexManager *_indexManager;
  CKVLocalization *_localization;
}

/* class methods */
+ (unsigned short)rebuildSkit:(id)skit database:(id)database log:(id)log description:(id)description locale:(long long)locale assetPath:(id)path shouldDefer:(id /* block */)defer;

/* instance methods */
- (id)initWithIndexManager:(id)manager settings:(id)settings;
- (id)init;
- (BOOL)rebuildForUser:(id)user;
@end

#endif /* CKVSkitRebuilder_h */