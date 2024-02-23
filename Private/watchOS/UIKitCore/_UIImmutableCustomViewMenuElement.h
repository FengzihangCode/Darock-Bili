//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIImmutableCustomViewMenuElement_h
#define _UIImmutableCustomViewMenuElement_h
@import Foundation;

#include "UICustomViewMenuElement.h"

@interface _UIImmutableCustomViewMenuElement : UICustomViewMenuElement
/* instance methods */
- (void)setMenuElementRepresentation:(id)representation;
- (void)setPrimaryActionHandler:(id /* block */)handler;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_immutableCopy;
@end

#endif /* _UIImmutableCustomViewMenuElement_h */