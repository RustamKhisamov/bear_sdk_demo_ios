// Generated by Apple Swift version 4.0.3 (swiftlang-900.0.74.1 clang-900.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import UIKit;
@import CoreLocation;
@import WebKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("BearSDK")
enum BearScannerState : NSInteger;
@class BearError;

/// The <code>BearDelegate</code> protocol provides a mechanism for your application to take
/// action on events that occur in the <code>BearViewController(Objc)</code>. You can make
/// use of these calls by assigning an object to the <code>BearViewController</code> delegate property directly,
/// or connect through Interface Builder.
SWIFT_PROTOCOL("_TtP7BearSDK12BearDelegate_")
@protocol BearDelegate
/// Function will be executed when marker has been recognized.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     markerId: The id of recognized marker.
///   </li>
///   <li>
///     assetIds: The array of asset ids connected to this marker.
///   </li>
/// </ul>
- (void)recognizedMarkerWithId:(NSInteger)markerId assetIds:(NSArray<NSNumber *> * _Nonnull)assetIds;
/// Function will be executed when timeout is reached and no one marker is recognized.
- (void)markerNotRecognized;
/// Function will be executed on click of any asset.
/// \param assetId The id of clicked asset.
///
- (void)assetClickedWith:(NSInteger)assetId;
/// Function will be executed when BearSDK Scanner has changed state.
/// \param state The state of BearSDK Scanner.
///
- (void)scannerStateChanged:(enum BearScannerState)state;
/// Function will be executed on change of reachability status.
/// \param reachable The reachability status
///
- (void)reachabilityStatusChanged:(BOOL)reachable;
/// Function will be executed when an error occurs while the BearSDK is loading content.
/// \param error The error that occurred.
///
- (void)didFailWithError:(BearError * _Nonnull)error;
@end

enum BearErrorType : NSInteger;

/// The <code>BearError</code> exposes short description, type and in some cases reason of occured error.
SWIFT_CLASS("_TtC7BearSDK9BearError")
@interface BearError : NSObject
/// Returns type of the occured error.
@property (nonatomic, readonly) enum BearErrorType type;
/// Returns short description of the occured error.
@property (nonatomic, readonly, copy) NSString * _Nonnull shortDescription;
/// Returns reason of the occured error if possible or nil.
@property (nonatomic, readonly, copy) NSString * _Nullable reason;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

/// The <code>BearErrorType</code> describes type of occured error.
typedef SWIFT_ENUM(NSInteger, BearErrorType) {
/// The invalidSecretKey type of an error, which means that provided secret key is invalid and cannot be used.
  BearErrorTypeInvalidSecretKey = 0,
/// The network type of an error, which means that an error occured while executing network request.
  BearErrorTypeNetwork = 1,
/// The decoding type of an error, which means that an error occured while decoding data.
  BearErrorTypeDecoding = 2,
/// The backend type of an error, which means that backend returns an error instead of requested data.
  BearErrorTypeBackend = 3,
/// The specific type of an error. For detailed explanation check <code>additionalInfo</code> property of BearError.
  BearErrorTypeSpecific = 4,
/// The unknown type of an error.
  BearErrorTypeUnknown = 5,
};

@class UIImage;

/// The <code>BearHandlerProtocol</code> provides a mechanism for your application
/// to handle features of <code>BearViewController(Objc)</code>.
SWIFT_PROTOCOL("_TtP7BearSDK19BearHandlerProtocol_")
@protocol BearHandlerProtocol
/// Takes screenshot of camera view, ignoring any overlapping UI elements.
@property (nonatomic, readonly, strong) UIImage * _Nullable takeScreenshot;
/// Current scanner state.
@property (nonatomic, readonly) enum BearScannerState scannerState;
/// Starts scanning.
- (void)startScanning;
/// Stops scanning.
/// warning:
/// Will be stopped automatically when <code>timeToPause</code> will be reached.
- (void)stopScanning;
/// Destroys all loaded data.
- (void)cleanView;
/// Resumes camera.
/// warning:
/// This function will be executed automatically on UIApplicationDidBecomeActive if camera was active when application went to background.
/// \param animated Animates camera blur effect
///
- (void)resumeCameraWithAnimated:(BOOL)animated;
/// Pauses camera.
/// warning:
/// This function will be executed automatically on UIApplicationWillResignActive if camera was active when application went to background.
/// \param animated Animates camera blur effect
///
- (void)pauseCameraWithAnimated:(BOOL)animated;
/// Enables flash if available.
/// note:
/// Returns false if flash unavailable
- (BOOL)enableFlash;
/// Disables flash.
- (void)disableFlash;
/// Current flash status.
@property (nonatomic, readonly) BOOL isFlashEnabled;
/// Current network reachability status.
@property (nonatomic, readonly) BOOL isNetworkReachable;
/// Shows ARScene without tracking.
/// note:
/// You can get this <code>id</code> in
/// \code
/// recognizedMarker(withId: Int, assetIds: [Int])
///
/// \endcode\param id marker id
///
- (void)showARSceneWithoutTrackingWithMarkerId:(NSInteger)id;
@end

@class BearViewControllerObjc;
@class UIVisualEffectView;

