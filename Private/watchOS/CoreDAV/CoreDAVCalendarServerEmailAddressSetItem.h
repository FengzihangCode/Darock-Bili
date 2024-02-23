//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVCalendarServerEmailAddressSetItem_h
#define CoreDAVCalendarServerEmailAddressSetItem_h
@import Foundation;

#include "CoreDAVItem.h"
#include "CoreDAVItemWithNoChildren.h"

@class NSMutableArray;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

/* class methods */
+ (id)copyParseRules;

/* instance methods */
- (id)init;
- (id)description;
- (void)addEmailAddress:(id)address;
@end

#endif /* CoreDAVCalendarServerEmailAddressSetItem_h */