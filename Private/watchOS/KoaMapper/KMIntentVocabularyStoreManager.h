//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KMIntentVocabularyStoreManager_h
#define KMIntentVocabularyStoreManager_h
@import Foundation;

@interface KMIntentVocabularyStoreManager : NSObject
/* instance methods */
- (id)savedCustomVocabularyOverviewDictionary;
- (id)resolveIntentSlotsForApp:(id)app fromAllAppsOverview:(id)overview;
- (id)storedVocabularyForApp:(id)app intentSlot:(id)slot;
@end

#endif /* KMIntentVocabularyStoreManager_h */