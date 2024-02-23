//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIWindowSceneDragInteraction_h
#define UIWindowSceneDragInteraction_h
@import Foundation;

#include "UIGestureRecognizer.h"
#include "UIInteraction-Protocol.h"
#include "UIView.h"
#include "_UIWindowSceneDragInteractionImpl-Protocol.h"

@class NSString;

@interface UIWindowSceneDragInteraction : NSObject<UIInteraction>

@property (retain, nonatomic) NSObject<_UIWindowSceneDragInteractionImpl> *impl;
@property (readonly, nonatomic) UIGestureRecognizer *gestureForFailureRelationships;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)didMoveToView:(id)view;
- (void)willMoveToView:(id)view;
@end

#endif /* UIWindowSceneDragInteraction_h */