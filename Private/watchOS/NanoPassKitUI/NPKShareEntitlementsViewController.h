//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKShareEntitlementsViewController_h
#define NPKShareEntitlementsViewController_h
@import Foundation;

#include "NPKLargeTitleDisplayingListCollectionViewController.h"
#include "NPKShareEntitlementsSectionProviderProtocol-Protocol.h"
#include "NPKShareEntitlementsViewControllerDelegate-Protocol.h"

@class NSArray, NSSet, NSString, PKPassShare, PUICActivityIndicatorView, UIBarButtonItem;

@interface NPKShareEntitlementsViewController : NPKLargeTitleDisplayingListCollectionViewController<NPKShareEntitlementsSectionProviderProtocol> {
  /* instance variables */
  NSSet *_initialSelectedEntitlementIdentifiers;
  NSArray *_selectedEntitlements;
  PKPassShare *_share;
  BOOL _showSaveButton;
}

@property (retain, nonatomic) PUICActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UIBarButtonItem *spinnerItem;
@property (weak, @dynamic, nonatomic) NSObject<NPKShareEntitlementsViewControllerDelegate> *delegate;
@property (nonatomic) BOOL showCloseButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)sectionProviderConfigurationClass;
+ (id)sectionProviderClassesWithConfiguration:(id)configuration;

/* instance methods */
- (id)initWithSectionProviderConfiguration:(id)configuration;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)showSpinner;
- (void)updateSaveButtonIfNecessary;
- (void)updateCloseButtonIfNecessary;
- (BOOL)collectionView:(id)view layout:(id)layout shouldDrawTopSeparatorForItemAtIndexPath:(id)path;
- (id)_titleText;
- (id)_entitlementIdentifierSetFromEntitlements:(id)entitlements;
- (BOOL)_haveEntitlementsChanged;
- (void)_updateSelectedEntitlementsIfNecessary;
- (void)_updateSelectedEntitlements;
- (void)_saveTapped:(id)tapped;
- (void)_showSaveButton;
- (void)_hideSaveButton;
- (void)_closeTapped:(id)tapped;
- (void)_showCloseButton;
- (void)_hideCloseButton;
- (id)_sharesEntitlementConfigurationForConfiguration:(id)configuration;
- (void)handleDidSelectEntitlements:(id)entitlements forShare:(id)share sectionProvider:(id)provider;
- (void)handleRevokeShare:(id)share sectionProvider:(id)provider;
- (void)handleDidEncounterError:(id)error forShare:(id)share sectionProvider:(id)provider;
- (void)handleDidEncounterError:(id)error forShare:(id)share continueButtonTitle:(id)title continueHandler:(id /* block */)handler cancelHandler:(id /* block */)handler sectionProvider:(id)provider;
@end

#endif /* NPKShareEntitlementsViewController_h */