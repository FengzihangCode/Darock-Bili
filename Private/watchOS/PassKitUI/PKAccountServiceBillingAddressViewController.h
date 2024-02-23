//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountServiceBillingAddressViewController_h
#define PKAccountServiceBillingAddressViewController_h
@import Foundation;

#include "PKSectionTableViewController.h"
#include "PKAddressEditorViewControllerDelegate-Protocol.h"

@class CNContact, PKAccount, PKAccountService;

@interface PKAccountServiceBillingAddressViewController : PKSectionTableViewController<PKAddressEditorViewControllerDelegate> {
  /* instance variables */
  CNContact *_currentBillingAddress;
  PKAccountService *_accountService;
  PKAccount *_account;
  unsigned long long _accountFeatureIdentifier;
  long long _detailViewStyle;
  id /* block */ _handler;
  BOOL _loadingNewBillingContact;
}

/* instance methods */
- (id)initWithBillingAddress:(id)address account:(id)account accountService:(id)service detailViewStyle:(long long)style handler:(id /* block */)handler;
- (void)viewDidLoad;
- (BOOL)shouldMapSection:(unsigned long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)addressEditorViewController:(id)controller selectedContact:(id)contact;
- (void)addressEditorViewControllerDidCancel:(id)cancel;
- (void)_didSelectChangeAddress;
- (id)_currentBillingAddressCellForRowIndex:(long long)index tableView:(id)view;
- (id)_enterNewBillingAddressCellForRowIndex:(long long)index tableView:(id)view;
- (id)requiredBillingAddressKeys;
- (long long)modalPresentationStyle;
@end

#endif /* PKAccountServiceBillingAddressViewController_h */