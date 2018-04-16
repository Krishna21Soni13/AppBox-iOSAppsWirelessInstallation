///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGNoteAclTeamLinkDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `NoteAclTeamLinkDetails` struct.
///
/// Changed a Paper document to be link accessible for the team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGNoteAclTeamLinkDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `NoteAclTeamLinkDetails` struct.
///
@interface DBTEAMLOGNoteAclTeamLinkDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGNoteAclTeamLinkDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGNoteAclTeamLinkDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGNoteAclTeamLinkDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGNoteAclTeamLinkDetails *)instance;

///
/// Deserializes `DBTEAMLOGNoteAclTeamLinkDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGNoteAclTeamLinkDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGNoteAclTeamLinkDetails` object.
///
+ (DBTEAMLOGNoteAclTeamLinkDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END