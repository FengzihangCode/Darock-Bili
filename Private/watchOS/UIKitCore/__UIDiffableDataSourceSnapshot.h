//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef __UIDiffableDataSourceSnapshot_h
#define __UIDiffableDataSourceSnapshot_h
@import Foundation;

#include "__UIDiffableDataSource.h"
#include "NSCopying-Protocol.h"
#include "_UIDiffableDataSourceState-Protocol.h"

@class NSMutableArray;

@interface __UIDiffableDataSourceSnapshot : __UIDiffableDataSource<NSCopying> {
  /* instance variables */
  NSObject<_UIDiffableDataSourceState> *_state;
  NSMutableArray *_pendingSnapshotUpdates;
}

/* instance methods */
- (id)init;
- (id)initWithState:(id)state;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)state;
- (id)pendingSnapshotUpdates;
- (BOOL)isEqual:(id)equal;
- (long long)numberOfItems;
- (long long)numberOfSections;
- (id)sectionIdentifiers;
- (id)itemIdentifiers;
- (id)_identifiersForSectionsOrItems:(BOOL)items reconfiguredOrReloaded:(BOOL)reloaded;
- (id)reloadedSectionIdentifiers;
- (id)reloadedItemIdentifiers;
- (id)reconfiguredItemIdentifiers;
- (long long)numberOfItemsInSection:(id)section;
- (id)itemIdentifiersInSectionWithIdentifier:(id)identifier;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)identifier;
- (long long)indexOfItemIdentifier:(id)identifier;
- (long long)indexOfSectionIdentifier:(id)identifier;
- (void)appendItemsWithIdentifiers:(id)identifiers;
- (void)appendItemsWithIdentifiers:(id)identifiers intoSectionWithIdentifier:(id)identifier;
- (void)insertItemsWithIdentifiers:(id)identifiers beforeItemWithIdentifier:(id)identifier;
- (void)insertItemsWithIdentifiers:(id)identifiers afterItemWithIdentifier:(id)identifier;
- (void)deleteItemsWithIdentifiers:(id)identifiers;
- (void)deleteAllItems;
- (void)moveItemWithIdentifier:(id)identifier beforeItemWithIdentifier:(id)identifier;
- (void)moveItemWithIdentifier:(id)identifier afterItemWithIdentifier:(id)identifier;
- (void)reloadItemsWithIdentifiers:(id)identifiers;
- (void)reconfigureItemsWithIdentifiers:(id)identifiers;
- (void)appendSectionsWithIdentifiers:(id)identifiers;
- (void)insertSectionsWithIdentifiers:(id)identifiers beforeSectionWithIdentifier:(id)identifier;
- (void)insertSectionsWithIdentifiers:(id)identifiers afterSectionWithIdentifier:(id)identifier;
- (void)deleteSectionsWithIdentifiers:(id)identifiers;
- (void)moveSectionWithIdentifier:(id)identifier beforeSectionWithIdentifier:(id)identifier;
- (void)moveSectionWithIdentifier:(id)identifier afterSectionWithIdentifier:(id)identifier;
- (void)reloadSectionsWithIdentifiers:(id)identifiers;
- (void)appendSectionWithIdentifier:(id)identifier;
- (void)insertSectionWithIdentifier:(id)identifier beforeSectionWithIdentifier:(id)identifier;
- (void)insertSectionWithIdentifier:(id)identifier afterSectionWithIdentifier:(id)identifier;
- (id)sectionIdentifierForIndex:(long long)index;
- (long long)indexForSectionIdentifier:(id)identifier;
- (id)itemIdentifierForIndexPath:(id)path;
- (id)indexPathForItemIdentifier:(id)identifier;
- (void)_commitUpdateAtomic:(id)atomic;
- (void)_validateReloadUpdateThrowingIfNeeded:(id)needed;
- (void)_prepareForApplyToDataSource;
@end

#endif /* __UIDiffableDataSourceSnapshot_h */