//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2622.0.0.0.0
//
#ifndef DMConnection_h
#define DMConnection_h
@import Foundation;

#include "DMXPCConnection.h"

@interface DMConnection : NSObject {
  /* instance variables */
  DMXPCConnection *_connection;
}

/* class methods */
+ (id)connection;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)connection;
- (BOOL)isMigrationNeeded;
- (unsigned int)userDataDisposition;
- (id)userDataDispositionAuxiliaryData;
- (id)previousBuildVersion;
- (long long)migrateCheckingNecessity:(BOOL)necessity lastRelevantPlugin:(id)plugin testMigrationInfrastructureOnly:(BOOL)only;
- (id)orderedPluginIdentifiers;
- (void)changeVisibility:(BOOL)visibility completion:(id /* block */)completion;
- (void)testMigrationUIWithProgress:(BOOL)progress forceInvert:(BOOL)invert;
- (void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned int)disposition;
- (void)reportMigrationFailure;
- (id)migrationPhaseDescription;
- (void)migrationPluginResults:(id /* block */)results;
- (void)deferExit;
- (void)cancelDeferredExit;
@end

#endif /* DMConnection_h */