//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassDetailShareDetailsSectionProvider_h
#define NPKPassDetailShareDetailsSectionProvider_h
@import Foundation;

#include "NPKPassDetailSectionProvider.h"

@class PKSharedPassSharesController;

@interface NPKPassDetailShareDetailsSectionProvider : NPKPassDetailSectionProvider {
  /* instance variables */
  PKSharedPassSharesController *_sharesController;
}

/* class methods */
+ (BOOL)_shouldShowShareDetailsForSharesController:(id)controller;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)sectionIdentifiers;
- (id)itemsForSectionWithIdentifier:(id)identifier;
- (void)_updateWithConfiguration:(id)configuration previousConfiguration:(id)configuration;
- (id)_sharesItem;
- (void)_updateSharesIfNeededForPass:(id)pass;
@end

#endif /* NPKPassDetailShareDetailsSectionProvider_h */