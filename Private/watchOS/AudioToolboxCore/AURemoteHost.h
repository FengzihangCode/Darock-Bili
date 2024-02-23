//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1387.3.4.0.0
//
#ifndef AURemoteHost_h
#define AURemoteHost_h
@import Foundation;

#include "AUAudioUnit.h"
#include "AUAudioUnitXPCProtocol-Protocol.h"
#include "AUParameterTree.h"

@class NSMutableArray, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_voucher, {KVOAggregator="mRecords"{vector<KVOAggregator::Record, std::allocator<KVOAggregator::Record>>="__begin_"^{Record}"__end_"^{Record}"__end_cap_"{__compressed_pair<KVOAggregator::Record *, std::allocator<KVOAggregator::Record>>="__value_"^{Record}}}}, {optional<AUOOPRenderingServerUser>=""(?="__null_state_"c"__val_"{AUOOPRenderingServerUser="_vptr$CAPrint"^^?"mSerialNum"I"mAUAudioUnit"@"AUAudioUnit""mRetainedRenderBlock"@?"mRenderBlock"@?"mCanProcessInPlace"B"mIsV2AudioUnit"B"mMIDIOutBaseSampleTime"q"mEventSchedule"^{AUEventSchedule}"mSharedBuffers"^{AUOOPSharedMemory}"mRenderThreadId"{optional<std::__thread_id>=""(?="__null_state_"c"__val_"{__thread_id="__id_"^{_opaque_pthread_t}})"__engaged_"B}})"__engaged_"B}, {reply_watchdog_factory="mDebugging"B"mDefaultTimeoutMS"i"mTimeoutHandler"{function<void ()>="__f_"{__value_func<void ()>="__buf_"{type="__lx"[24C]}"__f_"^v}}}, {shared_ptr<auoop::WorkgroupMirror>="__ptr_"^{WorkgroupMirror}"__cntrl_"^{__shared_weak_count}}, {vector<AURemoteMessageChannel *, std::allocator<AURemoteMessageChannel *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<AURemoteMessageChannel *__strong *, std::allocator<AURemoteMessageChannel *>>="__value_"^@}};

@interface AURemoteHost : NSObject<AUAudioUnitXPCProtocol> {
  /* instance variables */
  AUAudioUnit *_audioUnit;
  NSXPCConnection *_remoteHostXPCConnection;
  struct optional<AUOOPRenderingServerUser> { union { char __null_state_; struct AUOOPRenderingServerUser { undefined * *_vptr$CAPrint; unsigned int mSerialNum; AUAudioUnit *mAUAudioUnit; id /* block */ mRetainedRenderBlock; id /* block */ mRenderBlock; BOOL mCanProcessInPlace; BOOL mIsV2AudioUnit; long long mMIDIOutBaseSampleTime; struct AUEventSchedule *mEventSchedule; struct AUOOPSharedMemory *mSharedBuffers; struct optional<std::__thread_id> { union { char __null_state_; struct __thread_id { struct _opaque_pthread_t *__id_; } __val_; } x0; BOOL __engaged_; } mRenderThreadId; } __val_; } x0; BOOL __engaged_; } _renderServerUser;
  NSObject<OS_voucher> *_initializationVoucher;
  AUParameterTree *_cachedParameterTree;
  struct reply_watchdog_factory { BOOL mDebugging; int mDefaultTimeoutMS; struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x[24] __lx; } __buf_; void *__f_; } __f_; } mTimeoutHandler; } _replyWatchdogFactory;
  NSObject<OS_dispatch_queue> *_presetMonitoringQueue;
  NSObject<OS_dispatch_source> *_presetFolderWatcher;
  NSMutableArray *_userPresets;
  struct shared_ptr<auoop::WorkgroupMirror> { struct WorkgroupMirror *__ptr_; struct __shared_weak_count *__cntrl_; } _workgroupMirror;
  struct KVOAggregator { struct vector<KVOAggregator::Record, std::allocator<KVOAggregator::Record>> { struct Record *__begin_; struct Record *__end_; struct __compressed_pair<KVOAggregator::Record *, std::allocator<KVOAggregator::Record>> { struct Record *__value_; } __end_cap_; } mRecords; } _kvoAggregator;
  struct vector<AURemoteMessageChannel *, std::allocator<AURemoteMessageChannel *>> { __end_ * *__begin_; __end_cap_ * * x0; struct __compressed_pair<AURemoteMessageChannel *__strong *, std::allocator<AURemoteMessageChannel *>> { id *__value_; } x1; } _remoteMessageChannels;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyObserverQueue;
@property (nonatomic) int deferPropertyChangeNotifications;
@property (readonly, nonatomic) NSMutableArray *pendingChangedProperties;
@property (readonly, nonatomic) struct { unsigned int x0[8] } hostAuditToken;
@property (readonly, nonatomic) struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } componentDescription;
@property (readonly, nonatomic) NSUUID *audioUnitUUID;

