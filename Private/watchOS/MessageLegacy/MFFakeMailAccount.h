//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFFakeMailAccount_h
#define MFFakeMailAccount_h
@import Foundation;

#include "MailAccount.h"
#include "DeliveryAccount.h"

@class MFIMAPConnection, NSRecursiveLock, NSURL;

@interface MFFakeMailAccount : MailAccount {
  /* instance variables */
  NSURL *_URL;
  MFIMAPConnection *_cachedConnection;
  NSRecursiveLock *_flagChangesLock;
}

@property (retain, nonatomic) DeliveryAccount *deliveryAccount;
@property (nonatomic) BOOL managed;

/* instance methods */
- (id)init;
- (id)initWithURL:(id)url;
- (id)initWithURL:(id)url rootMailboxUid:(id)uid;
- (BOOL)isActive;
- (BOOL)supportsRemoteAppend;
- (BOOL)supportsFastRemoteBodySearch;
- (id)URLString;
- (void)setUnreadCount:(unsigned int)count forMailbox:(id)mailbox;
- (BOOL)willPerformActionForChokePoint:(id)point coalescePoint:(id)point result:(id *)result;
- (void)didFinishActionForChokePoint:(id)point coalescePoint:(id)point withResult:(id)result;
- (id)_URLScheme;
- (id)hostname;
- (id)username;
- (id)displayName;
- (id)_mailboxPathPrefix;
- (id)debugDescription;
- (id)description;
- (id)_nameForMailboxUid:(id)uid;
- (id)uniqueId;
- (id)powerAssertionIdentifierWithPrefix:(id)prefix;
- (unsigned int)minID;
- (int)cachePolicy;
- (void)setCachedConnection:(id)connection;
- (id)connectionForStore:(id)store delegate:(id)delegate options:(int)options;
- (id)flagChangesForMailboxPath:(id)path UID:(unsigned int)uid connectTime:(double)time;
- (id)flagChangesLock;
- (BOOL)shouldFetchAgainWithError:(id)error foregroundRequest:(BOOL)request;
- (BOOL)_shouldConfigureMailboxCache;
- (BOOL)isManaged;
@end

#endif /* MFFakeMailAccount_h */