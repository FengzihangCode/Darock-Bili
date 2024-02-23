//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.4.1.0.0
//
#ifndef SiriCoreSQLiteTableConstraint_h
#define SiriCoreSQLiteTableConstraint_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SiriCoreSQLiteTableConstraint : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSArray *columnNames;

/* class methods */
+ (id)primaryKeyTableConstraintWithName:(id)name columnNames:(id)names;
+ (id)uniqueTableConstraintWithName:(id)name columnNames:(id)names;

/* instance methods */
- (id)initWithName:(id)name type:(long long)type columnNames:(id)names;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SiriCoreSQLiteTableConstraint_h */