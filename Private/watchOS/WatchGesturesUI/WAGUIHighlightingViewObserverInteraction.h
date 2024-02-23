//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGUIHighlightingViewObserverInteraction_h
#define WAGUIHighlightingViewObserverInteraction_h
@import Foundation;

#include "UIInteraction-Protocol.h"
#include "WAGUIHighlightingViewObserverInteractionDelegate-Protocol.h"

@class NSString, UIView;

@interface WAGUIHighlightingViewObserverInteraction : NSObject<UIInteraction>

@property (readonly, weak, nonatomic) NSObject<WAGUIHighlightingViewObserverInteractionDelegate> *delegate;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)willMoveToView:(id)view;
- (void)didMoveToView:(id)view;
- (void)_didMoveFromWindow:(id)window toWindow:(id)window;
@end

#endif /* WAGUIHighlightingViewObserverInteraction_h */