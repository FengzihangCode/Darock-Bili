//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSMutableData_RFC2231Support_h
#define NSMutableData_RFC2231Support_h
@import Foundation;

@interface NSMutableData (RFC2231Support)
/* instance methods */
- (void)mf_appendCString:(const char *)cstring;
- (void)mf_convertNetworkLineEndingsToUnixInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)mf_convertNetworkLineEndingsToUnix;
- (void)mf_makeImmutable;
- (void)mf_appendRFC2231CompliantValue:(id)value forKey:(id)key;
@end

#endif /* NSMutableData_RFC2231Support_h */