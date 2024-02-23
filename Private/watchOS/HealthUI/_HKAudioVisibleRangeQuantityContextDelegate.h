//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKAudioVisibleRangeQuantityContextDelegate_h
#define _HKAudioVisibleRangeQuantityContextDelegate_h
@import Foundation;

#include "_HKAudioStandardQuantityContextDelegate.h"
#include "HKLineSeries.h"

@interface _HKAudioVisibleRangeQuantityContextDelegate : _HKAudioStandardQuantityContextDelegate

@property (readonly, nonatomic) HKLineSeries *audioOverlayLineSeries;

/* instance methods */
- (id)initWithCustomDataSource:(id)source primaryDisplayType:(id)type;
- (id)alternateLineSeries;
- (id)valueString:(id)string applicationItems:(id)items representativeDisplayType:(id)type;
- (id)valueContextString:(id)string applicationItems:(id)items representativeDisplayType:(id)type;
- (void)_enumerateAudioExposureChartPoints:(id)points withBlock:(id /* block */)block;
- (id)formatterForTimescope:(long long)timescope;
@end

#endif /* _HKAudioVisibleRangeQuantityContextDelegate_h */