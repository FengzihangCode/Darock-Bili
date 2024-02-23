//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStatusBarServer_h
#define UIStatusBarServer_h
@import Foundation;

#include "UIStatusBarServerClient-Protocol.h"

@interface UIStatusBarServer : NSObject {
  /* instance variables */
  struct __CFRunLoopSource * _source;
}

@property (retain, nonatomic) NSObject<UIStatusBarServerClient> *statusBar;

/* class methods */
+ (void)runServer;
+ (const char *)serviceName;
+ (unsigned int)_serverPort;
+ (unsigned int)_publisherPort;
+ (void)postStatusBarData:(const struct { BOOL x0[46] char x1[64] char x2[64] char x3[256] int x4; int x5; int x6; int x7; char x8[100] char x9[100] char x10[100] char x11[100] c] x12[2[100] char x13[1024] unsigned int x14; unsigned int x15; unsigned int x16 :1; unsigned int x17 :1; int x18; int x19; unsigned int x20 :1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150] int x26; int x27; unsigned int x28 :1; unsigned int x29 :1; unsigned int x30 :1; char x31[256] unsigned int x32 :1; unsigned int x33 :1; unsigned int x34 :1; unsigned int x35 :2; unsigned int x36 :2; unsigned int x37 :1; unsigned int x38; unsigned int x39 :1; unsigned int x40 :1; unsigned int x41 :1; char x42[256] char x43[256] char x44[100] unsigned int x45 :1; unsigned int x46 :1; unsigned int x47 :1; unsigned int x48 :1; unsigned int x49 :1; double x50; unsigned int x51 :1; unsigned int x52 :1; unsigned int x53 :1; char x54[100] char x55[100] char x56[256] char x57[256] } *)data withActions:(int)actions;
+ (void)addStyleOverrides:(unsigned long long)overrides;
+ (void)removeStyleOverrides:(unsigned long long)overrides;
+ (void)postGlowAnimationState:(BOOL)state forStyle:(long long)style;
+ (void)postDoubleHeightStatusString:(id)string forStyle:(long long)style;
+ (void)addStatusBarItem:(int)item;
+ (void)removeStatusBarItem:(int)item;
+ (void)postStatusBarOverrideData:(struct { BOOL x0[46] unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; unsigned int x6 :1; unsigned int x7 :1; unsigned int x8 :1; unsigned int x9 :2; unsigned int x10 :1; unsigned int x11 :1; unsigned int x12 :1; unsigned int x13 :1; unsigned int x14 :1; unsigned int x15 :1; unsigned int x16 :1; unsigned int x17 :1; unsigned int x18 :1; unsigned int x19 :1; unsigned int x20 :1; unsigned int x21 :1; unsigned int x22 :1; unsigned int x23 :1; unsigned int x24 :1; unsigned int x25 :1; unsigned int x26 :1; unsigned int x27; unsigned int x28 :1; unsigned int x29 :1; unsigned int x30 :1; unsigned int x31 :1; unsigned int x32 :1; unsigned int x33 :1; unsigned int x34 :1; unsigned int x35 :1; struct { BOOL x0[46] char x1[64] char x2[64] char x3[256] int x4; int x5; int x6; int x7; char x8[100] char x9[100] char x10[100] char x11[100] c] x12[2[100] char x13[1024] unsigned int x14; unsigned int x15; unsigned int x16 :1; unsigned int x17 :1; int x18; int x19; unsigned int x20 :1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150] int x26; int x27; unsigned int x28 :1; unsigned int x29 :1; unsigned int x30 :1; char x31[256] unsigned int x32 :1; unsigned int x33 :1; unsigned int x34 :1; unsigned int x35 :2; unsigned int x36 :2; unsigned int x37 :1; unsigned int x38; unsigned int x39 :1; unsigned int x40 :1; unsigned int x41 :1; char x42[256] char x43[256] char x44[100] unsigned int x45 :1; unsigned int x46 :1; unsigned int x47 :1; unsigned int x48 :1; unsigned int x49 :1; double x50; unsigned int x51 :1; unsigned int x52 :1; unsigned int x53 :1; char x54[100] char x55[100] char x56[256] char x57[256] } x36; } *)data;
+ (void)permanentizeStatusBarOverrideData;
+ (id)_cachedTimeStringFromData:(struct { BOOL x0[46] char x1[64] char x2[64] char x3[256] int x4; int x5; int x6; int x7; char x8[100] char x9[100] char x10[100] char x11[100] c] x12[2[100] char x13[1024] unsigned int x14; unsigned int x15; unsigned int x16 :1; unsigned int x17 :1; int x18; int x19; unsigned int x20 :1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150] int x26; int x27; unsigned int x28 :1; unsigned int x29 :1; unsigned int x30 :1; char x31[256] unsigned int x32 :1; unsigned int x33 :1; unsigned int x34 :1; unsigned int x35 :2; unsigned int x36 :2; unsigned int x37 :1; unsigned int x38; unsigned int x39 :1; unsigned int x40 :1; unsigned int x41 :1; char x42[256] char x43[256] char x44[100] unsigned int x45 :1; unsigned int x46 :1; unsigned int x47 :1; unsigned int x48 :1; unsigned int x49 :1; double x50; unsigned int x51 :1; unsigned int x52 :1; unsigned int x53 :1; char x54[100] char x55[100] char x56[256] char x57[256] } *)data;
+ (const struct { BOOL x0[46] char x1[64] char x2[64] char x3[256] int x4; int x5; int x6; int x7; char x8[100] char x9[100] char x10[100] char x11[100] c] x12[2[100] char x13[1024] unsigned int x14; unsigned int x15; unsigned int x16 :1; unsigned int x17 :1; int x18; int x19; unsigned int x20 :1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150] int x26; int x27; unsigned int x28 :1; unsigned int x29 :1; unsigned int x30 :1; char x31[256] unsigned int x32 :1; unsigned int x33 :1; unsigned int x34 :1; unsigned int x35 :2; unsigned int x36 :2; unsigned int x37 :1; unsigned int x38; unsigned int x39 :1; unsigned int x40 :1; unsigned int x41 :1; char x42[256] char x43[256] char x44[100] unsigned int x45 :1; unsigned int x46 :1; unsigned int x47 :1; unsigned int x48 :1; unsigned int x49 :1; double x50; unsigned int x51 :1; unsigned int x52 :1; unsigned int x53 :1; char x54[100] char x55[100] char x56[256] char x57[256] } *)getStatusBarData;
+ (struct { BOOL x0[46] unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; unsigned int x6 :1; unsigned int x7 :1; unsigned int x8 :1; unsigned int x9 :2; unsigned int x10 :1; unsigned int x11 :1; unsigned int x12 :1; unsigned int x13 :1; unsigned int x14 :1; unsigned int x15 :1; unsigned int x16 :1; unsigned int x17 :1; unsigned int x18 :1; unsigned int x19 :1; unsigned int x20 :1; unsigned int x21 :1; unsigned int x22 :1; unsigned int x23 :1; unsigned int x24 :1; unsigned int x25 :1; unsigned int x26 :1; unsigned int x27; unsigned int x28 :1; unsigned int x29 :1; unsigned int x30 :1; unsigned int x31 :1; unsigned int x32 :1; unsigned int x33 :1; unsigned int x34 :1; unsigned int x35 :1; struct { BOOL x0[46] char x1[64] char x2[64] char x3[256] int x4; int x5; int x6; int x7; char x8[100] char x9[100] char x10[100] char x11[100] c] x12[2[100] char x13[1024] unsigned int x14; unsigned int x15; unsigned int x16 :1; unsigned int x17 :1; int x18; int x19; unsigned int x20 :1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150] int x26; int x27; unsigned int x28 :1; unsigned int x29 :1; unsigned int x30 :1; char x31[256] unsigned int x32 :1; unsigned int x33 :1; unsigned int x34 :1; unsigned int x35 :2; unsigned int x36 :2; unsigned int x37 :1; unsigned int x38; unsigned int x39 :1; unsigned int x40 :1; unsigned int x41 :1; char x42[256] char x43[256] char x44[100] unsigned int x45 :1; unsigned int x46 :1; unsigned int x47 :1; unsigned int x48 :1; unsigned int x49 :1; double x50; unsigned int x51 :1; unsigned int x52 :1; unsigned int x53 :1; char x54[100] char x55[100] char x56[256] char x57[256] } x36; } *)getStatusBarOverrideData;
+ (unsigned long long)getStyleOverrides;
+ (double)getGlowAnimationEndTimeForStyle:(long long)style;
+ (BOOL)getGlowAnimationStateForStyle:(long long)style;
+ (id)getDoubleHeightStatusStringForStyle:(long long)style;

