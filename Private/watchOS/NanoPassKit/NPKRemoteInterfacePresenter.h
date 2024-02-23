//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKRemoteInterfacePresenter_h
#define NPKRemoteInterfacePresenter_h
@import Foundation;

@class NSXPCConnection;
@protocol NPKRemoteInterfacePresenterDelegate;

@interface NPKRemoteInterfacePresenter : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) NSObject<NPKRemoteInterfacePresenterDelegate> *delegate;

/* instance methods */
- (id)init;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)request forHostApplicationName:(id)name hostBundleIdentifier:(id)identifier hostProcessIdentifier:(int)identifier hostIdentifier:(id)identifier orientation:(id)orientation completion:(id /* block */)completion;
- (void)presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)request completion:(id /* block */)completion;
- (void)showInAppInterfaceWithSkeletonPeerPaymentQuote:(id)quote completion:(id /* block */)completion;
- (void)clearInAppInterfaceForSkeletonPeerPaymentQuote:(id)quote withError:(id)error;
- (void)presentSetupApplePayAlert:(id)alert;
- (void)presentPasscodeUpgradeRequestWithChangeType:(unsigned long long)type completion:(id /* block */)completion;
- (void)tearDownPasscodeUpgradeRequestWithPasscodeChanged:(BOOL)changed error:(id)error;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)identifier fromSource:(long long)source completion:(id /* block */)completion;
@end

#endif /* NPKRemoteInterfacePresenter_h */