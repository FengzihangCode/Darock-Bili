//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDashboardBalanceSummaryItemPresenter_h
#define PKDashboardBalanceSummaryItemPresenter_h
@import Foundation;

#include "PKDashboardButtonCollectionViewCell.h"
#include "PKDashboardCurrencyAmountCell.h"
#include "PKDashboardItemPresenter-Protocol.h"
#include "PKDashboardTitleMessageCell.h"
#include "PKPaymentTransactionCollectionViewCell.h"

@class NSData, NSDateFormatter, NSString, UIImage;

@interface PKDashboardBalanceSummaryItemPresenter : NSObject<PKDashboardItemPresenter> {
  /* instance variables */
  PKPaymentTransactionCollectionViewCell *_sampleTransactionCell;
  PKDashboardButtonCollectionViewCell *_sampleButtonCell;
  PKDashboardCurrencyAmountCell *_sampleCurrencyCell;
  PKDashboardButtonCollectionViewCell *_downloadPDFCell;
  PKDashboardButtonCollectionViewCell *_exportStatementDataCell;
  PKDashboardTitleMessageCell *_sampleTitleMessageCell;
  NSDateFormatter *_formatterMonthYear;
  NSDateFormatter *_formatterMonthAndDay;
  NSDateFormatter *_formatterMonthDayYear;
  NSDateFormatter *_formatterMonth;
  UIImage *_statementIcon;
  NSData *_pdfData;
  NSData *_exportedStatementData;
}

@property (nonatomic) long long cellStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (Class)itemClass;
- (id)collectionViewCellClasses;
- (id)cellForItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)updateCell:(id)cell forItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)didSelectItem:(id)item inCollectionView:(id)view atIndexPath:(id)path navigationController:(id)controller canPresent:(id /* block */)present;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (BOOL)canSelectItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)_configureCell:(id)cell forItem:(id)item inCollectionView:(id)view forIndexPath:(id)path forSizing:(BOOL)sizing;
- (void)_configureStatementCell:(id)cell forItem:(id)item;
- (void)_configurePriorStatementBalanceCell:(id)cell forItem:(id)item;
- (void)_configureStatementBalanceCell:(id)cell forItem:(id)item;
- (void)_configureSpendingCell:(id)cell forItem:(id)item;
- (void)_configureInterestCell:(id)cell forItem:(id)item;
- (void)_configurePaymentsAndCreditsCell:(id)cell forItem:(id)item;
- (void)_configureInstallmentBalanceCell:(id)cell forItem:(id)item;
- (void)_configureTransactionLimitCell:(id)cell forItem:(id)item;
- (void)_configureMonthlySpendLimitCell:(id)cell forItem:(id)item;
- (void)_configureMergeBalanceCell:(id)cell forItem:(id)item;
- (void)_configureMergeNoticeCell:(id)cell forItem:(id)item;
- (void)_configureTotalBalanceCell:(id)cell forItem:(id)item;
- (void)_configureDailyCashCell:(id)cell forItem:(id)item;
- (void)_configureRewardsSummaryCell:(id)cell forItem:(id)item;
- (void)_configureExportStatementDataCell:(id)cell forItem:(id)item;
- (void)_selectFileFormatForExportedStatementDataForItem:(id)item inCollectionView:(id)view;
- (id)_readableFileTypeForFormat:(id)format feature:(unsigned long long)feature;
- (void)_downloadExportedStatementDataForItem:(id)item withFileFormat:(id)format inCollectionView:(id)view;
- (void)_configureStatementDownloadCell:(id)cell forItem:(id)item;
- (void)_downloadAndPresentStatementForItem:(id)item inCollectionView:(id)view;
- (id)statementIcon;
- (id)_statementCellTitleForItem:(id)item;
- (BOOL)_statementIsFromMonthPriorToSummaryForItem:(id)item;
- (void)traitCollectionDidChangeFromTrait:(id)trait toTrait:(id)trait inCollectionView:(id)view;
@end

#endif /* PKDashboardBalanceSummaryItemPresenter_h */