//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef NSFormatter_HFCharacteristicValueFormatting_h
#define NSFormatter_HFCharacteristicValueFormatting_h
@import Foundation;

@interface NSFormatter (HFCharacteristicValueFormatting)
/* class methods */
+ (id)hf_valueFormatterForCharacteristic:(id)characteristic options:(id)options;
+ (id)hf_valueFormatterForCharacteristicType:(id)type withMetadata:(id)metadata options:(id)options;
+ (id)_hf_customValueFormatterForCharacteristicType:(id)type metadata:(id)metadata options:(id)options;
+ (id)_hf_valueFormatterForCharacteristicMetadata:(id)metadata options:(id)options;
+ (id)_hf_percentFormatterForMetadata:(id)metadata;
+ (id)_hf_positionFormatterWithMetadata:(id)metadata options:(id)options;
+ (id)_hf_filterChangeIndicationFormatter;
+ (id)_hf_partsPerMillionFormatter;
+ (id)_hf_microgramsPerMeterCubedFormatter;
+ (id)_hf_valueSetFormatterForCharacteristicType:(id)type options:(id)options;
+ (id)_hf_powerStateFormatter;
+ (id)_hf_doorStateFormatter;
+ (id)_hf_heatingCoolingFormatter;
+ (id)_hf_rotationDirectionFormatter;
+ (id)_hf_temperatureUnitFormatter;
+ (id)_hf_lockMechanismStateFormatter;
+ (id)_hf_airParticulateSizeFormatter;
+ (id)_hf_airQualityFormatter;
+ (id)_hf_positionStateFormatter;
+ (id)_hf_currentSecuritySystemStateFormatter;
+ (id)_hf_targetSecuritySystemStateFormatter;
+ (id)_hf_contactStateStateFormatter;
+ (id)_hf_currentAirPurifierStateFormatter;
+ (id)_hf_configurationStateFormatter;
+ (id)_hf_lockMechanismLastKnownActionFormatter;
+ (id)hf_controlDescriptionFormatterForCharacteristic:(id)characteristic options:(id)options;
+ (id)hf_controlDescriptionFormatterForCharacteristic:(id)characteristic options:(id)options form:(unsigned long long)form;
+ (id)hf_controlDescriptionFormatterForCharacteristicType:(id)type withMetadata:(id)metadata options:(id)options;
+ (id)hf_controlDescriptionFormatterForCharacteristicType:(id)type withMetadata:(id)metadata options:(id)options form:(unsigned long long)form;
+ (id)_hf_controlDescriptionForDetectionCharacteristicOfType:(id)type withValue:(id)value valueDescription:(id)description;
+ (id)_hf_controlDescriptionForDetectionCharacteristicOfType:(id)type withValue:(id)value valueDescription:(id)description form:(unsigned long long)form;
+ (id)_hf_controlTitleForCharacteristicType:(id)type;
@end

#endif /* NSFormatter_HFCharacteristicValueFormatting_h */