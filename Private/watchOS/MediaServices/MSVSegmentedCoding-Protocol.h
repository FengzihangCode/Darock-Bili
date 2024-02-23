//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MSVSegmentedCoding_Protocol_h
#define MSVSegmentedCoding_Protocol_h
@import Foundation;

@protocol MSVSegmentedCoding <NSSecureCoding, NSObject>
/* instance methods */
- (id)segmentForCodingKey:(id)key;
- (long long)versionForSegment:(id)segment;
- (void)didRestoreVersion:(long long)version forSegment:(id)segment;
@end

#endif /* MSVSegmentedCoding_Protocol_h */