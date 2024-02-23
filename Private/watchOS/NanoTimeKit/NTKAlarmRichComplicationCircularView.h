//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKAlarmRichComplicationCircularView_h
#define NTKAlarmRichComplicationCircularView_h
@import Foundation;

#include "NTKAlarmRichComplicationBaseCircularView.h"

@interface NTKAlarmRichComplicationCircularView : NTKAlarmRichComplicationBaseCircularView
/* class methods */
+ (BOOL)supportsComplicationFamily:(long long)family;

/* instance methods */
- (id)init;
- (long long)_backgroundFilterStyle;
- (long long)_foregroundFilterStyle;
@end

#endif /* NTKAlarmRichComplicationCircularView_h */