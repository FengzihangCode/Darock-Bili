//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKGraphSeriesConfigurationManager_h
#define HKGraphSeriesConfigurationManager_h
@import Foundation;

@class NSMutableDictionary;

@interface HKGraphSeriesConfigurationManager : NSObject {
  /* instance variables */
  NSMutableDictionary *_zoomLevelConfigurationManagers;
}

/* instance methods */
- (id)init;
- (void)addConfiguration:(id)configuration zoom:(long long)zoom;
- (void)removeConfigurationsForDisplayType:(id)type;
- (void)reset;
- (id)configurationForDisplayType:(id)type zoom:(long long)zoom;
- (id)configurationForGraphSeries:(id)series zoom:(long long)zoom;
- (id)allDisplayTypes;
- (id)allDisplayTypesForZoom:(long long)zoom;
- (id)allGraphSeriesForZoom:(long long)zoom;
- (long long)_zoomLevelForGraphZoom:(long long)zoom;
- (id)_configurationManagerForZoom:(long long)zoom;
@end

#endif /* HKGraphSeriesConfigurationManager_h */