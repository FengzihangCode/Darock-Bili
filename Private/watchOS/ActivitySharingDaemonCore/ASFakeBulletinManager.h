//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASFakeBulletinManager_h
#define ASFakeBulletinManager_h
@import Foundation;

#include "ASActivityDataBulletinManager.h"
#include "ASActivitySharingManagerReadyObserver-Protocol.h"
#include "ASBulletinPostingManager-Protocol.h"
#include "ASCompetitionBulletinManager.h"
#include "ASFakingManager.h"
#include "ASFriendInviteBulletinManager.h"

@class NSString;

@interface ASFakeBulletinManager : NSObject<ASActivitySharingManagerReadyObserver> {
  /* instance variables */
  ASActivityDataBulletinManager *_activityDataBulletinManager;
  ASCompetitionBulletinManager *_competitionBulletinManager;
  ASFakingManager *_fakingManager;
  ASFriendInviteBulletinManager *_friendInviteBulletinManager;
  NSObject<ASBulletinPostingManager> *_bulletinPostingManager;
  int notifyGoalCompletionDuringCompetitionToken;
  int notifyCompetitionRequestToken;
  int notifyCompetitionAcceptToken;
  int notifyCompetitionEndWinnerToken;
  int notifyCompetitionEndLoserToken;
  int notifyCompetitionEndTieToken;
  int notifyCompetitionScoreCapCelebrationToken;
  int notifyGoalCompletionToken;
  int notifyAchievementToken;
  int notifyWorkoutToken;
  int notifyVideoWorkoutToken;
  int notifyGuidedRunWorkoutToken;
  int notifyGuidedWalkWorkoutToken;
  int notifyBatchToken;
  int notifyInviteRequestToken;
  int notifyInviteResponseToken;
  int notifyOfFakeInviteNeedsSetupToken;
  int notifyOfFakeSignInToken;
  int notifyOfFakeUpgradeToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)activitySharingManagerReady:(id)ready;
- (void)dealloc;
- (void)registerBulletins;
- (void)deregisterBulletins;
- (void)_showFakeWorkoutNotification;
- (void)_showFakeVideoWorkoutNotification;
- (void)_showFakeGuidedRunWorkoutNotification;
- (void)_showFakeGuidedWalkWorkoutNotification;
- (void)_showFakeWorkoutNotificationWithWorkout:(id)workout;
- (void)_showFakeAchievementNotification;
- (void)_showFakeGoalCompletionNotification;
- (void)_showFakeBatchNotification;
- (void)_showFakeGoalCompletionDuringCompetitionNotification;
- (void)_showFakeCompetitionRequestNotification;
- (void)_showFakeCompetitionAcceptedNotification;
- (void)_showFakeCompetitionEndedWinnerNotification;
- (void)_showFakeCompetitionEndedLoserNotification;
- (void)_showFakeCompetitionEndedTieNotification;
- (void)_showFakeCompetitionScoreCapCelebrationNotification;
- (void)_showFakeInvitationRequest;
- (void)_showFakeInvitationResponse;
- (void)_showFakeInviteAttemptNeedsSetup;
- (void)_showFakeNeedToSignIn;
- (void)_showFakeNeedToUpgrade;
- (id)_fakeContact;
@end

#endif /* ASFakeBulletinManager_h */