//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMAccount_h
#define REMAccount_h
@import Foundation;

#include "REMAccountCapabilities.h"
#include "REMAccountGroupContext.h"
#include "REMAccountStorage.h"
#include "REMAccountTemplatesContext.h"
#include "REMCRMergeableOrderedSet.h"
#include "REMExternalSyncMetadataProviding-Protocol.h"
#include "REMObjectID.h"
#include "REMObjectIDProviding-Protocol.h"
#include "REMPersonIDProviding-Protocol.h"
#include "REMResolutionTokenMap.h"
#include "REMStore.h"
#include "REMSupportedVersionProviding-Protocol.h"

@class BOOL *, NSData, NSOrderedSet, NSSet, NSString;

@interface REMAccount : NSObject<REMPersonIDProviding, REMObjectIDProviding, REMExternalSyncMetadataProviding, REMSupportedVersionProviding>

@property (nonatomic) BOOL markedForRemoval;
@property (readonly, @dynamic, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, @dynamic, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, @dynamic, nonatomic) NSSet *listIDsToUndelete;
@property (readonly, @dynamic, nonatomic) NSSet *smartListIDsToUndelete;
@property (readonly, @dynamic, nonatomic) BOOL listsDADisplayOrderChanged;
@property (readonly, @dynamic, nonatomic) BOOL debugSyncDisabled;
@property (readonly, nonatomic) REMAccountTemplatesContext *templatesContext;
@property (retain, nonatomic) REMStore *store;
@property (readonly, copy, nonatomic) REMAccountStorage *storage;
@property (retain, nonatomic) REMAccountCapabilities *capabilities;
@property (retain, @dynamic, nonatomic) NSString *displayName;
@property (readonly, @dynamic, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (readonly, @dynamic, nonatomic) NSData *listIDsMergeableOrderingData;
@property (readonly, nonatomic) NSOrderedSet *listIDsOrdering;
@property (readonly, @dynamic, nonatomic) long long type;
@property (readonly, @dynamic, nonatomic) BOOL inactive;
@property (readonly, @dynamic, nonatomic) BOOL didChooseToMigrate;
@property (readonly, @dynamic, nonatomic) BOOL didChooseToMigrateLocally;
@property (readonly, @dynamic, nonatomic) BOOL didFinishMigration;
@property (readonly, @dynamic, nonatomic) long long persistenceCloudSchemaVersion;
@property (readonly, @dynamic, nonatomic) NSString *daConstraintsDescriptionPath;
@property (readonly, @dynamic, nonatomic) BOOL daAllowsCalendarAddDeleteModify;
@property (readonly, nonatomic) BOOL daSupportsPhoneNumbers;
@property (readonly, @dynamic, nonatomic) BOOL daSupportsSharedCalendars;
@property (readonly, @dynamic, nonatomic) BOOL daWasMigrated;
@property (readonly, nonatomic) BOOL supportsSharingLists;
@property (readonly, nonatomic) REMAccountGroupContext *groupContext;
@property (readonly, @dynamic, nonatomic) REMObjectID *objectID;
@property (readonly, @dynamic, nonatomic) NSString *name;
@property (copy, @dynamic, nonatomic) NSString *personID;
@property (copy, @dynamic, nonatomic) NSData *personIDSalt;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, @dynamic, nonatomic) NSString *externalIdentifier;
@property (readonly, @dynamic, nonatomic) NSString *externalModificationTag;
@property (readonly, @dynamic, nonatomic) NSString *daSyncToken;
@property (readonly, @dynamic, nonatomic) NSString *daPushKey;
@property (readonly, @dynamic, nonatomic) long long minimumSupportedVersion;
@property (readonly, @dynamic, nonatomic) long long effectiveMinimumSupportedVersion;

/* class methods */
+ (id)localInternalAccountID;
+ (id)localAccountID;
+ (BOOL)canCopyReminderLosslesslyFromAccountWithType:(long long)type toAccountWithType:(long long)type accountTypeHost:(id)host;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)uuid;
+ (id)cdEntityName;
+ (id)_accountTypeMaskWithBitMask:(long long)mask;
+ (BOOL)isCloudBasedAccountType:(long long)type;

/* instance methods */
- (id)initWithStore:(id)store storage:(id)storage;
- (id)optionalObjectID;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)accountTypeHost;
- (id)fetchListsWithError:(id *)error;
- (id)fetchCustomSmartListsWithError:(id *)error;
- (BOOL)canCopyReminderLosslesslyToAccount:(id)account;
- (BOOL)isConsideredEmptyWithResultPtr:(BOOL *)ptr withError:(id *)error;
- (id)fetchListsIncludingSpecialContainersWithError:(id *)error;
- (id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)identifier error:(id *)error;
- (BOOL)MCIsManagedWithResultPtr:(BOOL *)ptr error:(id *)error;
- (id)forwardingTargetForSelector:(SEL)selector;
- (id)valueForUndefinedKey:(id)key;
- (BOOL)respondsToSelector:(SEL)selector;
- (void)setValue:(id)value forUndefinedKey:(id)key;
- (BOOL)isUnsupported;
- (id)externalIdentifierForMarkedForDeletionObject;
- (BOOL)shouldUseExternalIdentifierAsDeletionKey;
@end

#endif /* REMAccount_h */