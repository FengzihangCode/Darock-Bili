//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.0.0.0.0
//
#ifndef NBServerProtocol_Protocol_h
#define NBServerProtocol_Protocol_h
@import Foundation;

@protocol NBServerProtocol <NSObject>
/* instance methods */
- (void)listBackupsOfType:(unsigned long long)type timeout:(long long)timeout completionHandler:(id /* block */)handler;
- (void)restoreFromBackupID:(id)id backupType:(unsigned long long)type forPairingID:(id)id completionHandler:(id /* block */)handler;
- (void)restoreFromPairingID:(id)id forPairingID:(id)id completionHandler:(id /* block */)handler;
- (void)createLocalBackupForPairingID:(id)id completionHandler:(id /* block */)handler;
- (void)createManualBackupWithCompletion:(id /* block */)completion;
- (void)deleteBackupID:(id)id backupType:(unsigned long long)type completionHandler:(id /* block */)handler;
- (void)setBackupsEnabled:(BOOL)enabled completionHandler:(id /* block */)handler;
@end

#endif /* NBServerProtocol_Protocol_h */