//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSCyclerItemListRepresentation_h
#define WBSCyclerItemListRepresentation_h
@import Foundation;

#include "WBSCyclerItemRepresentation.h"
#include "NSFastEnumeration-Protocol.h"

@class NSMutableArray;

@interface WBSCyclerItemListRepresentation : WBSCyclerItemRepresentation<NSFastEnumeration> {
  /* instance variables */
  NSMutableArray *_children;
}

@property (readonly, nonatomic) unsigned long long numberOfChildren;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTitle:(id)title uniqueIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEquivalent:(id)equivalent;
- (id)pairsOfItemsWithDifferingExtraAttributesComparedTo:(id)to;
- (void)addChild:(id)child;
- (void)insertChild:(id)child atIndex:(unsigned long long)index;
- (void)deleteChild:(id)child;
- (void)deleteDescendant:(id)descendant;
- (void)deleteAllChildren;
- (BOOL)containsChild:(id)child;
- (BOOL)containsChildPassingTest:(id /* block */)test;
- (BOOL)containsDescendant:(id)descendant;
- (id)childAtIndex:(unsigned long long)index;
- (id)descendantWithUniqueIdentifier:(id)identifier;
- (id)randomDescendantPassingTest:(id /* block */)test;
- (id)randomChildPassingTest:(id /* block */)test;
- (id)allDescendantsPassingTest:(id /* block */)test;
- (id)randomDescendant;
- (id)randomListDescendant;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id * x1; unsigned long long * x2; unsigned long long x3[5] } *)state objects:(id *)objects count:(unsigned long long)count;
- (BOOL)_tryToDeleteDescendant:(id)descendant;
@end

#endif /* WBSCyclerItemListRepresentation_h */