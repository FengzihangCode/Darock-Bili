//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMCore_h
#define IMCore_h

#import "IMAccount.h"
#import "IMAccountController.h"
#import "IMAddressBook.h"
#import "IMAggregateAcknowledgmentChatItem.h"
#import "IMAggregateAttachmentMessagePartChatItem.h"
#import "IMAggregateMessagePartChatItem.h"
#import "IMAnimatedEmojiMessagePartChatItem.h"
#import "IMAssociatedMessageChatItem.h"
#import "IMAssociatedStickerChatItem.h"
#import "IMAttachment.h"
#import "IMAttachmentMessagePartChatItem.h"
#import "IMAudioMessageChatItem.h"
#import "IMAutomation.h"
#import "IMAutomationBatchMessageOperations.h"
#import "IMAutomationGroupChat.h"
#import "IMAutomationMessageSend.h"
#import "IMBalloonApp.h"
#import "IMBalloonAppExtension.h"
#import "IMBalloonBrowserPlugin.h"
#import "IMBalloonPlugin.h"
#import "IMBalloonPluginAttributionController.h"
#import "IMBalloonPluginDataSource.h"
#import "IMBalloonPluginManager.h"
#import "IMBalloonPluginManagerModel.h"
#import "IMBlackholeChatItem.h"
#import "IMBlockContactChatItem.h"
#import "IMCarrierReportJunkHelper.h"
#import "IMChat.h"
#import "IMChatContext.h"
#import "IMChatHistoryController.h"
#import "IMChatItem.h"
#import "IMChatRegistry.h"
#import "IMChatScrutinyController.h"
#import "IMClarityDetailedTranscriptChatItemRules.h"
#import "IMClarityTranscriptChatItemRules.h"
#import "IMCloudKitErrorProgressTest.h"
#import "IMCloudKitEventNotificationManager.h"
#import "IMCloudKitEventNotificationManagerRuntimeTest.h"
#import "IMCloudKitEventNotificationRuntimeTestSuite.h"
#import "IMCloudKitHookTestSingleton.h"
#import "IMCloudKitHooks.h"
#import "IMCloudKitMockSyncState.h"
#import "IMCloudKitSyncProgress.h"
#import "IMCloudKitSyncProgressRuntimeTest.h"
#import "IMCloudKitSyncProgressRuntimeTestDeleting.h"
#import "IMCloudKitSyncProgressRuntimeTestDownloading.h"
#import "IMCloudKitSyncProgressRuntimeTestPaused.h"
#import "IMCloudKitSyncProgressRuntimeTestPreparing.h"
#import "IMCloudKitSyncProgressRuntimeTestUploading.h"
#import "IMCloudKitSyncState.h"
#import "IMCloudKitSyncStatistics.h"
#import "IMCollaborationNoticeController.h"
#import "IMCollaborationNoticeDispatcher.h"
#import "IMCommLimitsPolicyCache.h"
#import "IMCommSafetySummary.h"
#import "IMCommSafetySummaryImage.h"
#import "IMCoreAccountsMonitor.h"
#import "IMCoreAutomationHook.h"
#import "IMCoreCommSafetyHelper.h"
#import "IMCoreHelloWorldClass.h"
#import "IMDDController.h"
#import "IMDNDList.h"
#import "IMDaemonController.h"
#import "IMDaemonListener.h"
#import "IMDaemonQuery.h"
#import "IMDaemonQueryController.h"
#import "IMDateChatItem.h"
#import "IMDeletedMomentShareMessagePartChatItem.h"
#import "IMDowntimeController.h"
#import "IMEditedTextMessagePartHistoricalContentChatItem.h"
#import "IMEmojiStickerChatItem.h"
#import "IMEmoteMessageChatItem.h"
#import "IMErrorMessagePartChatItem.h"
#import "IMExpirableMessageChatItem.h"
#import "IMExpressiveSendAsTextChatItem.h"
#import "IMFMFSession.h"
#import "IMFaceTimeUtilities.h"
#import "IMFileTransferCenter.h"
#import "IMFindMyDevice.h"
#import "IMFindMyHandle.h"
#import "IMFindMyLocation.h"
#import "IMGroupActionChatItem.h"
#import "IMGroupTitleChangeChatItem.h"
#import "IMHandle.h"
#import "IMHandleAvailabilityManager.h"
#import "IMHandleRegistrar.h"
#import "IMIDStatusController.h"
#import "IMInlineReplyChatItemRules.h"
#import "IMInlineReplyController.h"
#import "IMItemChatContext.h"
#import "IMItemsController.h"
#import "IMJunkRecoveryTranscriptChatItem.h"
#import "IMKeyTransparencyController.h"
#import "IMKeyTransparencyStatusChangedChatItem.h"
#import "IMLoadMoreChatItem.h"
#import "IMLoadMoreRecentChatItem.h"
#import "IMLocatingChatItem.h"
#import "IMLocationManager.h"
#import "IMLocationManagerUtils.h"
#import "IMLocationShareActionChatItem.h"
#import "IMLocationShareOfferChatItem.h"
#import "IMLocationUpdateSentChatItem.h"
#import "IMMe.h"
#import "IMMessage.h"
#import "IMMessageAcknowledgmentChatItem.h"
#import "IMMessageActionChatItem.h"
#import "IMMessageAttributionChatItem.h"
#import "IMMessageChatItem.h"
#import "IMMessageEffectControlChatItem.h"
#import "IMMessageItemChatContext.h"
#import "IMMessagePartChatItem.h"
#import "IMMessagePartHighlightChatItem.h"
#import "IMMessageReplyCountChatItem.h"
#import "IMMessageRetractionChatItem.h"
#import "IMMessageStatusChatItem.h"
#import "IMMutableChatContext.h"
#import "IMNanoLanguageChatItem.h"
#import "IMNanoMoreActionChatItem.h"
#import "IMNanoReplyChatItem.h"
#import "IMNanoReplyListChatItem.h"
#import "IMNicknameController.h"
#import "IMNicknameProvider.h"
#import "IMNotifyAnywayChatItem.h"
#import "IMNumberChangedChatItem.h"
#import "IMOneTimeCodeAccelerator.h"
#import "IMOrderingTools.h"
#import "IMOrganicAttachmentMessagePartChatItem.h"
#import "IMParentalControls.h"
#import "IMParentalControlsService.h"
#import "IMParticipantChangeChatItem.h"
#import "IMParticipantSubscriptionSwitchChatItem.h"
#import "IMPendingMomentShareMessagePartChatItem.h"
#import "IMPeople.h"
#import "IMPinnedConversationsController.h"
#import "IMPluginPayload.h"
#import "IMRemindersIntegration.h"
#import "IMReplyContextAggregateAttachmentMessagePartChatItem.h"
#import "IMReplyContextAggregateMessagePartChatItem.h"
#import "IMReplyContextAttachmentMessagePartChatItem.h"
#import "IMReplyContextDeletedMessageChatItem.h"
#import "IMReplyContextTextMessagePartChatItem.h"
#import "IMReplyContextTranscriptPluginChatItem.h"
#import "IMReplySenderChatItem.h"
#import "IMReplyingRemoteDaemonProxy.h"
#import "IMReportSpamChatItem.h"
#import "IMSMSSpamChatItem.h"
#import "IMSPIAttachment.h"
#import "IMSPIChat.h"
#import "IMSPIHandle.h"
#import "IMSPIMessage.h"
#import "IMSPIOutgoingAttachmentObject.h"
#import "IMSPIRecentEvent.h"
#import "IMSPISuggestionsObject.h"
#import "IMSendProgress.h"
#import "IMSendProgressRealTimeDataSource.h"
#import "IMSenderChatItem.h"
#import "IMService.h"
#import "IMServiceAgent.h"
#import "IMServiceAgentImpl.h"
#import "IMServiceChatItem.h"
#import "IMServiceImpl.h"
#import "IMSimSwitchedChatItem.h"
#import "IMSimulatedAccount.h"
#import "IMSimulatedAccountController.h"
#import "IMSimulatedChat.h"
#import "IMSimulatedDaemonController.h"
#import "IMSyncedSettingsManager.h"
#import "IMSyndicationStatusChatItem.h"
#import "IMTUConversationChatItem.h"
#import "IMTapbackSender.h"
#import "IMTextMessagePartChatItem.h"
#import "IMThreadSafeBalloonPluginMap.h"
#import "IMTranscriptChatItem.h"
#import "IMTranscriptChatItemRules.h"
#import "IMTranscriptEffectHelper.h"
#import "IMTranscriptLocationChatItem.h"
#import "IMTranscriptPluginBreadcrumbChatItem.h"
#import "IMTranscriptPluginChatItem.h"
#import "IMTranscriptPluginStatusChatItem.h"
#import "IMTranscriptSharingChatItem.h"
#import "IMTransientMessagePartChatItem.h"
#import "IMTypingChatItem.h"
#import "IMTypingPluginChatItem.h"
#import "IMTypingTimer.h"
#import "IMUnavailabilityIndicatorChatItem.h"
#import "IMUnavailableMomentShareMessagePartChatItem.h"
#import "_$s6IMCore0A15HelloWorldClassCN.h"
#import "_$s6IMCore16DaemonConnectionCN.h"
#import "_$s6IMCore16NicknameProviderCN.h"
#import "_$s6IMCore21SyncedSettingsManagerCN.h"
#import "_$s6IMCore27MultiplexedDaemonConnectionCN.h"
#import "_IMBalloonBundleApp.h"
#import "_IMBalloonExtensionApp.h"
#import "_IMLegacyDaemonController.h"
#import "_IMLegacyDaemonListener.h"
#import "_IMSPIConnectionController.h"
#import "CLLocationManagerDelegate-Protocol.h"
#import "IMBalloonPluginController-Protocol.h"
#import "IMChatItemRules-Protocol.h"
#import "IMChatTranscriptItem-Protocol.h"
#import "IMChatTranscriptStatusItem-Protocol.h"
#import "IMCloudKitEventHandler-Protocol.h"
#import "IMDaemonAccountsProtocol-Protocol.h"
#import "IMDaemonAnyProtocol-Protocol.h"
#import "IMDaemonAutomationProtocol-Protocol.h"
#import "IMDaemonBuddyListProtocol-Protocol.h"
#import "IMDaemonChatFileTransferProtocol-Protocol.h"
#import "IMDaemonChatInsertMessageProtocol-Protocol.h"
#import "IMDaemonChatMessageHistoryProtocol-Protocol.h"
#import "IMDaemonChatModifyReadStateProtocol-Protocol.h"
#import "IMDaemonChatProtocol-Protocol.h"
#import "IMDaemonChatSendMessageProtocol-Protocol.h"
#import "IMDaemonCloudSyncProtocol-Protocol.h"
#import "IMDaemonControlling-Protocol.h"
#import "IMDaemonControlling_Private-Protocol.h"
#import "IMDaemonFileProviderProtocol-Protocol.h"
#import "IMDaemonFileTransferProtocol-Protocol.h"
#import "IMDaemonListenerAVProtocol-Protocol.h"
#import "IMDaemonListenerAccountsProtocol-Protocol.h"
#import "IMDaemonListenerAnyProtocol-Protocol.h"
#import "IMDaemonListenerChatCountsProtocol-Protocol.h"
#import "IMDaemonListenerChatDatabaseProtocol-Protocol.h"
#import "IMDaemonListenerChatMessageHistoryProtocol-Protocol.h"
#import "IMDaemonListenerChatProtocol-Protocol.h"
#import "IMDaemonListenerCloudSyncProtocol-Protocol.h"
#import "IMDaemonListenerFileProviderProtocol-Protocol.h"
#import "IMDaemonListenerFileTransfersProtocol-Protocol.h"
#import "IMDaemonListenerKeyTransparencyProtocol-Protocol.h"
#import "IMDaemonListenerNotificationsProtocol-Protocol.h"
#import "IMDaemonListenerProtocol-Protocol.h"
#import "IMDaemonListenerServiceProtocol-Protocol.h"
#import "IMDaemonListenerSetupProtocol-Protocol.h"
#import "IMDaemonListenerSyncedSettingsProtocol-Protocol.h"
#import "IMDaemonListening-Protocol.h"
#import "IMDaemonListening_Internal-Protocol.h"
#import "IMDaemonManageStatusProtocol-Protocol.h"
#import "IMDaemonModifyReadStateProtocol-Protocol.h"
#import "IMDaemonMultiplexedConnectionManaging-Protocol.h"
#import "IMDaemonProtocol-Protocol.h"
#import "IMDaemonSyncedSettingsProtocol-Protocol.h"
#import "IMDaemonVCACProtocol-Protocol.h"
#import "IMDaemonVCInvitationsAVObserverProtocol-Protocol.h"
#import "IMDaemonVCProtocol-Protocol.h"
#import "IMFileTransferCenter-Protocol.h"
#import "IMLocationManager-Protocol.h"
#import "IMMessageChatItem-Protocol.h"
#import "IMNicknameListener-Protocol.h"
#import "IMPluginChatItemProtocol-Protocol.h"
#import "IMReplyContext-Protocol.h"
#import "IMReusableBalloonPluginController-Protocol.h"
#import "IMSendProgressDelegate-Protocol.h"
#import "IMSendProgressTimeDataSource-Protocol.h"
#import "IMSimulatedChatDelegate-Protocol.h"
#import "IMSimulatedDaemonListener-Protocol.h"
#import "IMStateLoggable-Protocol.h"
#import "IMSyncedSettingsManaging-Protocol.h"
#import "IMSystemMonitorListener-Protocol.h"
#import "IMVisibleAssociatedMessageHost-Protocol.h"
#import "INSpeakable-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "SKStatusSubscriptionServiceDelegate-Protocol.h"
#import "TUCallProviderManagerDelegate-Protocol.h"
#import "TUConversationManagerDelegate-Protocol.h"
#import "IMRecentItemsList+FetchUtilities.h"
#import "NSString+IMAdditions.h"
#import "TUConversation+IMChatRegistryRemoteHandleHelper.h"
#import "IMItem+IMChat_Internal.h"
#import "NSFileManager+IMCore.h"
#import "IMDaemonConnection+IMCore.h"
#import "IMNickname+IMCore.h"
#import "IMMessageItem+IMCoreDescription.h"
#import "IMTimingCollection+IMCoreSetupTimingAdditions.h"
#import "NSSet+IMFindMyHandleAdditions.h"
#import "NSArray+IMItems.h"
#import "IMTapback+IMTapbackSender.h"
#import "IMParticipantChangeItem+IMTranscriptChatItemRules.h"
#import "IMGroupTitleChangeItem+IMTranscriptChatItemRules.h"
#import "IMTranscriptSharingItem+IMTranscriptChatItemRules.h"
#import "IMLocationUpdateSentItem+IMTranscriptChatItemRules.h"
#import "IMGroupActionItem+IMTranscriptChatItemRules.h"
#import "IMLocationShareStatusChangeItem+IMTranscriptChatItemRules.h"
#import "IMTUConversationItem+IMTranscriptChatItemRules.h"
#import "IMMessageActionItem+IMTranscriptChatItemRules.h"
#import "IMAssociatedMessageItem+IMTranscriptChatItemRules.h"

#endif /* IMCore_h */