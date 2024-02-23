//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKExportPDFControl_h
#define HKExportPDFControl_h
@import Foundation;

#include "UIControl.h"

@interface HKExportPDFControl : UIControl
/* instance methods */
- (id)initWithText:(id)text layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins accessibilityIdentifierPrefix:(id)prefix;
- (void)_setupUIWithText:(id)text layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins accessibilityIdentifier:(id)identifier;
@end

#endif /* HKExportPDFControl_h */