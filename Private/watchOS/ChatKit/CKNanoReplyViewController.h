//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoReplyViewController_h
#define CKNanoReplyViewController_h
@import Foundation;

#include "PUICQuickboardMessageViewController.h"
#include "CKConversation.h"
#include "CKNanoReplyViewController.h"
#include "CKNanoReplyViewControllerDismissalDelegate-Protocol.h"
#include "CKNanoReplyViewControllerProtocol-Protocol.h"
#include "CKNanoSendController.h"
#include "PUICQuickboardControllerDelegate-Protocol.h"

@class NSNumber, NSString, UIViewController;

@interface CKNanoReplyViewController : PUICQuickboardMessageViewController<PUICQuickboardControllerDelegate, CKNanoReplyViewControllerProtocol>

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) CKNanoSendController *sendController;
@property (retain, nonatomic) CKNanoReplyViewController *keepAlive;
@property (weak, nonatomic) UIViewController *originalPresentingViewController;
@property (copy, nonatomic) NSString *smartReplyContext;
@property (copy, nonatomic) NSString *breadcrumbText;
@property (nonatomic) BOOL allowsInlineReply;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKNanoReplyViewControllerDismissalDelegate> *dismissalDelegate;
@property (copy, nonatomic) id /* block */ messageForReplyBlock;
@property (copy, nonatomic) NSNumber *messageItemListNumber;

/* class methods */
+ (id)_conversationForContactIDs:(id)ids;

/* instance methods */
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (id)initWithDelegate:(id)delegate dictationMode:(long long)mode;
- (id)initWithConversation:(id)conversation;
- (id)initForChatController:(id)controller;
- (id)initWithRecipients:(id)recipients;
- (id)initWithRecipients:(id)recipients allowRetargeting:(BOOL)retargeting;
- (id)initWithContacts:(id)contacts allowRetargeting:(BOOL)retargeting;
- (id)initWithContact:(id)contact allowRetargeting:(BOOL)retargeting;
- (void)_connectToDaemonIfNeeded;
- (void)_disconnectFromDaemonIfNeeded;
- (id)MSMessageForSelectedReply:(id)reply bundleID:(id *)id;
- (void)viewDidAppear:(BOOL)appear;
- (void)cleanupState;
- (void)loadSmartReplies;
- (void)updateDictationMode;
- (void)presentFromViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)dismissAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)conversationPreferredServiceChanged:(id)changed;
- (void)updateTrayButtonsBackgroundColor;
- (void)updateTextInputContext;
- (id)_serviceColor;
- (void)quickboardController:(id)controller textInputValueDidChange:(id)change;
- (void)quickboardControllerTextInputValueCancelled:(id)cancelled;
- (void)didSelectListItem:(long long)item;
- (void)primaryLanguageDidChange:(id)change;
- (BOOL)shouldShowTrayView;
- (BOOL)shouldShowTextField;
@end

#endif /* CKNanoReplyViewController_h */