/* class methods */
+ (void)_staticInit;

/* instance methods */
- (id)_getBus:(unsigned int)bus scope:(unsigned int)scope error:(id *)error;
- (BOOL)_identifyBus:(id)bus scope:(unsigned int *)scope element:(unsigned int *)element;
- (id)initWithInputItems_internal:(id)items_internal xpcConnection:(id)connection;
- (id)initWithInputItems:(id)items xpcConnection:(id)connection;
- (id)initWithInputItems:(id)items xpcConnection:(id)connection timeOutHandler:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24] } x0; void * x1; } x0; })handler;
- (id)_getSpeechSynthesisProviderAudioUnit;
- (void)close:(id /* block */)close;
- (void)dealloc;
- (void)setBlocks;
- (void)openImpl:(id)impl reply:(id /* block */)reply;
- (void)open:(id /* block */)open;
- (void)getBusses:(unsigned int)busses reply:(id /* block */)reply;
- (void)initialize:(unsigned long long)initialize reply:(id /* block */)reply;
- (void)updateHostCallbacks:(unsigned long long)callbacks reply:(id /* block */)reply;
- (void)updateWorkgroupMirror:(id)mirror reply:(id /* block */)reply;
- (void)createRenderPipe:(int)pipe formats:(id)formats maxFrames:(unsigned int)frames midiOutSizeHint:(unsigned int)hint resources:(id)resources reply:(id /* block */)reply;
- (void)destroyRenderPipe:(unsigned int)pipe reply:(id /* block */)reply;
- (void)uninitialize:(id /* block */)uninitialize;
- (void)reset:(id /* block */)reset;
- (void)valueForKey:(id)key reply:(id /* block */)reply;
- (void)setValue:(id)value forKey:(id)key reply:(id /* block */)reply;
- (void)valueForProperty:(id)property propagateError:(BOOL)error reply:(id /* block */)reply;
- (void)setValue:(id)value forProperty:(id)property propagateError:(BOOL)error reply:(id /* block */)reply;
- (void)addPropertyObserver:(id)observer context:(unsigned long long)context reply:(id /* block */)reply;
- (void)removePropertyObserver:(id)observer context:(unsigned long long)context reply:(id /* block */)reply;
- (void)setBusFormat:(unsigned int)format scope:(unsigned int)scope format:(id)format reply:(id /* block */)reply;
- (void)setBusName:(unsigned int)name scope:(unsigned int)scope name:(id)name reply:(id /* block */)reply;
- (void)setBusCount:(unsigned long long)count scope:(unsigned int)scope reply:(id /* block */)reply;
- (id)currentParameterTree;
- (void)getParameterTree:(id /* block */)tree;
- (void)parametersForOverviewWithCount:(long long)count reply:(id /* block */)reply;
- (void)syncParameter:(unsigned long long)parameter value:(float)value extOriginator:(unsigned long long)originator hostTime:(unsigned long long)time eventType:(unsigned int)type;
- (void)getParameter:(unsigned long long)parameter sequenceNumber:(unsigned int)number reply:(id /* block */)reply;
- (void)parameterStringFromValue:(float)value currentValue:(BOOL)value address:(unsigned long long)address reply:(id /* block */)reply;
- (void)parameterValueFromString:(id)string address:(unsigned long long)address reply:(id /* block */)reply;
- (void)parameterNode:(id)node displayNameWithLength:(long long)length reply:(id /* block */)reply;
- (id)_fetchAndClearPendingChangedProperties;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)supportedViewConfigurations:(id)configurations reply:(id /* block */)reply;
- (void)selectViewConfiguration:(id)configuration reply:(id /* block */)reply;
- (void)profileStateForCable:(unsigned char)cable channel:(unsigned char)channel reply:(id /* block */)reply;
- (void)enableProfile:(id)profile cable:(unsigned char)cable onChannel:(unsigned char)channel reply:(id /* block */)reply;
- (void)disableProfile:(id)profile cable:(unsigned char)cable onChannel:(unsigned char)channel reply:(id /* block */)reply;
- (void)loadUserPresets:(id /* block */)presets;
- (void)saveUserPreset:(id)preset state:(id)state reply:(id /* block */)reply;
- (void)deleteUserPreset:(id)preset reply:(id /* block */)reply;
- (void)presetStateFor:(id)for reply:(id /* block */)reply;
- (void)startUserPresetFolderMonitoring;
- (void)synthesizeSpeechRequest:(id)request reply:(id /* block */)reply;
- (void)cancelSpeechRequest:(id /* block */)request;
- (void)getSpeechVoices:(id /* block */)voices;
- (id)audioUnit;
- (void)getCustomMessageChannelFor:(id)for reply:(id /* block */)reply;
- (id)readHostEntitlement:(id)entitlement;
@end

#endif /* AURemoteHost_h */