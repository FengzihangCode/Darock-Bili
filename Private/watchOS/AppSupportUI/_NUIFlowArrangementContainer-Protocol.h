//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 43.4.0.0.0
//
#ifndef _NUIFlowArrangementContainer_Protocol_h
#define _NUIFlowArrangementContainer_Protocol_h
@import Foundation;

@protocol _NUIFlowArrangementContainer <NUIArrangementContainer>
/* instance methods */
- (void)populateFlowArrangementCells:(void *)cells;
- (long long)alignmentForCell:(const struct _NUIFlowArrangementCell { id x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct { double x0; double x1; } x3; unsigned int x4 :8; unsigned int x5 :8; } *)cell inAxis:(long long)axis;
@optional
/* instance methods */
- (struct CGSize { double x0; double x1; })fittingSizeForCell:(const struct _NUIFlowArrangementCell { id x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct { double x0; double x1; } x3; unsigned int x4 :8; unsigned int x5 :8; } *)cell withProposedSize:(struct CGSize { double x0; double x1; })size;
- (long long)distributionForRowAtIndex:(long long)index ofTotalRowCount:(long long)count withCells:(const void *)cells;
- (BOOL)canCancelMeasurementForCompression;
- (BOOL)shouldCancelMeasurementForCompressionInAxis:(long long)axis;
@end

#endif /* _NUIFlowArrangementContainer_Protocol_h */