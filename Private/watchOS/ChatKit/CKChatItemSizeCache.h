//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKChatItemSizeCache_h
#define CKChatItemSizeCache_h
@import Foundation;

#include "IMSystemMonitorListener-Protocol.h"

@class IMDoubleLinkedList, IMScheduledUpdater, NSData, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CKChatItemSizeCache : NSObject<IMSystemMonitorListener>

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableDictionary *chatItemGUIDToCacheKeyMap;
@property (retain, nonatomic) IMDoubleLinkedList *orderedKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheDiskQueue;
@property (retain, nonatomic) IMScheduledUpdater *evictionUpdater;
@property (retain, nonatomic) NSString *preferredLocalization;
@property (nonatomic) BOOL test_throwExceptionDuringInflate;
@property (retain, nonatomic) NSData *test_cacheData;

/* class methods */
+ (id)sharedInstance;
+ (id)test_cachePath;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)initForTestAndThrowException:(BOOL)exception cacheFileData:(id)data;
- (void)_commonInit;
- (BOOL)cachedSizeForChatItem:(id)item size:(out struct CGSize { double x0; double x1; } *)size textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)insets fittingSize:(struct CGSize { double x0; double x1; })size;
- (void)setCachedSizeForChatItem:(id)item size:(struct CGSize { double x0; double x1; })size textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets fittingSize:(struct CGSize { double x0; double x1; })size;
- (void)invalidateCachedSizeForChatItem:(id)item;
- (void)invalidateCachedSizeForGUIDPrefix:(id)guidprefix;
- (void)_invalidateCachedSizeForChatItemGUID:(id)guid;
- (void)_invalidateSizeCacheMetricsForKey:(id)key;
- (id)cacheKeyForChatItem:(id)item fittingSize:(struct CGSize { double x0; double x1; })size;
- (id)_systemVersion;
- (id)_fontSizeCategory;
- (BOOL)_boldTextEnabled;
- (void)_evictIfNeeded;
- (void)_persistCache;
- (void)_inflateCache;
- (id)_generateChatItemGuidToCacheKeyMapWithCache:(id)cache;
- (void)_updateKeyMap:(id)map forKey:(id)key sizeCacheKey:(id)key;
- (void)applicationWillResignActive;
- (void)systemApplicationDidSuspend;
@end

#endif /* CKChatItemSizeCache_h */