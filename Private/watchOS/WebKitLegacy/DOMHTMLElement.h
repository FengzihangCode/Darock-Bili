//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef DOMHTMLElement_h
#define DOMHTMLElement_h
@import Foundation;

#include "DOMElement.h"
#include "DOMHTMLCollection.h"

@class NSString;

@interface DOMHTMLElement : DOMElement

@property (copy) NSString *title;
@property (copy) NSString *lang;
@property (copy) NSString *dir;
@property int tabIndex;
@property (copy) NSString *accessKey;
@property (copy) NSString *innerText;
@property (copy) NSString *outerText;
@property (copy) NSString *contentEditable;
@property (readonly) BOOL isContentEditable;
@property (copy) NSString *idName;
@property (readonly) DOMHTMLCollection *children;
@property (readonly, copy) NSString *titleDisplayString;

/* instance methods */
- (int)structuralComplexityContribution;
- (int)scrollXOffset;
- (int)scrollYOffset;
- (void)setScrollXOffset:(int)xoffset scrollYOffset:(int)yoffset;
- (void)setScrollXOffset:(int)xoffset scrollYOffset:(int)yoffset adjustForIOSCaret:(BOOL)ioscaret;
- (void)absolutePosition:(int *)position;
- (BOOL)translate;
- (void)setTranslate:(BOOL)translate;
- (BOOL)draggable;
- (void)setDraggable:(BOOL)draggable;
- (id)webkitdropzone;
- (void)setWebkitdropzone:(id)webkitdropzone;
- (BOOL)hidden;
- (void)setHidden:(BOOL)hidden;
- (BOOL)spellcheck;
- (void)setSpellcheck:(BOOL)spellcheck;
- (id)insertAdjacentElement:(id)element element:(id)element;
- (void)insertAdjacentHTML:(id)html html:(id)html;
- (void)insertAdjacentText:(id)text text:(id)text;
- (void)click;
- (BOOL)autocorrect;
- (void)setAutocorrect:(BOOL)autocorrect;
- (id)autocapitalize;
- (void)setAutocapitalize:(id)autocapitalize;
@end

#endif /* DOMHTMLElement_h */