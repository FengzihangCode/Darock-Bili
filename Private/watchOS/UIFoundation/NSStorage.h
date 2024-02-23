//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSStorage_h
#define NSStorage_h
@import Foundation;

@interface NSStorage : NSObject {
  /* instance variables */
  id _storage;
  long long _hintCapacity;
  unsigned long long _reserved[4];
}

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithElementSize:(unsigned long long)size capacity:(unsigned long long)capacity;
- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (unsigned long long)capacity;
- (void)setHintCapacity:(unsigned long long)capacity;
- (unsigned long long)hintCapacity;
- (unsigned long long)elementSize;
- (void *)elementAtIndex:(unsigned long long)index;
- (void)insertElements:(void *)elements count:(unsigned long long)count atIndex:(unsigned long long)index;
- (void)removeElementAtIndex:(unsigned long long)index;
- (void)replaceElementAtIndex:(unsigned long long)index withElement:(void *)element;
- (void)removeElementsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void *)pointerToElement:(unsigned long long)element directlyAccessibleElements:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)elements;
- (void)insertElement:(void *)element atIndex:(unsigned long long)index;
- (void)addElement:(void *)element;
- (id)description;
- (void)enumerateElementsUsingBlock:(id /* block */)block;
@end

#endif /* NSStorage_h */