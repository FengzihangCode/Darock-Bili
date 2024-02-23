//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKVReplicatedStateEnumerator_h
#define CKVReplicatedStateEnumerator_h
@import Foundation;

#include "CKVDatabaseReadOnlyAccess-Protocol.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface CKVReplicatedStateEnumerator : NSObject {
  /* instance variables */
  NSString *_userId;
  NSString *_originAppId;
  long long _itemType;
  NSNumber *_userIdHash;
  NSNumber *_datasetRowId;
  NSNumber *_localDeviceRowId;
  NSString *_localDeviceIdString;
  NSObject<CKVDatabaseReadOnlyAccess> *_databaseAccess;
  NSMutableDictionary *_deviceRowIdMap;
  NSMutableDictionary *_commandCache;
}

/* class methods */
+ (id)_wrapContent:(id)content;
+ (id)_wrapInstanceWithContent:(id)content metaContent:(id)content;

/* instance methods */
- (id)initWithUserId:(id)id originAppId:(id)id itemType:(long long)type;
- (id)initWithUserId:(id)id originAppId:(id)id itemType:(long long)type indexManager:(id)manager;
- (id)extractStateVectorTimestampsForItemType:(long long)type originAppId:(id)id;
- (id)_fetchProvenanceRecordsFromDatabase:(id)database originAppId:(id)id itemType:(long long)type;
- (id)_findDatasetFromItemType:(long long)type originAppId:(id)id;
- (id)_fetchDeviceRecordsFromDatabase:(id)database;
- (id)_mapDeviceRecords:(id)records;
- (id)localDeviceIdentifier;
- (id)_stateVectorFromProvenanceRecords:(id)records deviceRecordMap:(id)map;
- (id)_fetchItemContentFromContentIdentitifier:(id)identitifier databaseAccess:(id)access;
- (id)_fetchItemMetaContentFromMetaContentIdentities:(id)identities databaseAccess:(id)access;
- (id)allLocalMetaContentIdentifersForContentIdentifier:(id)identifier originAppId:(id)id itemType:(long long)type;
- (id)_mapToDeviceIdentifiersFromProvenance:(id)provenance;
- (id)buildDatasetChangeFromEntityEnumerationRecord:(id)record;
- (id)findItemsBasedOnVector:(id)vector state:(unsigned char)state originAppId:(id)id itemType:(long long)type;
- (id)findItemDataPresentInVector:(id)vector missingFromVector:(id)vector originAppId:(id)id itemType:(long long)type;
- (id)_mapToDeviceContentFromProvenanceRecords:(id)records;
- (id)_findProvenanceRecordsFromCommand:(id)command;
- (id)_contentHashesFromProvenanceRecords:(id)records;
- (id)_fetchItemContentRecordsFromCommand:(id)command;
- (id)_createProvenanceSelectCommandFromVector:(id)vector atomState:(unsigned char)state columns:(id)columns originAppId:(id)id itemType:(long long)type;
- (id)findContentHashesNotInState:(unsigned char)state from:(id)from originAppId:(id)id itemType:(long long)type;
- (id)findTimestampsAssociatedWithContentHash:(id)hash originAppId:(id)id itemType:(long long)type;
@end

#endif /* CKVReplicatedStateEnumerator_h */