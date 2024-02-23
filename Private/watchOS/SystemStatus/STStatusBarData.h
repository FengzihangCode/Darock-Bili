//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STStatusBarData_h
#define STStatusBarData_h
@import Foundation;

#include "BSDebugDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "STStatusBarDataActivityEntry.h"
#include "STStatusBarDataBackgroundActivityEntry.h"
#include "STStatusBarDataBatteryEntry.h"
#include "STStatusBarDataBluetoothEntry.h"
#include "STStatusBarDataBoolEntry.h"
#include "STStatusBarDataCellularEntry.h"
#include "STStatusBarDataEntry.h"
#include "STStatusBarDataImageEntry.h"
#include "STStatusBarDataIntegerEntry.h"
#include "STStatusBarDataLocationEntry.h"
#include "STStatusBarDataLockEntry.h"
#include "STStatusBarDataQuietModeEntry.h"
#include "STStatusBarDataStringEntry.h"
#include "STStatusBarDataTetheringEntry.h"
#include "STStatusBarDataThermalEntry.h"
#include "STStatusBarDataVoiceControlEntry.h"
#include "STStatusBarDataWifiEntry.h"

@class NSDate, NSSet, NSString;

@interface STStatusBarData : NSObject<BSDebugDescriptionProviding, NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSDate *dateFromEntries;
@property (readonly, nonatomic) BOOL dateFromEntriesIncludesDate;
@property (readonly, nonatomic) BOOL dateFromEntriesIncludesTime;
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) NSSet *existingEntryKeys;
@property (readonly, nonatomic) STStatusBarDataStringEntry *timeEntry;
@property (readonly, nonatomic) STStatusBarDataStringEntry *shortTimeEntry;
@property (readonly, nonatomic) STStatusBarDataStringEntry *dateEntry;
@property (readonly, nonatomic) STStatusBarDataStringEntry *personNameEntry;
@property (readonly, nonatomic) STStatusBarDataStringEntry *deviceNameEntry;
@property (readonly, nonatomic) STStatusBarDataCellularEntry *cellularEntry;
@property (readonly, nonatomic) STStatusBarDataCellularEntry *secondaryCellularEntry;
@property (readonly, nonatomic) STStatusBarDataWifiEntry *wifiEntry;
@property (readonly, nonatomic) STStatusBarDataBatteryEntry *mainBatteryEntry;
@property (readonly, nonatomic) STStatusBarDataBluetoothEntry *bluetoothEntry;
@property (readonly, nonatomic) STStatusBarDataThermalEntry *thermalEntry;
@property (readonly, nonatomic) STStatusBarDataActivityEntry *activityEntry;
@property (readonly, nonatomic) STStatusBarDataTetheringEntry *tetheringEntry;
@property (readonly, nonatomic) STStatusBarDataLocationEntry *locationEntry;
@property (readonly, nonatomic) STStatusBarDataLockEntry *lockEntry;
@property (readonly, nonatomic) STStatusBarDataQuietModeEntry *quietModeEntry;
@property (readonly, nonatomic) STStatusBarDataBoolEntry *electronicTollCollectionEntry;
@property (readonly, nonatomic) STStatusBarDataBoolEntry *radarEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *rotationLockEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *airplaneModeEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *ttyEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *nikeEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *assistantEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *studentEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *vpnEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *liquidDetectionEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *displayWarningEntry;
@property (readonly, nonatomic) STStatusBarDataVoiceControlEntry *voiceControlEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *airPlayEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *carPlayEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *alarmEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *satelliteEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *sensorActivityEntry;
@property (readonly, nonatomic) STStatusBarDataBoolEntry *announceNotificationsEntry;
@property (readonly, nonatomic) STStatusBarDataIntegerEntry *volumeEntry;
@property (readonly, nonatomic) STStatusBarDataBackgroundActivityEntry *backgroundActivityEntry;
@property (readonly, nonatomic) STStatusBarDataStringEntry *backNavigationEntry;
@property (readonly, nonatomic) STStatusBarDataStringEntry *forwardNavigationEntry;
@property (readonly, nonatomic) STStatusBarDataImageEntry *controlCenterEntry;
@property (readonly, nonatomic) STStatusBarDataBoolEntry *ringerSilenceEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)dateFormatterForDate:(id *)date time:(id *)time shortTime:(id *)time;
+ (BOOL)supportsSecureCoding;
+ (id)staticDisplayData;
+ (id)entryKeys;

/* instance methods */
- (id)initWithDate:(id)date;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)initWithEntry:(id)entry forKey:(id)key;
- (id)initWithKeysAndEntries:(id)entries;
- (BOOL)isEmpty;
- (id)dataByApplyingOverlay:(id)overlay;
- (id)dataByApplyingUpdate:(id)update keys:(id)keys;
- (id)updateFromData:(id)data;
- (id)dataByRemovingEntriesForKeys:(id)keys;
- (id)dataByReplacingEntry:(id)entry forKey:(id)key;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)_descriptionBuilderWithMultilinePrefix:(id)prefix forDebug:(BOOL)debug;
- (id)immutableCopy;
- (id)mutableCopy;
- (void)_internal_setValue:(id)value forKey:(id)key;
- (void)setValue:(id)value forKey:(id)key;
- (id)entryForKey:(id)key;
@end

#endif /* STStatusBarData_h */