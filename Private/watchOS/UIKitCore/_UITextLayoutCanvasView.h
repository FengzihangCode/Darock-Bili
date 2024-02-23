//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextLayoutCanvasView_h
#define _UITextLayoutCanvasView_h
@import Foundation;

#include "UIView.h"
#include "NSTextViewportLayoutControllerDelegate-Protocol.h"
#include "_UITextCanvasContext-Protocol.h"
#include "_UITextKit2Canvas-Protocol.h"

@class NSMapTable, NSMutableSet, NSString, NSTextContainer, NSTextLayoutManager, NSTextViewportLayoutController;

@interface _UITextLayoutCanvasView : UIView<NSTextViewportLayoutControllerDelegate, _UITextKit2Canvas> {
  /* instance variables */
  NSTextViewportLayoutController *_viewportLayoutController;
  NSMutableSet *_viewportElementsToRemove;
  NSMapTable *_viewportElementViews;
  NSMutableSet *_textAttachmentViews;
  NSMutableSet *_newTextAttachmentViews;
  unsigned long long _textContainerIndex;
  struct CGSize { double width; double height; } _contentSize;
  BOOL _inLayout;
}

@property (readonly, nonatomic) NSTextLayoutManager *textLayoutManager;
@property (readonly, nonatomic) NSTextContainer *textContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UITextCanvasContext> *context;
@property BOOL layoutFragmentViewsNeedDisplay;

/* instance methods */
- (id)initWithTextLayoutManager:(id)manager textContainer:(id)container;
- (void)_viewportWillLayout;
- (void)_viewportDidLayout;
- (id)textRangeAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)textRangeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds layoutIfNeeded:(BOOL)needed;
- (void)setNeedsDisplay;
- (void)_performViewportLayout:(BOOL)layout;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewportBoundsForTextViewportLayoutController:(id)controller;
- (void)textViewportLayoutController:(id)controller configureRenderingSurfaceForTextLayoutFragment:(id)fragment;
- (void)textViewportLayoutControllerWillLayout:(id)layout;
- (void)textViewportLayoutControllerDidLayout:(id)layout;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)viewportBoundsDidChange;
- (void)updateContentSizeIfNeeded;
@end

#endif /* _UITextLayoutCanvasView_h */