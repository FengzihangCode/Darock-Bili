//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 160.2.0.0.0
//
#ifndef CRTTMergeableString_h
#define CRTTMergeableString_h
@import Foundation;

#include "CRTTMergeableString.h"
#include "ObjCReplica.h"
#include "ObjCVersion.h"

@class NSObject, NSUUID;
@protocol {vector<TopoSubstring *, std::allocator<TopoSubstring *>>="__begin_"^^{TopoSubstring}"__end_"^^{TopoSubstring}"__end_cap_"{__compressed_pair<TopoSubstring **, std::allocator<TopoSubstring *>>="__value_"^^{TopoSubstring}}};

@interface CRTTMergeableString : NSObject {
  /* instance variables */
  struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> { struct TopoSubstring * *__begin_; struct TopoSubstring * *__end_; struct __compressed_pair<TopoSubstring **, std::allocator<TopoSubstring *>> { struct TopoSubstring * *__value_; } __end_cap_; } _orderedSubstrings;
  unsigned long long _editCount;
  BOOL _cacheInvalid;
  CRTTMergeableString *_renamedString;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) struct TopoReplica { unsigned char x0[16] unsigned int x1; } replica;
@property (retain, nonatomic) ObjCVersion *version;
@property (nonatomic) long long localCounter;
@property (readonly, nonatomic) ObjCReplica *addedByReplica;
@property (retain, nonatomic) ObjCVersion *addedByVersion;
@property (nonatomic) long long addedByLocalCounter;
@property (retain, nonatomic) id attributedString;
@property (nonatomic) void * startNode;
@property (nonatomic) void * endNode;
@property (nonatomic) long long renameGeneration;
@property (retain, nonatomic) NSObject *context;
@property (readonly, nonatomic) BOOL isEmptyCRDT;

/* instance methods */
- (BOOL)hasAllIDsIn:(void *)in;
- (void)undeleteSubstrings:(void *)substrings;
- (id)undoCommandToChangeTo:(id)to unedited:(id /* block */)unedited;
- (void)deltaTo:(id)to edited:(id /* block */)edited unedited:(id /* block */)unedited;
- (void)deltaTo:(id)to added:(id /* block */)added deleted:(id /* block */)deleted same:(id /* block */)same;
- (void)_deltaTo:(id)to added:(id /* block */)added deleted:(id /* block */)deleted same:(id /* block */)same;
- (id)initWithDecoder:(id)decoder error:(id *)error;
- (BOOL)saveToEncoder:(id)encoder error:(id *)error;
- (BOOL)saveSubstrings:(void *)substrings encoder:(id)encoder error:(id *)error;
- (id)initWithStorage:(id)storage uuid:(id)uuid;
- (id)initWithStorage:(id)storage uuid:(id)uuid createInitialNodes:(BOOL)nodes;
- (void)stealReplicaFrom:(id)from;
- (void)dealloc;
- (void)deleteAllSubstrings;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyRenamedIfAvailable:(BOOL)available;
- (id)objcReplica;
- (unsigned long long)length;
- (void)replaceStorageInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withStorage:(id)storage;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)removeAll;
- (void)insertAtIndex:(long long)index length:(long long)length getStorage:(id /* block */)storage;
- (void)beginEditing;
- (void)endEditing;
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)index;
- (id)selectionForCharacterRanges:(id)ranges;
- (id)selectionForCharacterRanges:(id)ranges selectionAffinity:(unsigned long long)affinity;
- (id)characterRangesForSelection:(id)selection;
- (id)characterRangesForSelection:(id)selection selectedSubstringsBlock:(id /* block */)block;
- (id)characterRangesForMergeableRange:(id)range;
- (id)characterRangesForIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16] unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })idrange;
- (void)addNewAddedByFor:(void *)for;
- (void)deleteSubstrings:(void *)substrings withCharacterRanges:(void *)ranges;
- (void)insertStorageLength:(long long)length after:(void *)after before:(void *)before getStorage:(id /* block */)storage;
- (void)getSubstrings:(void *)substrings forCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)getSubstrings:(void *)substrings inOrderedSubstrings:(void *)substrings forCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void *)getSubstringBeforeTopoID:(struct TopoID { struct TopoReplica { unsigned char x0[16] unsigned int x1; } x0; unsigned int x1; })id;
- (void)getSubstrings:(void *)substrings forTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16] unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })idrange;
- (void)getCharacterRanges:(void *)ranges forSubstrings:(void *)substrings;
- (void)enumerateIndexes:(id /* block */)indexes;
- (id)mergeableIndexForCharacterIndex:(long long)index affinity:(unsigned long long)affinity;
- (unsigned long long)_characterIndexForIndex:(id)index;
- (unsigned long long)characterIndexForIndex:(id)index;
- (void)enumerateSubstrings:(id /* block */)substrings;
- (void *)splitTopoSubstring:(void *)substring atIndex:(unsigned int)index;
- (void *)orderedSubstrings;
- (long long)substringCount;
- (void)_updateCache;
- (void)invalidateCache;
- (void)updateAttributedStringAfterMerge;
- (void)updateSubstringIndexes;
- (void)coalesce;
- (BOOL)canMergeString:(id)string;
- (BOOL)hasDeltaTo:(id)to compareElements:(id /* block */)elements;
- (unsigned long long)mergeWithString:(id)string optimized:(BOOL)optimized;
- (BOOL)canDeltaMerge:(id)merge;
- (BOOL)deltaMerge:(id)merge;
- (void)sortSplitNodes;
- (void)traverseUnordered:(id /* block */)unordered;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)graphIsEqual:(id)equal;
- (id)dotDescription:(unsigned long long)description;
- (void)useRenameIfAvailable;
- (void)apply:(id)apply skipRetain:(BOOL)retain;
- (void)_apply:(id)_apply;
- (void)applyTimestampRenames:(id)renames;
- (id)renamed:(id)renamed;
- (id)temporaryNamesExcludingSelf:(BOOL)self;
- (id)temporaryConcurrentNames;
- (id)fullyRenamed:(id)renamed;
- (id)renamedIfAvailable;
- (void)applyRenamesAndRetainOrRelease:(id)release context:(id)context alsoApplyAllRenames:(BOOL)renames;
- (BOOL)needToFinalizeTimestamps;
- (void)finalizeTimestamps:(id)timestamps;
@end

#endif /* CRTTMergeableString_h */