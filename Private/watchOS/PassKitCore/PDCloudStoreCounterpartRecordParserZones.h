//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PDCloudStoreCounterpartRecordParserZones_h
#define PDCloudStoreCounterpartRecordParserZones_h
@import Foundation;

@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserZones : NSObject {
  /* instance variables */
  NSMutableDictionary *_zoneNameToRecords;
}

/* instance methods */
- (id)init;
- (void)addRecord:(id)record;
- (id)allRecords;
- (void)removeIdentifiers:(id)identifiers;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)block;
@end

#endif /* PDCloudStoreCounterpartRecordParserZones_h */