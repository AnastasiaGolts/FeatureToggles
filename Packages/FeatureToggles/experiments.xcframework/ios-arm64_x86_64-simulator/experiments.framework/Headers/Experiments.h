#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ExperimentsBase, ExperimentsMutableSet<E>, ExperimentsMutableDictionary<K, V>, ExperimentsNumber, ExperimentsByte, ExperimentsUByte, ExperimentsShort, ExperimentsUShort, ExperimentsInt, ExperimentsUInt, ExperimentsLong, ExperimentsULong, ExperimentsFloat, ExperimentsDouble, ExperimentsBoolean, ExperimentsKotlinCancellationException, ExperimentsKotlinIllegalStateException, ExperimentsKotlinRuntimeException, ExperimentsKotlinException, ExperimentsKotlinThrowable, ExperimentsKotlinArray<T>, ExperimentsKotlinUnit, ExperimentsKotlinNothing, ExperimentsSkieColdFlowIterator<E>, ExperimentsSkieKotlinFlow<T>, ExperimentsSkieKotlinMutableSharedFlow<T>, ExperimentsSkieKotlinMutableStateFlow<T>, ExperimentsSkieKotlinOptionalFlow<T>, ExperimentsSkieKotlinOptionalMutableSharedFlow<T>, ExperimentsSkieKotlinOptionalMutableStateFlow<T>, ExperimentsSkieKotlinOptionalSharedFlow<T>, ExperimentsSkieKotlinOptionalStateFlow<T>, ExperimentsSkieKotlinSharedFlow<T>, ExperimentsSkieKotlinStateFlow<T>, ExperimentsSkie_CancellationHandler, ExperimentsSkie_SuspendHandler, ExperimentsSkie_SuspendResult, ExperimentsSkie_SuspendResultCanceled, ExperimentsSkie_SuspendResultError, ExperimentsSkie_SuspendResultSuccess, ExperimentsDebugDataSourceFactory, ExperimentsExperimentsInteractorFactory, ExperimentsExperimentsPreferencesSettingsProvider, ExperimentsPreferencesSettingsProviderCompanion, ExperimentsOnToggleChangeCompanion, ExperimentsFlowExperimentsDataSource, ExperimentsHardcodedExperimentsDataSource, ExperimentsListenerCompanion, ExperimentsBoolExperiment, ExperimentsFlowExperimentsInteractor, ExperimentsStringExperiment, ExperimentsBoolToggle, ExperimentsBoolToggleCompanion, ExperimentsToggleCompanion, ExperimentsStringToggle, ExperimentsStringToggleCompanion, ExperimentsExperimentsInteractorFactoryKt, ExperimentsDebugDataSourceFactoryKt, ExperimentsKotlinx_serialization_corePolymorphicKind, ExperimentsKotlinx_serialization_corePolymorphicKindOPEN, ExperimentsKotlinx_serialization_corePolymorphicKindSEALED, ExperimentsKotlinx_serialization_coreSerialKind, ExperimentsKotlinx_serialization_coreSerialKindCONTEXTUAL, ExperimentsKotlinx_serialization_coreSerialKindENUM, ExperimentsKotlinx_serialization_corePrimitiveKind, ExperimentsKotlinx_serialization_corePrimitiveKindBOOLEAN, ExperimentsKotlinx_serialization_corePrimitiveKindBYTE, ExperimentsKotlinx_serialization_corePrimitiveKindCHAR, ExperimentsKotlinx_serialization_corePrimitiveKindDOUBLE, ExperimentsKotlinx_serialization_corePrimitiveKindFLOAT, ExperimentsKotlinx_serialization_corePrimitiveKindINT, ExperimentsKotlinx_serialization_corePrimitiveKindLONG, ExperimentsKotlinx_serialization_corePrimitiveKindSHORT, ExperimentsKotlinx_serialization_corePrimitiveKindSTRING, ExperimentsKotlinx_serialization_coreStructureKind, ExperimentsKotlinx_serialization_coreStructureKindCLASS, ExperimentsKotlinx_serialization_coreStructureKindLIST, ExperimentsKotlinx_serialization_coreStructureKindMAP, ExperimentsKotlinx_serialization_coreStructureKindOBJECT, ExperimentsKotlinx_serialization_coreSerializersModule, Experiments__SkieSuspendWrappersKt, Experiments__SkieTypeExportsKt, NSObject, NSError, NSString, NSArray<E>, NSMutableArray<E>, NSSet<E>, NSDictionary<K, V>, NSMutableSet, NSMutableDictionary, NSNumber;