/* instance methods */
- (id)initWithStatusBar:(id)bar;
- (void)dealloc;
- (void)_receivedStatusBarData:(struct { BOOL x0[46] char x1[64] char x2[64] char x3[256] int x4; int x5; int x6; int x7; char x8[100] char x9[100] char x10[100] char x11[100] c] x12[2[100] char x13[1024] unsigned int x14; unsigned int x15; unsigned int x16 :1; unsigned int x17 :1; int x18; int x19; unsigned int x20 :1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150] int x26; int x27; unsigned int x28 :1; unsigned int x29 :1; unsigned int x30 :1; char x31[256] unsigned int x32 :1; unsigned int x33 :1; unsigned int x34 :1; unsigned int x35 :2; unsigned int x36 :2; unsigned int x37 :1; unsigned int x38; unsigned int x39 :1; unsigned int x40 :1; unsigned int x41 :1; char x42[256] char x43[256] char x44[100] unsigned int x45 :1; unsigned int x46 :1; unsigned int x47 :1; unsigned int x48 :1; unsigned int x49 :1; double x50; unsigned int x51 :1; unsigned int x52 :1; unsigned int x53 :1; char x54[100] char x55[100] char x56[256] char x57[256] } *)data actions:(int)actions animated:(BOOL)animated;
- (void)_receivedStyleOverrides:(unsigned long long)overrides;
- (void)_receivedGlowAnimationState:(BOOL)state forStyle:(long long)style;
- (void)_receivedDoubleHeightStatus:(const char *)status forStyle:(long long)style;
@end

#endif /* UIStatusBarServer_h */