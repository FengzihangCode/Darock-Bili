//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFBFastFactorLevelsChanges_h
#define TRIFBFastFactorLevelsChanges_h
@import Foundation;

@interface TRIFBFastFactorLevelsChanges : NSObject {
  /* instance variables */
  unsigned char _changeTypeLevels;
  unsigned int _replacementLevels;
  unsigned char _replacementSourceType;
  unsigned char _changeTypeSource;
  unsigned int _replacementSource;
  unsigned char _changeTypeNamespaceName;
  unsigned int _replacementNamespaceName;
  unsigned char _changeTypeNcvs;
  unsigned int _replacementNcvs;
}

/* instance methods */
- (void)replaceLevels:(id)levels;
- (void)preserveLevels;
- (void)replaceSourceWithTreatmentId:(id)id;
- (void)replaceSourceWithFactorPackId:(id)id;
- (void)preserveSource;
- (void)replaceNamespaceName:(id)name;
- (void)preserveNamespaceName;
- (void)replaceNcvs:(id)ncvs;
- (void)omitNcvs;
- (void)preserveNcvs;
@end

#endif /* TRIFBFastFactorLevelsChanges_h */