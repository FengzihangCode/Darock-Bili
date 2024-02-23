//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSourceAuthorizationController_h
#define HKSourceAuthorizationController_h
@import Foundation;

#include "HKSourceAuthorizationControllerDelegate-Protocol.h"

@class HKAuthorizationStore, HKHealthStore, HKSource, NSArray, NSDictionary, NSMutableSet, NSSet;

@interface HKSourceAuthorizationController : NSObject {
  /* instance variables */
  HKAuthorizationStore *_authorizationStore;
}

@property (retain, nonatomic) NSArray *orderedTypesForSharing;
@property (retain, nonatomic) NSArray *orderedTypesForReading;
@property (retain, nonatomic) NSMutableSet *typesEnabledForSharing;
@property (retain, nonatomic) NSMutableSet *typesEnabledForReading;
@property (retain, nonatomic) NSSet *requestedTypesForSharing;
@property (retain, nonatomic) NSSet *requestedTypesForReading;
@property (retain, nonatomic) NSDictionary *requestedDocumentAuths;
@property (nonatomic) BOOL isUpdatingAllTypes;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKSource *source;
@property (weak, nonatomic) NSObject<HKSourceAuthorizationControllerDelegate> *delegate;
@property (readonly, nonatomic) BOOL anyTypeRequested;

/* instance methods */
- (id)initWithHealthStore:(id)store source:(id)source typesForSharing:(id)sharing typesForReading:(id)reading;
- (void)reload;
- (void)_reloadDocumentAuthorizationRecords;
- (void)_reloadTypeAuthorizationRecords;
- (id)_sortedTypes:(id)types;
- (BOOL)isRequestingDocumentAuthorization;
- (unsigned long long)countOfTypesInSection:(long long)section;
- (id)typesInSection:(long long)section;
- (id)objectAuthorizationStatusesForDocuments;
- (void)commitObjectAuthorizationStatuses:(id)statuses;
- (void)resetObjectAuthorizationStatuses;
- (BOOL)isTypeEnabled:(id)enabled inSection:(long long)section;
- (void)setEnabled:(BOOL)enabled forType:(id)type inSection:(long long)section commit:(BOOL)commit;
- (BOOL)_parentTypeDisabledForType:(id)type inSection:(long long)section;
- (id)_enabledSubTypesForType:(id)type inSection:(long long)section;
- (BOOL)allTypesEnabled;
- (BOOL)allTypesEnabledInSection:(long long)section;
- (BOOL)anyTypeEnabled;
- (void)setEnabled:(BOOL)enabled forAllTypesInSection:(long long)section commit:(BOOL)commit;
- (void)commitAuthorizationStatuses;
- (long long)_authorizationStatusWithType:(id)type;
- (void)_updateAuthorizationStatusWithTypes:(id)types;
- (void)_setAuthorizationStatuses:(id)statuses;
- (id)_enabledTypesInSection:(long long)section;
@end

#endif /* HKSourceAuthorizationController_h */