//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSWebViewMetadataFetchOperationDelegate_Protocol_h
#define WBSWebViewMetadataFetchOperationDelegate_Protocol_h
@import Foundation;

@protocol WBSWebViewMetadataFetchOperationDelegate <NSObject>
/* instance methods */
- (void)webViewMetadataFetchOperation:(id)operation getWebViewOfSize:(struct CGSize { double x0; double x1; })size withConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)webViewMetadataFetchOperation:(id)operation didFinishUsingWebView:(id)view;
@end

#endif /* WBSWebViewMetadataFetchOperationDelegate_Protocol_h */