//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDocumentMenuViewController_h
#define UIDocumentMenuViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UIActionSheetPresentationControllerDelegate-Protocol.h"
#include "UIDocumentMenuDelegate-Protocol.h"
#include "_UIDocumentPickerRemoteViewControllerContaining-Protocol.h"
#include "_UIResilientRemoteViewContainerViewController.h"

@class NSArray, NSMutableArray, NSString, NSURL;

@interface UIDocumentMenuViewController : UIViewController<_UIDocumentPickerRemoteViewControllerContaining, UIActionSheetPresentationControllerDelegate> {
  /* instance variables */
  NSObject<UIDocumentMenuDelegate> *_weak_delegate;
  BOOL _ignoreApplicationEntitlementForImport;
}

@property (retain, nonatomic) NSMutableArray *auxiliaryOptions;
@property (retain, nonatomic) _UIResilientRemoteViewContainerViewController *childViewController;
@property (readonly, retain, nonatomic) _UIDocumentPickerRemoteViewController *remoteViewController;
@property (nonatomic) BOOL dismissDelegateCalled;
@property (nonatomic) unsigned long long documentPickerMode;
@property (copy, nonatomic) NSURL *uploadURL;
@property (copy, nonatomic) NSArray *allowedUTIs;
@property (nonatomic) BOOL _ignoreApplicationEntitlementForImport;
@property (nonatomic) BOOL isContentManaged;
@property (@dynamic, nonatomic) BOOL sourceIsManaged;
@property (weak, nonatomic) NSObject<UIDocumentMenuDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithDocumentTypes:(id)types inMode:(unsigned long long)mode;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)types;
- (id)initWithURL:(id)url inMode:(unsigned long long)mode;
- (void)_commonInitWithCompletion:(id /* block */)completion;
- (id)initWithCoder:(id)coder;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (void)addOptionWithTitle:(id)title image:(id)image order:(unsigned long long)order handler:(id /* block */)handler;
- (void)_setChildViewController:(id)controller;
- (id)_remoteViewController;
- (BOOL)_sourceIsManaged;
- (void)_setSourceIsManaged:(BOOL)managed;
- (void)_setIsContentManaged:(BOOL)managed;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)url;
- (void)_stitchFileCreationAtURL:(id)url;
- (void)_displayLocationsMenuFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)sheet;
- (void)_dismissViewController;
- (void)_dismissWithOption:(id)option;
- (void)setModalPresentationStyle:(long long)style;
- (void)_setIgnoreApplicationEntitlementForImport:(BOOL)import;
- (id)_childViewController;
- (BOOL)_isContentManaged;
@end

#endif /* UIDocumentMenuViewController_h */