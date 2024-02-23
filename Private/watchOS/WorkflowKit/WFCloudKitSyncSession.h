//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCloudKitSyncSession_h
#define WFCloudKitSyncSession_h
@import Foundation;

@interface WFCloudKitSyncSession : NSObject
/* class methods */
+ (void)initialize;
+ (BOOL)isSyncEnabled;
+ (void)setSyncEnabled:(BOOL)enabled;
+ (BOOL)zoneWasPurged;
+ (void)setZoneWasPurged:(BOOL)purged;
+ (BOOL)ignoresUserDeletedZoneErrors;
+ (void)setIgnoresUserDeletedZoneErrors:(BOOL)errors;
+ (BOOL)voiceShortcutMigrationDidRun;
+ (void)setVoiceShortcutMigrationDidRun:(BOOL)run;
+ (BOOL)voiceShortcutMigrationDidSync;
+ (void)setVoiceShortcutMigrationDidSync:(BOOL)sync;
+ (long long)defaultShortcutsVersion;
+ (void)setDefaultShortcutsVersion:(long long)version;
+ (BOOL)needsDefaultShortcutUpdate;
+ (long long)lastSyncedFlagsHash;
+ (void)setLastSyncedFlagsHash:(long long)hash;
+ (long long)syncedFlagsHash;
+ (void)resolveWalrusStatus;
+ (BOOL)isWalrusEnabled;
+ (void)setWalrusEnabled:(BOOL)enabled;
+ (BOOL)isWalrusForcedEnabled;
+ (void)setWalrusForcedEnabled:(BOOL)enabled;
+ (long long)currentDefaultShortcutsVersion;
+ (void)fetchCloudKitSyncFlagsIfNecessaryWithCompletionHandler:(id /* block */)handler;

/* instance methods */
- (id)applyConflictResolution:(id)resolution inDatabase:(id)database;
@end

#endif /* WFCloudKitSyncSession_h */