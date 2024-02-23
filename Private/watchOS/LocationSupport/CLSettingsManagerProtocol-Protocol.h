//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLSettingsManagerProtocol_Protocol_h
#define CLSettingsManagerProtocol_Protocol_h
@import Foundation;

@protocol CLSettingsManagerProtocol <CLIntersiloServiceProtocol>
/* instance methods */
- (void)unregisterForUpdates:(by ref )updates;
- (id)syncgetSettingsAndRegisterForUpdates:(by ref )updates;
- (id)syncgetSetValue:(id)value forKey:(id)key withoutNotifying:(by ref )notifying;
- (void)flush;
- (void)refresh;
@end

#endif /* CLSettingsManagerProtocol_Protocol_h */