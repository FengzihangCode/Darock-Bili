//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSharePreviewOverviewSectionController_h
#define PKSharePreviewOverviewSectionController_h
@import Foundation;

#include "PKPassShareSectionController.h"
#include "PKPassShareInitiationContext.h"
#include "PKSharePreviewOverviewSectionControllerDelegate-Protocol.h"

@class NSArray, PKPassEntitlementsComposer;

@interface PKSharePreviewOverviewSectionController : PKPassShareSectionController {
  /* instance variables */
  unsigned long long _mode;
  PKPassEntitlementsComposer *_entitlementComposer;
  NSArray *_recipientItems;
  NSArray *_entitlementItems;
}

@property (readonly, weak, nonatomic) NSObject<PKSharePreviewOverviewSectionControllerDelegate> *delegate;
@property (retain, nonatomic) PKPassShareInitiationContext *context;

/* instance methods */
- (id)init;
- (id)initWithInitiationContext:(id)context entitlementComposer:(id)composer delegate:(id)delegate;
- (id)initWithMode:(unsigned long long)mode entitlementComposer:(id)composer delegate:(id)delegate;
- (id)_initWithMode:(unsigned long long)mode entitlementComposer:(id)composer context:(id)context delegate:(id)delegate;
- (id)sharedEntitlements;
- (void)reloadItemsAnimated:(BOOL)animated;
- (id)_localizedEntitlementSummary;
- (id)decorateListCell:(id)cell forRowItem:(id)item;
- (id)headerAttributedStringForIdentifier:(id)identifier;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (void)didSelectItem:(id)item;
- (void)_shareabilitySwitchValueChanged:(id)changed;
@end

#endif /* PKSharePreviewOverviewSectionController_h */