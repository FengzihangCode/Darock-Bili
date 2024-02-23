//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSStageOutputsDataSource_h
#define GSStageOutputsDataSource_h
@import Foundation;

#include "GSDataSource.h"
#include "GSHIDAccelDataSource.h"
#include "GSHIDGyroDataSource.h"
#include "GSHealthLiteDataSource.h"
#include "GSPredictionPipeline.h"

@interface GSStageOutputsDataSource : GSDataSource

@property (retain, nonatomic) GSPredictionPipeline *pipeline;
@property (retain, nonatomic) GSHealthLiteDataSource *healthLiteDataSource;
@property (retain, nonatomic) GSHIDAccelDataSource *hidAccelDataSource;
@property (retain, nonatomic) GSHIDGyroDataSource *hidGyroDataSource;

/* class methods */
+ (id)title;

/* instance methods */
- (id)init;
- (void)_enumerateDataSourcesUsingBlock:(id /* block */)block;
- (BOOL)_canStreamData;
- (BOOL)_startStreamingData;
- (void)_stopStreamingData;
@end

#endif /* GSStageOutputsDataSource_h */