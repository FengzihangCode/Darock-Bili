//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXUIAssertionManager_h
#define AXUIAssertionManager_h
@import Foundation;

@class NSMutableSet, RBSAssertion;

@interface AXUIAssertionManager : NSObject

@property (retain, nonatomic) RBSAssertion *assertionUI;
@property (retain, nonatomic) RBSAssertion *assertionBackground;
@property (retain, nonatomic) NSMutableSet *clientsWithUIAssertion;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)acquireAssertionIfNeeded;
- (void)invalidateAssertionIfNeeded;
- (void)acquireAssertionUIIfNeeded;
- (void)invalidateAssertionUIIfNeeded;
- (void)acquireAssertionUIIfNeededForService:(id)service clientIdentifier:(id)identifier;
- (void)invalidateAssertionUIIfNeededForService:(id)service clientIdentifier:(id)identifier;
- (void)_invalidateAssertion;
- (void)_invalidateAssertionUI;
- (id)_serviceClientIDForService:(id)service clientIdentifier:(id)identifier;
@end

#endif /* AXUIAssertionManager_h */