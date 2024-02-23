//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKTileActionItem_h
#define NPKTileActionItem_h
@import Foundation;

@class PKPassTile, PKPaymentPassAction;

@interface NPKTileActionItem : NSObject

@property (readonly, nonatomic) PKPassTile *tile;
@property (readonly, nonatomic) PKPaymentPassAction *action;

/* instance methods */
- (id)initWithTile:(id)tile action:(id)action;
- (id)description;
@end

#endif /* NPKTileActionItem_h */