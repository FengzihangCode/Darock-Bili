//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarTestData_h
#define STUIStatusBarTestData_h
@import Foundation;

#include "STMutableStatusBarData.h"

@class NSMutableDictionary, NSSet;

@interface STUIStatusBarTestData : STMutableStatusBarData

@property (copy, nonatomic) NSSet *updatedKeys;
@property (copy, nonatomic) NSSet *enabledKeys;
@property (retain, nonatomic) NSMutableDictionary *testEntries;

/* class methods */
+ (id)testDataWithUpdatedKeys:(id)keys enabledKeys:(id)keys;
+ (id)fullTestData;
+ (id)emptyTestData;
+ (id)dependentDataKeyForItemIdentifier:(id)identifier;
+ (id)dependentDataKeyForDisplayItemIdentifier:(id)identifier;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEmpty;
- (void)setDataEntry:(id)entry forKey:(id)key;
- (id)valueForKey:(id)key;
- (void)setValue:(id)value forUndefinedKey:(id)key;
- (id)existingEntryKeys;
- (void)applyUpdate:(id)update;
- (id)_descriptionBuilderWithMultilinePrefix:(id)prefix forDebug:(BOOL)debug;
@end

#endif /* STUIStatusBarTestData_h */