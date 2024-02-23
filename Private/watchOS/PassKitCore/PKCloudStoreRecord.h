//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCloudStoreRecord_h
#define PKCloudStoreRecord_h
@import Foundation;

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PKCloudStoreRecord : NSObject

@property (copy, nonatomic) NSDictionary *cloudStoreSpecificKeys;
@property (readonly, nonatomic) NSArray *records;

/* instance methods */
- (id)initWithRecords:(id)records;
- (id)recordsWithRecordType:(id)type;
- (void)addRecord:(id)record;
- (id)description;
@end

#endif /* PKCloudStoreRecord_h */