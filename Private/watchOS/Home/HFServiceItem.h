//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFServiceItem_h
#define HFServiceItem_h
@import Foundation;

#include "HFItem.h"
#include "HFAccessoryRepresentable-Protocol.h"
#include "HFAccessoryRepresentableItem-Protocol.h"
#include "HFActionBuilderFactory-Protocol.h"
#include "HFCharacteristicValueSource-Protocol.h"
#include "HFHomeKitObject-Protocol.h"
#include "HFNamingComponentCreating-Protocol.h"
#include "HFServiceLikeBuilderCreating-Protocol.h"
#include "HFServiceLikeItem-Protocol.h"

@class HMHome, HMService, NSSet, NSString;

@interface HFServiceItem : HFItem<HFAccessoryRepresentableItem, HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFNamingComponentCreating>

@property (readonly, nonatomic) NSObject<HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;
@property (readonly, nonatomic) HMService *service;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;

/* class methods */
+ (id)itemWithAccessoryRepresentableObject:(id)object valueSource:(id)source;
+ (id)supportedServiceTypes;
+ (id)_serviceTypeToServiceItemClassMap;
+ (Class)itemClassForService:(id)service;
+ (id)serviceItemForService:(id)service valueSource:(id)source;

/* instance methods */
- (id)initWithValueSource:(id)source service:(id)service;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyWithValueSource:(id)source;
- (id)_descriptionBuilder;
- (id)_subclass_updateWithOptions:(id)options;
- (id)createControlItemsWithOptions:(id)options;
- (id)controlItemValueSourceForPrimaryService;
- (id)controlItemValueSourceForServices:(id)services;
- (id)_actionableCharacteristics;
- (BOOL)containsActions;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)currentStateActionBuildersForHome:(id)home;
- (id)accessories;
- (id)_siriEndPointProfiles;
- (id)serviceLikeBuilderInHome:(id)home;
- (id)namingComponentForHomeKitObject;
- (id)servicesToReadForCharacteristicType:(id)type;
- (id)characteristicsToReadForCharacteristicTypes:(id)types controlItems:(id)items;
- (id)performStandardUpdateWithCharacteristicTypes:(id)types options:(id)options;
- (id)characteristicsToReadWithCharacteristicTypes:(id)types options:(id)options controlItems:(id *)items;
- (id)_augmentedStandardResultsForUpdateResponse:(id)response controlItems:(id)items;
- (id)incrementalStateIconDescriptorForPrimaryState:(long long)state incrementalValue:(id)value;
- (id)descriptionForCharacteristic:(id)characteristic withValue:(id)value;
- (id)controlDescriptionForCharacteristic:(id)characteristic withValue:(id)value;
- (void)applyInflectionToDescriptions:(id)descriptions;
- (id)_allRepresentedServices;
@end

#endif /* HFServiceItem_h */