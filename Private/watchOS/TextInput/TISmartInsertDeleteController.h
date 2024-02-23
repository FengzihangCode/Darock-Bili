//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISmartInsertDeleteController_h
#define TISmartInsertDeleteController_h
@import Foundation;

#include "TITextInputTraits.h"

@interface TISmartInsertDeleteController : NSObject

@property (readonly, nonatomic) TITextInputTraits *textInputTraits;
@property (nonatomic) BOOL enabled;

/* instance methods */
- (id)initWithTextInputTraits:(id)traits;
- (void)smartDeleteForDocumentState:(id)state outBeforeLength:(unsigned long long *)length outAfterLength:(unsigned long long *)length;
- (unsigned long long)_numberOfCharactersInSet:(id)set atBeginningOfString:(id)string;
- (unsigned long long)_numberOfCharactersInSet:(id)set atEndOfString:(id)string;
- (void)smartInsertForDocumentState:(id)state stringToInsert:(id)insert outBeforeString:(id *)string outAfterString:(id *)string;
- (BOOL)isEnabled;
@end

#endif /* TISmartInsertDeleteController_h */