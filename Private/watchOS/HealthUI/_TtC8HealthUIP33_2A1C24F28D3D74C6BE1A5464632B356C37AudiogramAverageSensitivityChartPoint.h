//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _TtC8HealthUIP33_2A1C24F28D3D74C6BE1A5464632B356C37AudiogramAverageSensitivityChartPoint_h
#define _TtC8HealthUIP33_2A1C24F28D3D74C6BE1A5464632B356C37AudiogramAverageSensitivityChartPoint_h
@import Foundation;

#include "HKChartPoint-Protocol.h"

@interface HealthUI.(AudiogramAverageSensitivityChartPoint in _2A1C24F28D3D74C6BE1A5464632B356C) : NSObject<HKChartPoint> { // (Swift)
  /* instance variables */
   xCoord;
   yCoord;
   averageSensitivity;
   isLeftEar;
}

/* instance methods */
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)key;
- (id)allYValues;
- (id)minYValue;
- (id)maxYValue;
- (id)userInfo;
- (id)init;
@end

#endif /* _TtC8HealthUIP33_2A1C24F28D3D74C6BE1A5464632B356C37AudiogramAverageSensitivityChartPoint_h */