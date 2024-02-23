//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.0.0.0
//
#ifndef WFTreeHTMLStripper_h
#define WFTreeHTMLStripper_h
@import Foundation;

#include "WFTreeXMLDocumentStripper.h"

@interface WFTreeHTMLStripper : WFTreeXMLDocumentStripper
/* class methods */
+ (id)treeStripperWithData:(id)data;
+ (id)treeStripperWithString:(id)string;

/* instance methods */
- (id)initWithData:(id)data;
- (id)initWithString:(id)string;
- (void)dealloc;
@end

#endif /* WFTreeHTMLStripper_h */