//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCharacterRecognitionAttributes_h
#define PLCharacterRecognitionAttributes_h
@import Foundation;

#include "PLManagedObject.h"
#include "PLMediaAnalysisAssetAttributes.h"

@class NSData, NSDate;

@interface PLCharacterRecognitionAttributes : PLManagedObject

@property (retain, @dynamic, nonatomic) NSData *characterRecognitionData;
@property (retain, @dynamic, nonatomic) NSData *machineReadableCodeData;
@property (@dynamic, nonatomic) short algorithmVersion;
@property (retain, @dynamic, nonatomic) NSDate *adjustmentVersion;
@property (retain, @dynamic, nonatomic) PLMediaAnalysisAssetAttributes *mediaAnalysisAssetAttributes;

/* class methods */
+ (id)entityName;
@end

#endif /* PLCharacterRecognitionAttributes_h */