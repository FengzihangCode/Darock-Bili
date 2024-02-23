//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIScreenFixedCoordinateSpace_h
#define _UIScreenFixedCoordinateSpace_h
@import Foundation;

#include "UICoordinateSpace-Protocol.h"
#include "UIScreen.h"

@class NSString;

@interface _UIScreenFixedCoordinateSpace : NSObject<UICoordinateSpace> {
  /* instance variables */
  UIScreen *_screen;
}

@property (nonatomic) UIScreen *_screen;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })point toCoordinateSpace:(id)space;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })point fromCoordinateSpace:(id)space;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect toCoordinateSpace:(id)space;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect fromCoordinateSpace:(id)space;
- (void)_setScreen:(id)screen;
@end

#endif /* _UIScreenFixedCoordinateSpace_h */