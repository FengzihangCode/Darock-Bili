//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7.2.9.0.0
//
#ifndef JEDeresVersionTreatmentAction_h
#define JEDeresVersionTreatmentAction_h
@import Foundation;

#include "JETreatmentAction.h"

@interface JEDeresVersionTreatmentAction : JETreatmentAction {
  /* instance variables */
  unsigned long long _precision;
}

/* instance methods */
- (id)initWithField:(id)field configuration:(id)configuration;
- (id)performAction:(id)action context:(id)context;
@end

#endif /* JEDeresVersionTreatmentAction_h */