///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMNamespaceType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `NamespaceType` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMNamespaceType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMNamespaceTypeTag` enum type represents the possible tag states
/// with which the `DBTEAMNamespaceType` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMNamespaceTypeTag) {
  /// App sandbox folder.
  DBTEAMNamespaceTypeAppFolder,

  /// Shared folder.
  DBTEAMNamespaceTypeSharedFolder,

  /// Top-level team-owned folder.
  DBTEAMNamespaceTypeTeamFolder,

  /// Team member's home folder.
  DBTEAMNamespaceTypeTeamMemberFolder,

  /// (no description).
  DBTEAMNamespaceTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMNamespaceTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "app_folder".
///
/// Description of the "app_folder" tag state: App sandbox folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithAppFolder;

///
/// Initializes union class with tag state of "shared_folder".
///
/// Description of the "shared_folder" tag state: Shared folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedFolder;

///
/// Initializes union class with tag state of "team_folder".
///
/// Description of the "team_folder" tag state: Top-level team-owned folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamFolder;

///
/// Initializes union class with tag state of "team_member_folder".
///
/// Description of the "team_member_folder" tag state: Team member's home
/// folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamMemberFolder;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "app_folder".
///
/// @return Whether the union's current tag state has value "app_folder".
///
- (BOOL)isAppFolder;

///
/// Retrieves whether the union's current tag state has value "shared_folder".
///
/// @return Whether the union's current tag state has value "shared_folder".
///
- (BOOL)isSharedFolder;

///
/// Retrieves whether the union's current tag state has value "team_folder".
///
/// @return Whether the union's current tag state has value "team_folder".
///
- (BOOL)isTeamFolder;

///
/// Retrieves whether the union's current tag state has value
/// "team_member_folder".
///
/// @return Whether the union's current tag state has value
/// "team_member_folder".
///
- (BOOL)isTeamMemberFolder;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMNamespaceType` union.
///
@interface DBTEAMNamespaceTypeSerializer : NSObject

///
/// Serializes `DBTEAMNamespaceType` instances.
///
/// @param instance An instance of the `DBTEAMNamespaceType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMNamespaceType` API object.
///
+ (NSDictionary *)serialize:(DBTEAMNamespaceType *)instance;

///
/// Deserializes `DBTEAMNamespaceType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMNamespaceType` API object.
///
/// @return An instantiation of the `DBTEAMNamespaceType` object.
///
+ (DBTEAMNamespaceType *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