/// For internal usage only, do not create instance of this class manually.
SWIFT_CLASS("_TtC7BearSDK18BearInternalHelper")
@interface BearInternalHelper : NSObject
/// Undocumented
/// warning:
/// For internal usage only.
@property (nonatomic, weak) id <BearDelegate> _Nullable _delegate;
/// Undocumented
/// warning:
/// For internal usage only.
@property (nonatomic) BOOL _disableCameraAutoHandling;
/// Undocumented
/// warning:
/// For internal usage only.
@property (nonatomic, readonly, strong) id <BearHandlerProtocol> _Nonnull _handler;
/// Undocumented
/// warning:
/// For internal usage only.
- (void)_loadWithViewController:(BearViewControllerObjc * _Nonnull)viewController withVisualEffectView:(UIVisualEffectView * _Nonnull)blurView;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// BearSDK. Handles configuration and initialization of BearSDK.
/// copyright:
/// 2018 BEAR SAS
/// requires:
/// iOS 9.0 and later
/// version:
/// 2.0
/// <ul>
///   <li>
///     See Also:
///     <a href="https://developer.bear2b.com/docs/sdk-ios">API Reference</a>
///   </li>
/// </ul>
SWIFT_CLASS("_TtC7BearSDK7BearSDK")
@interface BearSDK : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/// Shared instance of BearSDK.
/// note:
/// Do not forget to setup secret key before starting BearSDK usage.
/// \code
/// try? BearSDK.set(secretKey: "")
///
/// \endcode
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) BearSDK * _Nonnull shared;)
+ (BearSDK * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Setup secret key to configure BearSDK.
/// \param secretKey BearSDK secret key
///
///
/// throws:
/// An error of type <code>BearError</code>
+ (BOOL)setWithSecretKey:(NSString * _Nonnull)secretKey error:(NSError * _Nullable * _Nullable)error;
/// Registers device to receive push notifications.
/// \code
/// application(application: UIApplication,
/// didRegisterForRemoteNotificationsWithDeviceToken deviceToken: Data) {
/// bear.registerDevice(deviceToken)
/// }
///
/// \endcode\param token Device token.
///
- (void)registerDeviceWithDeviceToken:(NSData * _Nonnull)token;
/// Get unique Bear device identifier.
///
/// returns:
/// device id or 0 if device not registered yet.
@property (nonatomic, readonly) NSInteger deviceId;
/// Preloads BearSDK resources to reduce loading time of <code>BearViewController</code>.
/// \param bearDidLoad The closure will be executed when all resources will be loaded.
///
- (void)preload:(void (^ _Nullable)(void))bearDidLoad;
/// The status of BearSDK resources.
@property (nonatomic, readonly) BOOL isLoaded;
/// Destroys all loaded BearSDK resources.
- (void)destroy;
@end

/// The <code>BearScannerState</code> is used to describe possible BearSDK scanner states.
typedef SWIFT_ENUM(NSInteger, BearScannerState) {
/// The normal and default state of the BearScanner, ready to scan.
  BearScannerStateIdle = 0,
/// The scanning state of the BearScanner, which means scanning is active, scanning line visible on the screen.
  BearScannerStateScanning = 1,
/// The processing state of the BearScanner, which means scanning was successfull and BearSDK is loading and processing data.
  BearScannerStateProcessing = 2,
/// The rendering state of the BearScanner, which means marker and its assets is loaded and shown.
  BearScannerStateRendering = 3,
};

@class UIColor;
@class NSCoder;
@class NSBundle;

/// The <code>BearViewController</code> provides a infrastructure for your application to manage BearScanner.
/// You are able to create instances of <code>BearViewController</code> subclasses and use those objects to provide
/// the specific behaviors and visual appearances that you need.
/// warning:
/// You are able to create multiple instances of <code>BearViewController</code> or it subclasses,
/// but you are not able to show them simultaneously. And keep in mind that every instance of <code>BearViewController</code>
/// or it subclass uses the same view for render. Be careful with view states.
SWIFT_CLASS("_TtC7BearSDK18BearViewController")
@interface BearViewController : UIViewController
/// The time after that scanner will be paused in seconds.
/// note:
/// The default value of this property is 10 seconds.
@property (nonatomic) NSInteger timeToPause;
/// Customize scanning line color.
/// note:
/// The default value of this property is purple color.
@property (nonatomic, strong) UIColor * _Nonnull scannerColor;
/// Disables automatic camera handling.
/// If you want to manage pausing and resuming camera by yourself you should switch this property to true.
/// note:
/// The default value of this property is false. Camera will be enabled automatically on <code>viewDidAppear</code>
/// and disabled on <code>viewDidDisappear</code>. If camera was enabled when user goes to background, BearSDK will pause it
/// and resume when user will return back regardless of the value of this property.
@property (nonatomic) BOOL disableCameraAutoHandling;
/// Delegate used to receive scanning callbacks
@property (nonatomic, weak) IBOutlet id <BearDelegate> _Nullable delegate;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Use this initializer to instantiate view controller programmatically
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)loadView;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic, readonly) UIInterfaceOrientation preferredInterfaceOrientationForPresentation;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

















SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
