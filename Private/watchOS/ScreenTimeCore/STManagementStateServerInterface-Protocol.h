//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STManagementStateServerInterface_Protocol_h
#define STManagementStateServerInterface_Protocol_h
@import Foundation;

@protocol STManagementStateServerInterface <NSObject>
/* instance methods */
- (void)screenTimeStateWithCompletionHandler:(id /* block */)handler;
- (void)setScreenTimeEnabled:(BOOL)enabled completionHandler:(id /* block */)handler;
- (void)enableScreenTimeForDSID:(id)dsid completionHandler:(id /* block */)handler;
- (void)enableRemoteManagementForDSID:(id)dsid completionHandler:(id /* block */)handler;
- (void)isContentPrivacyEnabledForDSID:(id)dsid completionHandler:(id /* block */)handler;
- (void)screenTimeSyncStateWithCompletionHandler:(id /* block */)handler;
- (void)setScreenTimeSyncingEnabled:(BOOL)enabled completionHandler:(id /* block */)handler;
- (void)shouldRequestMoreTimeWithCompletionHandler:(id /* block */)handler;
- (void)clearRestrictionsPasscodeWithCompletionHandler:(id /* block */)handler;
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(id /* block */)handler;
- (void)needsToSetRestrictionsPasscodeWithReplyHandler:(id /* block */)handler;
- (void)authenticateRestrictionsPasscode:(id)passcode replyHandler:(id /* block */)handler;
- (void)deleteWebHistoryForURL:(id)url webApplication:(id)application replyHandler:(id /* block */)handler;
- (void)deleteWebHistoryForURLs:(id)urls webApplication:(id)application replyHandler:(id /* block */)handler;
- (void)deleteWebHistoryForDomain:(id)domain webApplication:(id)application replyHandler:(id /* block */)handler;
- (void)deleteWebHistoryDuringInterval:(id)interval webApplication:(id)application replyHandler:(id /* block */)handler;
- (void)deleteAllWebApplicationHistory:(id)history replyHandler:(id /* block */)handler;
- (void)deleteWebHistoryForURL:(id)url webApplication:(id)application profileIdentifier:(id)identifier replyHandler:(id /* block */)handler;
- (void)deleteWebHistoryForURLs:(id)urls webApplication:(id)application profileIdentifier:(id)identifier replyHandler:(id /* block */)handler;
- (void)deleteWebHistoryForDomain:(id)domain webApplication:(id)application profileIdentifier:(id)identifier replyHandler:(id /* block */)handler;
- (void)deleteWebHistoryDuringInterval:(id)interval webApplication:(id)application profileIdentifier:(id)identifier replyHandler:(id /* block */)handler;
- (void)deleteAllWebApplicationHistory:(id)history profileIdentifier:(id)identifier replyHandler:(id /* block */)handler;
- (void)deleteWebHistoryForURL:(id)url webApplication:(id)application clientBundleURLWrapper:(id)urlwrapper replyHandler:(id /* block */)handler;
- (void)deleteWebHistoryDuringInterval:(id)interval webApplication:(id)application clientBundleURLWrapper:(id)urlwrapper replyHandler:(id /* block */)handler;
- (void)deleteAllWebApplicationHistory:(id)history clientBundleURLWrapper:(id)urlwrapper replyHandler:(id /* block */)handler;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)handler;
- (void)communicationPoliciesForDSID:(id)dsid withCompletionHandler:(id /* block */)handler;
- (void)setContactManagementState:(long long)state forDSID:(id)dsid completionHandler:(id /* block */)handler;
- (void)contactManagementStateForDSID:(id)dsid completionHandler:(id /* block */)handler;
- (void)primaryiCloudCardDAVAccountIdentifierWithCompletionHandler:(id /* block */)handler;
- (void)contactsEditableWithReplyHandler:(id /* block */)handler;
- (void)performMigrationFromMCXSettings:(id)mcxsettings completionHandler:(id /* block */)handler;
- (void)applyDefaultUserPoliciesWithCompletionHandler:(id /* block */)handler;
- (void)permitWebFilterURL:(id)url pageTitle:(id)title completionHandler:(id /* block */)handler;
- (void)shouldAllowOneMoreMinuteForBundleIdentifier:(id)identifier replyHandler:(id /* block */)handler;
- (void)shouldAllowOneMoreMinuteForWebDomain:(id)domain replyHandler:(id /* block */)handler;
- (void)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)identifier replyHandler:(id /* block */)handler;
- (void)isExplicitContentRestrictedWithCompletionHandler:(id /* block */)handler;
- (void)applyIntroductionModel:(id)model forDSID:(id)dsid completionHandler:(id /* block */)handler;
- (void)isLocationSharingModificationAllowedForDSID:(id)dsid completionHandler:(id /* block */)handler;
- (void)setLocationSharingModificationAllowed:(BOOL)allowed forDSID:(id)dsid completionHandler:(id /* block */)handler;
- (void)lastModifcationDateForDSID:(id)dsid completionHandler:(id /* block */)handler;
- (void)lastCommunicationLimitsModifcationDateForDSID:(id)dsid completionHandler:(id /* block */)handler;
@end

#endif /* STManagementStateServerInterface_Protocol_h */