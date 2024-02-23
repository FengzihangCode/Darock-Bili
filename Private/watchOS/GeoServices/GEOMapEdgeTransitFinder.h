//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapEdgeTransitFinder_h
#define GEOMapEdgeTransitFinder_h
@import Foundation;

#include "GEOMapEdgeFinder.h"

@protocol {unordered_set<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>>="__table_"{__hash_table<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *>, std::allocator<std::__hash_node<geo::TransitEdgePiece, void *>>>="__value_"{__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::hash<geo::TransitEdgePiece>>="__value_"Q}"__p3_"{__compressed_pair<float, std::equal_to<geo::TransitEdgePiece>>="__value_"f}}};

@interface GEOMapEdgeTransitFinder : GEOMapEdgeFinder {
  /* instance variables */
  struct unordered_set<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>> { struct __hash_table<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *>, std::allocator<std::__hash_node<geo::TransitEdgePiece, void *>>> { struct __hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<geo::TransitEdgePiece>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<geo::TransitEdgePiece>> { float __value_; } __p3_; } __table_; } _piecesConsidered;
}

/* instance methods */
- (id)initWithMap:(id)map center:(struct { double x0; double x1; })center radius:(double)radius;
- (void)_buildersInTile:(id)tile localPoint:(const void *)point localRadiusSqr:(float)sqr localSearch:(const void *)search handler:(id /* block */)handler;
- (BOOL)_checkEdgeForDuplicates:(const void *)duplicates;
@end

#endif /* GEOMapEdgeTransitFinder_h */