//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISPropertyListProvider_h
#define ISPropertyListProvider_h
@import Foundation;

#include "ISProtocolDataProvider.h"
#include "NSCopying-Protocol.h"

@interface ISPropertyListProvider : ISProtocolDataProvider<NSCopying>
/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)processDialogFromPropertyList:(id)list returningError:(id *)error;
- (BOOL)processPropertyList:(id)list returningError:(id *)error;
@end

#endif /* ISPropertyListProvider_h */