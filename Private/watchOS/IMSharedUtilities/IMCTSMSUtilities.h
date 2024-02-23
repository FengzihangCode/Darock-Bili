//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMCTSMSUtilities_h
#define IMCTSMSUtilities_h
@import Foundation;

@interface IMCTSMSUtilities : NSObject
/* class methods */
+ (id)IMUniqueIdentifierForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMReadMMSUserOverrideForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMMMSDefaultEnabledForPhoneNumber:(id)number simID:(id)id;
+ (id)IMPhoneNumbersEnabledForMultipleSubscriptionDevice;
+ (BOOL)IMMMSEnabledForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMReadEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMReadDisablePreviewTranscodingQualityOnWiFiCarrierValueForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMReadDisablePreviewTranscodingQualityOnWRMCarrierValueForPhoneNumber:(id)number simID:(id)id;
+ (unsigned long long)IMReadAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMMMSSupportedAndConfiguredForPhoneNumber:(id)number simID:(id)id;
+ (int)IMMMSMaximumSlideCountForPhoneNumber:(id)number simID:(id)id;
+ (int)IMMMSMaximumMessageByteCountForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMMMSGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMMMSGroupTextReplicationSupportedForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMMMSGroupTextReplicationSupportsSMILContentLocationForPhoneNumber:(id)number simID:(id)id;
+ (int)IMMMSMaxRecipientsForPhoneNumber:(id)number simID:(id)id;
+ (int)IMMMSMaxImageDimensionForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMMMSSupportsH264VideoForPhoneNumber:(id)number simID:(id)id;
+ (double)IMMMSMaximumAudioDurationForPhoneNumber:(id)number simID:(id)id;
+ (double)IMMMSMaximumVideoDurationForPhoneNumber:(id)number simID:(id)id;
+ (double)IMMMSMaximumDurationWithPreset:(id)preset phoneNumber:(id)number simID:(id)id;
+ (void)IMiMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long *)number cellSize:(unsigned long long *)size serverConfigurationBag:(id)bag phoneNumber:(id)number simID:(id)id;
+ (unsigned long long)IMiMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long *)number cellSize:(unsigned long long *)size serverConfigurationBag:(id)bag phoneNumber:(id)number simID:(id)id;
+ (unsigned long long)IMiMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long *)number cellSize:(unsigned long long *)size serverConfigurationBag:(id)bag phoneNumber:(id)number simID:(id)id;
+ (id)IMMMSEmailAddressToMatchForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMShouldShowMMSEmailAddress:(id)address simID:(id)id;
+ (BOOL)IMIsEagerUploadEnabledForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMMMSEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMMMSRestrictedModeEnabledForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)MMSRestrictedModeEnabledForPhoneNumber:(id)number simID:(id)id reset:(BOOL)reset;
+ (void)IMSynchronizeMMSCapabilityToWatch:(BOOL)watch;
+ (void)IMSynchronizePreferredSubscriptionMMSCapabilityToWatch;
+ (id)IMCountryCodeForSimSlot:(long long)slot;
+ (id)IMCountryCodeForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)IMMessagesFilteringSettingForPreferedSubscription;
+ (id)carrierBundleValueForKeyHierarchy:(id)hierarchy phoneNumber:(id)number simID:(id)id;
+ (id)carrierNameForPhoneNumber:(id)number;
+ (BOOL)SMSAllowCaseSenstiveSenderIDForPhoneNumber:(id)number;
@end

#endif /* IMCTSMSUtilities_h */