@protocol ExperimentsKotlinIterator, ExperimentsKotlinAnnotation, ExperimentsKotlinKClass, ExperimentsKotlinKDeclarationContainer, ExperimentsKotlinKAnnotatedElement, ExperimentsKotlinKClassifier, ExperimentsSkie_DispatcherDelegate, ExperimentsKotlinx_coroutines_coreFlow, ExperimentsKotlinx_coroutines_coreMutableSharedFlow, ExperimentsKotlinx_coroutines_coreSharedFlow, ExperimentsKotlinx_coroutines_coreFlowCollector, ExperimentsKotlinx_coroutines_coreMutableStateFlow, ExperimentsKotlinx_coroutines_coreStateFlow, ExperimentsKotlinx_coroutines_coreRunnable, ExperimentsDataSourceDependencies, ExperimentsExperimentsDataSourceProvider, ExperimentsExperimentsDependencies, ExperimentsPreferencesSettingsProvider, ExperimentsOnToggleChange, ExperimentsDebugDataSource, ExperimentsObservableExperimentsDataSource, ExperimentsExperimentsDataSource, ExperimentsListener, ExperimentsExperiment, ExperimentsExperimentsInteractor, ExperimentsToggle, ExperimentsMultiplatform_settingsObservableSettings, ExperimentsMultiplatform_settingsSettings, ExperimentsMultiplatform_settingsSettingsListener, ExperimentsKotlinx_serialization_coreKSerializer, ExperimentsKotlinx_serialization_coreSerializationStrategy, ExperimentsKotlinx_serialization_coreDeserializationStrategy, ExperimentsKotlinx_serialization_coreEncoder, ExperimentsKotlinx_serialization_coreSerialDescriptor, ExperimentsKotlinx_serialization_coreDecoder, ExperimentsKotlinx_serialization_coreCompositeEncoder, ExperimentsKotlinx_serialization_coreCompositeDecoder, ExperimentsKotlinx_serialization_coreSerializersModuleCollector, NSCopying;

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift types with a lambda type argument.
// Example of such type is: A<() -> Unit> where A<T> is a generic class.
// To avoid compilation errors SKIE replaces these type arguments with __SkieLambdaErrorType, resulting in A<__SkieLambdaErrorType>.
// Generated declarations that reference __SkieLambdaErrorType cannot be called in any way and the __SkieLambdaErrorType class cannot be used.
// The original declarations can still be used in the same way as other declarations hidden by SKIE (and with the same limitations as without SKIE).
@interface __SkieLambdaErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift code that uses external Obj-C types for which SKIE doesn't know a fully qualified name.
// This problem occurs when custom Cinterop bindings are used because those do not contain the name of the Framework that provides implementation for those binding.
// The name can be configured manually using the SKIE Gradle configuration key 'ClassInterop.CInteropFrameworkName' in the same way as other SKIE features.
// To avoid compilation errors SKIE replaces types with unknown Framework name with __SkieUnknownCInteropFrameworkErrorType.
// Generated declarations that reference __SkieUnknownCInteropFrameworkErrorType cannot be called in any way and the __SkieUnknownCInteropFrameworkErrorType class cannot be used.
@interface __SkieUnknownCInteropFrameworkErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end


NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface ExperimentsBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface ExperimentsBase (ExperimentsBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface ExperimentsMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface ExperimentsMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorExperimentsKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface ExperimentsNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface ExperimentsByte : ExperimentsNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface ExperimentsUByte : ExperimentsNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface ExperimentsShort : ExperimentsNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface ExperimentsUShort : ExperimentsNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface ExperimentsInt : ExperimentsNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface ExperimentsUInt : ExperimentsNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface ExperimentsLong : ExperimentsNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface ExperimentsULong : ExperimentsNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface ExperimentsFloat : ExperimentsNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface ExperimentsDouble : ExperimentsNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface ExperimentsBoolean : ExperimentsNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieColdFlowIterator")))
@interface ExperimentsSkieColdFlowIterator<E> : ExperimentsBase
- (instancetype)initWithFlow:(id<ExperimentsKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(ExperimentsBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (E _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol ExperimentsKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ExperimentsKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinFlow")))
@interface ExperimentsSkieKotlinFlow<__covariant T> : ExperimentsBase <ExperimentsKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<ExperimentsKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ExperimentsKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol ExperimentsKotlinx_coroutines_coreSharedFlow <ExperimentsKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol ExperimentsKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol ExperimentsKotlinx_coroutines_coreMutableSharedFlow <ExperimentsKotlinx_coroutines_coreSharedFlow, ExperimentsKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<ExperimentsKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableSharedFlow")))
@interface ExperimentsSkieKotlinMutableSharedFlow<T> : ExperimentsBase <ExperimentsKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<ExperimentsKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<ExperimentsKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ExperimentsKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol ExperimentsKotlinx_coroutines_coreStateFlow <ExperimentsKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol ExperimentsKotlinx_coroutines_coreMutableStateFlow <ExperimentsKotlinx_coroutines_coreStateFlow, ExperimentsKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableStateFlow")))
@interface ExperimentsSkieKotlinMutableStateFlow<T> : ExperimentsBase <ExperimentsKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<ExperimentsKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<ExperimentsKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ExperimentsKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T)expect update:(T)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalFlow")))
@interface ExperimentsSkieKotlinOptionalFlow<__covariant T> : ExperimentsBase <ExperimentsKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<ExperimentsKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ExperimentsKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableSharedFlow")))
@interface ExperimentsSkieKotlinOptionalMutableSharedFlow<T> : ExperimentsBase <ExperimentsKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<ExperimentsKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<ExperimentsKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ExperimentsKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableStateFlow")))
@interface ExperimentsSkieKotlinOptionalMutableStateFlow<T> : ExperimentsBase <ExperimentsKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<ExperimentsKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<ExperimentsKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ExperimentsKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalSharedFlow")))
@interface ExperimentsSkieKotlinOptionalSharedFlow<__covariant T> : ExperimentsBase <ExperimentsKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<ExperimentsKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ExperimentsKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalStateFlow")))
@interface ExperimentsSkieKotlinOptionalStateFlow<__covariant T> : ExperimentsBase <ExperimentsKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<ExperimentsKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ExperimentsKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinSharedFlow")))
@interface ExperimentsSkieKotlinSharedFlow<__covariant T> : ExperimentsBase <ExperimentsKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<ExperimentsKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ExperimentsKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinStateFlow")))
@interface ExperimentsSkieKotlinStateFlow<__covariant T> : ExperimentsBase <ExperimentsKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<ExperimentsKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ExperimentsKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_CancellationHandler")))
@interface ExperimentsSkie_CancellationHandler : ExperimentsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((swift_name("Skie_DispatcherDelegate")))
@protocol ExperimentsSkie_DispatcherDelegate
@required
- (void)dispatchBlock:(id<ExperimentsKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendHandler")))
@interface ExperimentsSkie_SuspendHandler : ExperimentsBase
- (instancetype)initWithCancellationHandler:(ExperimentsSkie_CancellationHandler *)cancellationHandler dispatcherDelegate:(id<ExperimentsSkie_DispatcherDelegate>)dispatcherDelegate onResult:(void (^)(ExperimentsSkie_SuspendResult *))onResult __attribute__((swift_name("init(cancellationHandler:dispatcherDelegate:onResult:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Skie_SuspendResult")))
@interface ExperimentsSkie_SuspendResult : ExperimentsBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Canceled")))
@interface ExperimentsSkie_SuspendResultCanceled : ExperimentsSkie_SuspendResult
@property (class, readonly, getter=shared) ExperimentsSkie_SuspendResultCanceled *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canceled __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Error")))
@interface ExperimentsSkie_SuspendResultError : ExperimentsSkie_SuspendResult
@property (readonly) NSError *error __attribute__((swift_name("error")));
- (instancetype)initWithError:(NSError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (ExperimentsSkie_SuspendResultError *)doCopyError:(NSError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Success")))
@interface ExperimentsSkie_SuspendResultSuccess : ExperimentsSkie_SuspendResult
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (ExperimentsSkie_SuspendResultSuccess *)doCopyValue:(id _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("DataSourceDependencies")))
@protocol ExperimentsDataSourceDependencies
@required
@property (readonly) id<ExperimentsPreferencesSettingsProvider> settingsProvider __attribute__((swift_name("settingsProvider")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DebugDataSourceFactory")))
@interface ExperimentsDebugDataSourceFactory : ExperimentsBase
@property (readonly) id<ExperimentsDebugDataSource> debugDataSource __attribute__((swift_name("debugDataSource")));
- (instancetype)initWithDataSourceDependencies:(id<ExperimentsDataSourceDependencies>)dataSourceDependencies __attribute__((swift_name("init(dataSourceDependencies:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("ExperimentsDataSourceProvider")))
@protocol ExperimentsExperimentsDataSourceProvider
@required
- (NSArray<id<ExperimentsObservableExperimentsDataSource>> *)dataSource __attribute__((swift_name("dataSource()")));
@end

__attribute__((swift_name("ExperimentsDependencies")))
@protocol ExperimentsExperimentsDependencies
@required
@property (readonly) id<ExperimentsExperimentsDataSourceProvider> experimentsDataSourceProvider __attribute__((swift_name("experimentsDataSourceProvider")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExperimentsInteractorFactory")))
@interface ExperimentsExperimentsInteractorFactory : ExperimentsBase
@property (readonly) id<ExperimentsExperimentsInteractor> interactor __attribute__((swift_name("interactor")));
- (instancetype)initWithDeps:(id<ExperimentsExperimentsDependencies>)deps __attribute__((swift_name("init(deps:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("PreferencesSettingsProvider")))
@protocol ExperimentsPreferencesSettingsProvider
@required
@property (readonly) id<ExperimentsMultiplatform_settingsObservableSettings> settings __attribute__((swift_name("settings")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExperimentsPreferencesSettingsProvider")))
@interface ExperimentsExperimentsPreferencesSettingsProvider : ExperimentsBase <ExperimentsPreferencesSettingsProvider>
@property (readonly) id<ExperimentsMultiplatform_settingsObservableSettings> settings __attribute__((swift_name("settings")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("OnToggleChange")))
@protocol ExperimentsOnToggleChange
@required
- (void)invokeToggle:(id<ExperimentsToggle> _Nullable)toggle __attribute__((swift_name("invoke(toggle:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnToggleChangeCompanion")))
@interface ExperimentsOnToggleChangeCompanion : ExperimentsBase
@property (class, readonly, getter=shared) ExperimentsOnToggleChangeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ExperimentsOnToggleChange>)invokeCallBack:(void (^)(id<ExperimentsToggle> _Nullable))callBack __attribute__((swift_name("invoke(callBack:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesSettingsProviderCompanion")))
@interface ExperimentsPreferencesSettingsProviderCompanion : ExperimentsBase
@property (class, readonly, getter=shared) ExperimentsPreferencesSettingsProviderCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("ExperimentsDataSource")))
@protocol ExperimentsExperimentsDataSource
@required
- (ExperimentsBoolToggle * _Nullable)boolWith:(NSString *)with __attribute__((swift_name("bool(with:)")));
- (ExperimentsStringToggle * _Nullable)stringWith:(NSString *)with __attribute__((swift_name("string(with:)")));
@property (readonly) int32_t priority __attribute__((swift_name("priority")));
@end

__attribute__((swift_name("ObservableExperimentsDataSource")))
@protocol ExperimentsObservableExperimentsDataSource <ExperimentsExperimentsDataSource>
@required
- (id<ExperimentsListener>)observeBoolToggleKey:(NSString *)key callBack:(id<ExperimentsOnToggleChange>)callBack __attribute__((swift_name("observeBoolToggle(key:callBack:)")));
- (id<ExperimentsListener>)observeStringToggleKey:(NSString *)key callback:(id<ExperimentsOnToggleChange>)callback __attribute__((swift_name("observeStringToggle(key:callback:)")));
@end

__attribute__((swift_name("DebugDataSource")))
@protocol ExperimentsDebugDataSource <ExperimentsObservableExperimentsDataSource>
@required
- (void)clear __attribute__((swift_name("clear()")));
- (void)setKey:(NSString *)key for:(id<ExperimentsToggle>)for_ __attribute__((swift_name("set(key:for:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowExperimentsDataSource")))
@interface ExperimentsFlowExperimentsDataSource : ExperimentsBase <ExperimentsObservableExperimentsDataSource>
@property (readonly) int32_t priority __attribute__((swift_name("priority")));
- (instancetype)initWithDataSource:(id<ExperimentsObservableExperimentsDataSource>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));
- (ExperimentsBoolToggle * _Nullable)boolWith:(NSString *)with __attribute__((swift_name("bool(with:)")));
- (ExperimentsStringToggle * _Nullable)stringWith:(NSString *)with __attribute__((swift_name("string(with:)")));
- (id<ExperimentsListener>)observeBoolToggleKey:(NSString *)key callBack:(id<ExperimentsOnToggleChange>)callBack __attribute__((swift_name("observeBoolToggle(key:callBack:)")));
- (id<ExperimentsListener>)observeStringToggleKey:(NSString *)key callback:(id<ExperimentsOnToggleChange>)callback __attribute__((swift_name("observeStringToggle(key:callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HardcodedExperimentsDataSource")))
@interface ExperimentsHardcodedExperimentsDataSource : ExperimentsBase <ExperimentsObservableExperimentsDataSource>
@property (readonly) int32_t priority __attribute__((swift_name("priority")));
- (instancetype)initWithBoolExperiments:(NSDictionary<NSString *, ExperimentsBoolToggle *> *)boolExperiments stringExperiments:(NSDictionary<NSString *, ExperimentsStringToggle *> *)stringExperiments __attribute__((swift_name("init(boolExperiments:stringExperiments:)"))) __attribute__((objc_designated_initializer));
- (ExperimentsBoolToggle * _Nullable)boolWith:(NSString *)with __attribute__((swift_name("bool(with:)")));
- (ExperimentsStringToggle * _Nullable)stringWith:(NSString *)with __attribute__((swift_name("string(with:)")));
- (id<ExperimentsListener>)observeBoolToggleKey:(NSString *)key callBack:(id<ExperimentsOnToggleChange>)callBack __attribute__((swift_name("observeBoolToggle(key:callBack:)")));
- (id<ExperimentsListener>)observeStringToggleKey:(NSString *)key callback:(id<ExperimentsOnToggleChange>)callback __attribute__((swift_name("observeStringToggle(key:callback:)")));
@end

__attribute__((swift_name("Listener")))
@protocol ExperimentsListener
@required
- (void)deactivate __attribute__((swift_name("deactivate()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListenerCompanion")))
@interface ExperimentsListenerCompanion : ExperimentsBase
@property (class, readonly, getter=shared) ExperimentsListenerCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ExperimentsListener>)invokeDeactivate:(void (^)(void))deactivate __attribute__((swift_name("invoke(deactivate:)")));
@end

__attribute__((swift_name("Experiment")))
@protocol ExperimentsExperiment
@required
@property (readonly) NSString *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("BoolExperiment")))
@interface ExperimentsBoolExperiment : ExperimentsBase <ExperimentsExperiment>
@property (readonly) NSString *key __attribute__((swift_name("key")));
- (instancetype)initWithKey:(NSString *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
- (ExperimentsBoolToggle *)boolFor:(id<ExperimentsExperimentsInteractor>)for_ with:(BOOL)with __attribute__((swift_name("bool(for:with:)")));
- (ExperimentsBoolToggle *)boolInteractor:(id<ExperimentsExperimentsInteractor>)interactor __attribute__((swift_name("bool(interactor:)")));
@end

__attribute__((swift_name("ExperimentsInteractor")))
@protocol ExperimentsExperimentsInteractor
@required
- (ExperimentsBoolToggle *)boolFor:(id<ExperimentsExperiment>)for_ with_:(ExperimentsBoolToggle *)with __attribute__((swift_name("bool(for:with_:)")));
- (ExperimentsStringToggle *)stringFor:(id<ExperimentsExperiment>)for_ with:(ExperimentsStringToggle *)with __attribute__((swift_name("string(for:with:)")));
- (void)subscribeBoolToggleExperiment:(id<ExperimentsExperiment>)experiment defaultValue:(ExperimentsBoolToggle *)defaultValue callBack:(id<ExperimentsOnToggleChange>)callBack __attribute__((swift_name("subscribeBoolToggle(experiment:defaultValue:callBack:)")));
- (void)subscribeStringToggleExperiment:(id<ExperimentsExperiment>)experiment defaultValue:(ExperimentsStringToggle *)defaultValue callBack:(id<ExperimentsOnToggleChange>)callBack __attribute__((swift_name("subscribeStringToggle(experiment:defaultValue:callBack:)")));
- (void)unsubscribeBoolToggleCallBack:(id<ExperimentsOnToggleChange>)callBack __attribute__((swift_name("unsubscribeBoolToggle(callBack:)")));
- (void)unsubscribeStringToggleCallBack:(id<ExperimentsOnToggleChange>)callBack __attribute__((swift_name("unsubscribeStringToggle(callBack:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowExperimentsInteractor")))
@interface ExperimentsFlowExperimentsInteractor : ExperimentsBase <ExperimentsExperimentsInteractor>
- (instancetype)initWithExperimentsInteractor:(id<ExperimentsExperimentsInteractor>)experimentsInteractor __attribute__((swift_name("init(experimentsInteractor:)"))) __attribute__((objc_designated_initializer));
- (ExperimentsBoolToggle *)boolFor:(id<ExperimentsExperiment>)for_ with_:(ExperimentsBoolToggle *)with __attribute__((swift_name("bool(for:with_:)")));
- (ExperimentsStringToggle *)stringFor:(id<ExperimentsExperiment>)for_ with:(ExperimentsStringToggle *)with __attribute__((swift_name("string(for:with:)")));
- (void)subscribeBoolToggleExperiment:(id<ExperimentsExperiment>)experiment defaultValue:(ExperimentsBoolToggle *)defaultValue callBack:(id<ExperimentsOnToggleChange>)callBack __attribute__((swift_name("subscribeBoolToggle(experiment:defaultValue:callBack:)")));
- (void)subscribeStringToggleExperiment:(id<ExperimentsExperiment>)experiment defaultValue:(ExperimentsStringToggle *)defaultValue callBack:(id<ExperimentsOnToggleChange>)callBack __attribute__((swift_name("subscribeStringToggle(experiment:defaultValue:callBack:)")));
- (void)unsubscribeBoolToggleCallBack:(id<ExperimentsOnToggleChange>)callBack __attribute__((swift_name("unsubscribeBoolToggle(callBack:)")));
- (void)unsubscribeStringToggleCallBack:(id<ExperimentsOnToggleChange>)callBack __attribute__((swift_name("unsubscribeStringToggle(callBack:)")));
@end

__attribute__((swift_name("StringExperiment")))
@interface ExperimentsStringExperiment : ExperimentsBase <ExperimentsExperiment>
@property (readonly) NSString *key __attribute__((swift_name("key")));
- (instancetype)initWithKey:(NSString *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
- (ExperimentsStringToggle *)stringFor:(id<ExperimentsExperimentsInteractor>)for_ with_:(NSString *)with __attribute__((swift_name("string(for:with_:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Toggle")))
@protocol ExperimentsToggle
@required
@property (readonly) BOOL canBeModified __attribute__((swift_name("canBeModified")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
 *   kotlinx.serialization.SerialName(value="BoolToggle")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoolToggle")))
@interface ExperimentsBoolToggle : ExperimentsBase <ExperimentsToggle>
@property (class, readonly, getter=companion) ExperimentsBoolToggleCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL canBeModified __attribute__((swift_name("canBeModified")));
@property (readonly) BOOL value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(BOOL)value canBeModified:(BOOL)canBeModified __attribute__((swift_name("init(value:canBeModified:)"))) __attribute__((objc_designated_initializer));
- (ExperimentsBoolToggle *)doCopyValue:(BOOL)value canBeModified:(BOOL)canBeModified __attribute__((swift_name("doCopy(value:canBeModified:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="canBeModified")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="boolValue")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoolToggle.Companion")))
@interface ExperimentsBoolToggleCompanion : ExperimentsBase
@property (class, readonly, getter=shared) ExperimentsBoolToggleCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ExperimentsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
 *   kotlinx.serialization.SerialName(value="StringToggle")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringToggle")))
@interface ExperimentsStringToggle : ExperimentsBase <ExperimentsToggle>
@property (class, readonly, getter=companion) ExperimentsStringToggleCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL canBeModified __attribute__((swift_name("canBeModified")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(NSString *)value canBeModified:(BOOL)canBeModified __attribute__((swift_name("init(value:canBeModified:)"))) __attribute__((objc_designated_initializer));
- (ExperimentsStringToggle *)doCopyValue:(NSString *)value canBeModified:(BOOL)canBeModified __attribute__((swift_name("doCopy(value:canBeModified:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="canBeModified")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="stringValue")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringToggle.Companion")))
@interface ExperimentsStringToggleCompanion : ExperimentsBase
@property (class, readonly, getter=shared) ExperimentsStringToggleCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ExperimentsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ToggleCompanion")))
@interface ExperimentsToggleCompanion : ExperimentsBase
@property (class, readonly, getter=shared) ExperimentsToggleCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ExperimentsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<ExperimentsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(ExperimentsKotlinArray<id<ExperimentsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

@interface ExperimentsFlowExperimentsDataSource (Extensions)
- (ExperimentsKotlinUnit *(^(^)(ExperimentsKotlinUnit *(^)(ExperimentsBoolToggle *, ExperimentsKotlinUnit *(^)(void), ExperimentsKotlinUnit *), ExperimentsKotlinUnit *(^)(NSError * _Nullable, ExperimentsKotlinUnit *), ExperimentsKotlinUnit *(^)(NSError *, ExperimentsKotlinUnit *)))(void))boolToggleFlowKey:(NSString *)key __attribute__((swift_name("boolToggleFlow(key:)")));
- (ExperimentsKotlinUnit *(^(^)(ExperimentsKotlinUnit *(^)(ExperimentsStringToggle *, ExperimentsKotlinUnit *(^)(void), ExperimentsKotlinUnit *), ExperimentsKotlinUnit *(^)(NSError * _Nullable, ExperimentsKotlinUnit *), ExperimentsKotlinUnit *(^)(NSError *, ExperimentsKotlinUnit *)))(void))stringToggleFlowKey:(NSString *)key __attribute__((swift_name("stringToggleFlow(key:)")));
@end

@interface ExperimentsBoolExperiment (Extensions)
- (BOOL)isActiveFor:(id<ExperimentsExperimentsInteractor>)for_ with:(BOOL)with __attribute__((swift_name("isActive(for:with:)")));
- (BOOL)isActive__Skie_DefaultArguments__1Interactor:(id<ExperimentsExperimentsInteractor>)interactor __attribute__((swift_name("isActive__Skie_DefaultArguments__1(interactor:)")));
@end

@interface ExperimentsFlowExperimentsInteractor (Extensions)
- (ExperimentsKotlinUnit *(^(^)(ExperimentsKotlinUnit *(^)(ExperimentsBoolToggle *, ExperimentsKotlinUnit *(^)(void), ExperimentsKotlinUnit *), ExperimentsKotlinUnit *(^)(NSError * _Nullable, ExperimentsKotlinUnit *), ExperimentsKotlinUnit *(^)(NSError *, ExperimentsKotlinUnit *)))(void))boolToggleFlowExperiment:(id<ExperimentsExperiment>)experiment defaultValue:(ExperimentsBoolToggle *)defaultValue __attribute__((swift_name("boolToggleFlow(experiment:defaultValue:)")));
- (ExperimentsKotlinUnit *(^(^)(ExperimentsKotlinUnit *(^)(ExperimentsStringToggle *, ExperimentsKotlinUnit *(^)(void), ExperimentsKotlinUnit *), ExperimentsKotlinUnit *(^)(NSError * _Nullable, ExperimentsKotlinUnit *), ExperimentsKotlinUnit *(^)(NSError *, ExperimentsKotlinUnit *)))(void))stringToggleFlowExperiment:(id<ExperimentsExperiment>)experiment defaultValue:(ExperimentsStringToggle *)defaultValue __attribute__((swift_name("stringToggleFlow(experiment:defaultValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DebugDataSourceFactoryKt")))
@interface ExperimentsDebugDataSourceFactoryKt : ExperimentsBase
+ (id<ExperimentsDebugDataSource>)createDebugDataSourceSettingsProvider:(id<ExperimentsPreferencesSettingsProvider>)settingsProvider __attribute__((swift_name("createDebugDataSource(settingsProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExperimentsInteractorFactoryKt")))
@interface ExperimentsExperimentsInteractorFactoryKt : ExperimentsBase
+ (id<ExperimentsExperimentsDataSourceProvider>)ExperimentsDataSourceProviderGetSource:(NSArray<id<ExperimentsObservableExperimentsDataSource>> *(^)(void))getSource __attribute__((swift_name("ExperimentsDataSourceProvider(getSource:)")));
+ (id<ExperimentsExperimentsInteractor>)createExperimentsInteractorGetSource:(NSArray<id<ExperimentsObservableExperimentsDataSource>> *(^)(void))getSource __attribute__((swift_name("createExperimentsInteractor(getSource:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieSuspendWrappersKt")))
@interface Experiments__SkieSuspendWrappersKt : ExperimentsBase
+ (void)Skie_Suspend__0__hasNextDispatchReceiver:(ExperimentsSkieColdFlowIterator<id> *)dispatchReceiver suspendHandler:(ExperimentsSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__0__hasNext(dispatchReceiver:suspendHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieTypeExportsKt")))
@interface Experiments__SkieTypeExportsKt : ExperimentsBase
+ (void)skieTypeExportsP0:(ExperimentsKotlinx_serialization_corePolymorphicKind *)p0 p1:(ExperimentsKotlinx_serialization_corePrimitiveKind *)p1 p2:(ExperimentsKotlinx_serialization_coreSerialKindCONTEXTUAL *)p2 p3:(ExperimentsKotlinx_serialization_coreSerialKindENUM *)p3 p4:(ExperimentsKotlinx_serialization_coreStructureKind *)p4 p5:(ExperimentsKotlinx_serialization_corePolymorphicKindOPEN *)p5 p6:(ExperimentsKotlinx_serialization_corePolymorphicKindSEALED *)p6 p7:(ExperimentsKotlinx_serialization_corePrimitiveKindBOOLEAN *)p7 p8:(ExperimentsKotlinx_serialization_corePrimitiveKindBYTE *)p8 p9:(ExperimentsKotlinx_serialization_corePrimitiveKindCHAR *)p9 p10:(ExperimentsKotlinx_serialization_corePrimitiveKindDOUBLE *)p10 p11:(ExperimentsKotlinx_serialization_corePrimitiveKindFLOAT *)p11 p12:(ExperimentsKotlinx_serialization_corePrimitiveKindINT *)p12 p13:(ExperimentsKotlinx_serialization_corePrimitiveKindLONG *)p13 p14:(ExperimentsKotlinx_serialization_corePrimitiveKindSHORT *)p14 p15:(ExperimentsKotlinx_serialization_corePrimitiveKindSTRING *)p15 p16:(ExperimentsKotlinx_serialization_coreStructureKindCLASS *)p16 p17:(ExperimentsKotlinx_serialization_coreStructureKindLIST *)p17 p18:(ExperimentsKotlinx_serialization_coreStructureKindMAP *)p18 p19:(ExperimentsKotlinx_serialization_coreStructureKindOBJECT *)p19 __attribute__((swift_name("skieTypeExports(p0:p1:p2:p3:p4:p5:p6:p7:p8:p9:p10:p11:p12:p13:p14:p15:p16:p17:p18:p19:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface ExperimentsKotlinThrowable : ExperimentsBase
@property (readonly) ExperimentsKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ExperimentsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ExperimentsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (ExperimentsKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface ExperimentsKotlinException : ExperimentsKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ExperimentsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ExperimentsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface ExperimentsKotlinRuntimeException : ExperimentsKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ExperimentsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ExperimentsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface ExperimentsKotlinIllegalStateException : ExperimentsKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ExperimentsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ExperimentsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface ExperimentsKotlinCancellationException : ExperimentsKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ExperimentsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ExperimentsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol ExperimentsKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Multiplatform_settingsSettings")))
@protocol ExperimentsMultiplatform_settingsSettings
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (ExperimentsBoolean * _Nullable)getBooleanOrNullKey:(NSString *)key __attribute__((swift_name("getBooleanOrNull(key:)")));
- (double)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDouble(key:defaultValue:)")));
- (ExperimentsDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (float)getFloatKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloat(key:defaultValue:)")));
- (ExperimentsFloat * _Nullable)getFloatOrNullKey:(NSString *)key __attribute__((swift_name("getFloatOrNull(key:)")));
- (int32_t)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getInt(key:defaultValue:)")));
- (ExperimentsInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (int64_t)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLong(key:defaultValue:)")));
- (ExperimentsLong * _Nullable)getLongOrNullKey:(NSString *)key __attribute__((swift_name("getLongOrNull(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("putFloat(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("putLong(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@property (readonly) NSSet<NSString *> *keys __attribute__((swift_name("keys")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Multiplatform_settingsObservableSettings")))
@protocol ExperimentsMultiplatform_settingsObservableSettings <ExperimentsMultiplatform_settingsSettings>
@required
- (id<ExperimentsMultiplatform_settingsSettingsListener>)addBooleanListenerKey:(NSString *)key defaultValue:(BOOL)defaultValue callback:(void (^)(ExperimentsBoolean *))callback __attribute__((swift_name("addBooleanListener(key:defaultValue:callback:)")));
- (id<ExperimentsMultiplatform_settingsSettingsListener>)addBooleanOrNullListenerKey:(NSString *)key callback:(void (^)(ExperimentsBoolean * _Nullable))callback __attribute__((swift_name("addBooleanOrNullListener(key:callback:)")));
- (id<ExperimentsMultiplatform_settingsSettingsListener>)addDoubleListenerKey:(NSString *)key defaultValue:(double)defaultValue callback:(void (^)(ExperimentsDouble *))callback __attribute__((swift_name("addDoubleListener(key:defaultValue:callback:)")));
- (id<ExperimentsMultiplatform_settingsSettingsListener>)addDoubleOrNullListenerKey:(NSString *)key callback:(void (^)(ExperimentsDouble * _Nullable))callback __attribute__((swift_name("addDoubleOrNullListener(key:callback:)")));
- (id<ExperimentsMultiplatform_settingsSettingsListener>)addFloatListenerKey:(NSString *)key defaultValue:(float)defaultValue callback:(void (^)(ExperimentsFloat *))callback __attribute__((swift_name("addFloatListener(key:defaultValue:callback:)")));
- (id<ExperimentsMultiplatform_settingsSettingsListener>)addFloatOrNullListenerKey:(NSString *)key callback:(void (^)(ExperimentsFloat * _Nullable))callback __attribute__((swift_name("addFloatOrNullListener(key:callback:)")));
- (id<ExperimentsMultiplatform_settingsSettingsListener>)addIntListenerKey:(NSString *)key defaultValue:(int32_t)defaultValue callback:(void (^)(ExperimentsInt *))callback __attribute__((swift_name("addIntListener(key:defaultValue:callback:)")));
- (id<ExperimentsMultiplatform_settingsSettingsListener>)addIntOrNullListenerKey:(NSString *)key callback:(void (^)(ExperimentsInt * _Nullable))callback __attribute__((swift_name("addIntOrNullListener(key:callback:)")));
- (id<ExperimentsMultiplatform_settingsSettingsListener>)addLongListenerKey:(NSString *)key defaultValue:(int64_t)defaultValue callback:(void (^)(ExperimentsLong *))callback __attribute__((swift_name("addLongListener(key:defaultValue:callback:)")));
- (id<ExperimentsMultiplatform_settingsSettingsListener>)addLongOrNullListenerKey:(NSString *)key callback:(void (^)(ExperimentsLong * _Nullable))callback __attribute__((swift_name("addLongOrNullListener(key:callback:)")));
- (id<ExperimentsMultiplatform_settingsSettingsListener>)addStringListenerKey:(NSString *)key defaultValue:(NSString *)defaultValue callback:(void (^)(NSString *))callback __attribute__((swift_name("addStringListener(key:defaultValue:callback:)")));
- (id<ExperimentsMultiplatform_settingsSettingsListener>)addStringOrNullListenerKey:(NSString *)key callback:(void (^)(NSString * _Nullable))callback __attribute__((swift_name("addStringOrNullListener(key:callback:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol ExperimentsKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<ExperimentsKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<ExperimentsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol ExperimentsKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<ExperimentsKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<ExperimentsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol ExperimentsKotlinx_serialization_coreKSerializer <ExperimentsKotlinx_serialization_coreSerializationStrategy, ExperimentsKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface ExperimentsKotlinArray<T> : ExperimentsBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(ExperimentsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<ExperimentsKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface ExperimentsKotlinUnit : ExperimentsBase
@property (class, readonly, getter=shared) ExperimentsKotlinUnit *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface ExperimentsKotlinx_serialization_coreSerialKind : ExperimentsBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind")))
@interface ExperimentsKotlinx_serialization_corePolymorphicKind : ExperimentsKotlinx_serialization_coreSerialKind
@end

__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind")))
@interface ExperimentsKotlinx_serialization_corePrimitiveKind : ExperimentsKotlinx_serialization_coreSerialKind
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.CONTEXTUAL")))
@interface ExperimentsKotlinx_serialization_coreSerialKindCONTEXTUAL : ExperimentsKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_coreSerialKindCONTEXTUAL *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTEXTUAL __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.ENUM")))
@interface ExperimentsKotlinx_serialization_coreSerialKindENUM : ExperimentsKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_coreSerialKindENUM *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNUM __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind")))
@interface ExperimentsKotlinx_serialization_coreStructureKind : ExperimentsKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.OPEN")))
@interface ExperimentsKotlinx_serialization_corePolymorphicKindOPEN : ExperimentsKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_corePolymorphicKindOPEN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPEN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.SEALED")))
@interface ExperimentsKotlinx_serialization_corePolymorphicKindSEALED : ExperimentsKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_corePolymorphicKindSEALED *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEALED __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BOOLEAN")))
@interface ExperimentsKotlinx_serialization_corePrimitiveKindBOOLEAN : ExperimentsKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_corePrimitiveKindBOOLEAN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bOOLEAN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BYTE")))
@interface ExperimentsKotlinx_serialization_corePrimitiveKindBYTE : ExperimentsKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_corePrimitiveKindBYTE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bYTE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.CHAR")))
@interface ExperimentsKotlinx_serialization_corePrimitiveKindCHAR : ExperimentsKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_corePrimitiveKindCHAR *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cHAR __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.DOUBLE")))
@interface ExperimentsKotlinx_serialization_corePrimitiveKindDOUBLE : ExperimentsKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_corePrimitiveKindDOUBLE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOUBLE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.FLOAT")))
@interface ExperimentsKotlinx_serialization_corePrimitiveKindFLOAT : ExperimentsKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_corePrimitiveKindFLOAT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fLOAT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.INT")))
@interface ExperimentsKotlinx_serialization_corePrimitiveKindINT : ExperimentsKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_corePrimitiveKindINT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.LONG")))
@interface ExperimentsKotlinx_serialization_corePrimitiveKindLONG : ExperimentsKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_corePrimitiveKindLONG *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lONG __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.SHORT")))
@interface ExperimentsKotlinx_serialization_corePrimitiveKindSHORT : ExperimentsKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_corePrimitiveKindSHORT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sHORT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.STRING")))
@interface ExperimentsKotlinx_serialization_corePrimitiveKindSTRING : ExperimentsKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_corePrimitiveKindSTRING *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTRING __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.CLASS")))
@interface ExperimentsKotlinx_serialization_coreStructureKindCLASS : ExperimentsKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_coreStructureKindCLASS *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cLASS __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.LIST")))
@interface ExperimentsKotlinx_serialization_coreStructureKindLIST : ExperimentsKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_coreStructureKindLIST *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIST __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.MAP")))
@interface ExperimentsKotlinx_serialization_coreStructureKindMAP : ExperimentsKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_coreStructureKindMAP *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mAP __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.OBJECT")))
@interface ExperimentsKotlinx_serialization_coreStructureKindOBJECT : ExperimentsKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) ExperimentsKotlinx_serialization_coreStructureKindOBJECT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oBJECT __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Multiplatform_settingsSettingsListener")))
@protocol ExperimentsMultiplatform_settingsSettingsListener
@required
- (void)deactivate __attribute__((swift_name("deactivate()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol ExperimentsKotlinx_serialization_coreEncoder
@required
- (id<ExperimentsKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<ExperimentsKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<ExperimentsKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<ExperimentsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<ExperimentsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) ExperimentsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol ExperimentsKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<ExperimentsKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<ExperimentsKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) ExperimentsKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol ExperimentsKotlinx_serialization_coreDecoder
@required
- (id<ExperimentsKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<ExperimentsKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (ExperimentsKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<ExperimentsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<ExperimentsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) ExperimentsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol ExperimentsKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol ExperimentsKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<ExperimentsKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ExperimentsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ExperimentsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) ExperimentsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface ExperimentsKotlinx_serialization_coreSerializersModule : ExperimentsBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<ExperimentsKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ExperimentsKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<ExperimentsKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<ExperimentsKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ExperimentsKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ExperimentsKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ExperimentsKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ExperimentsKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol ExperimentsKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol ExperimentsKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<ExperimentsKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ExperimentsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ExperimentsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<ExperimentsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) ExperimentsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface ExperimentsKotlinNothing : ExperimentsBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol ExperimentsKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<ExperimentsKotlinKClass>)kClass provider:(id<ExperimentsKotlinx_serialization_coreKSerializer> (^)(NSArray<id<ExperimentsKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<ExperimentsKotlinKClass>)kClass serializer:(id<ExperimentsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<ExperimentsKotlinKClass>)baseClass actualClass:(id<ExperimentsKotlinKClass>)actualClass actualSerializer:(id<ExperimentsKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<ExperimentsKotlinKClass>)baseClass defaultDeserializerProvider:(id<ExperimentsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<ExperimentsKotlinKClass>)baseClass defaultDeserializerProvider:(id<ExperimentsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<ExperimentsKotlinKClass>)baseClass defaultSerializerProvider:(id<ExperimentsKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol ExperimentsKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol ExperimentsKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol ExperimentsKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol ExperimentsKotlinKClass <ExperimentsKotlinKDeclarationContainer, ExperimentsKotlinKAnnotatedElement, ExperimentsKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
