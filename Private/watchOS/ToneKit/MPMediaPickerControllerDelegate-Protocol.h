//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef MPMediaPickerControllerDelegate_Protocol_h
#define MPMediaPickerControllerDelegate_Protocol_h
@import Foundation;

@protocol MPMediaPickerControllerDelegate <NSObject>
@optional
/* instance methods */
- (void)mediaPicker:(id)picker didPickMediaItems:(id)items;
- (void)mediaPickerDidCancel:(id)cancel;
@end

#endif /* MPMediaPickerControllerDelegate_Protocol_h */