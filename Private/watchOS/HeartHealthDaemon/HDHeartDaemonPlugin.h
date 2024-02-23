//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHeartDaemonPlugin_h
#define HDHeartDaemonPlugin_h
@import Foundation;

#include "HDDatabaseSchemaProvider-Protocol.h"
#include "HDDemoDataGeneratorProvider-Protocol.h"
#include "HDPlugin-Protocol.h"
#include "HDTaskServerClassProvider-Protocol.h"

@class NSString, NSUserDefaults;

@interface HDHeartDaemonPlugin : NSObject<HDPlugin, HDTaskServerClassProvider, HDDatabaseSchemaProvider, HDDemoDataGeneratorProvider> {
  /* instance variables */
  NSUserDefaults *_heartNotificationsUserDefaults;
}

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *schemaName;

/* instance methods */
- (id)init;
- (id)initWithHeartNotificationsUserDefaults:(id)defaults;
- (id)extensionForProfile:(id)profile;
- (id)extensionForHealthDaemon:(id)daemon;
- (void)handleDatabaseObliteration;
- (id)taskServerClasses;
- (long long)currentSchemaVersionForProtectionClass:(long long)class;
- (id)databaseEntitiesForProtectionClass:(long long)class;
- (void)registerMigrationStepsForProtectionClass:(long long)class migrator:(id)migrator;
- (id)demoDataGeneratorClasses;
- (id)_databaseSchemaForProtectionClass:(long long)class;
@end

#endif /* HDHeartDaemonPlugin_h */