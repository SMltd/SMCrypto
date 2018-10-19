// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/smd.proto

#ifndef PROTOBUF_proto_2fsmd_2eproto__INCLUDED
#define PROTOBUF_proto_2fsmd_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/map.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace smd {
namespace proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_proto_2fsmd_2eproto();
void protobuf_AssignDesc_proto_2fsmd_2eproto();
void protobuf_ShutdownFile_proto_2fsmd_2eproto();

class GameState;
class PlayerState;
class PlayerUndo;
class UndoData;

enum Direction {
  NONE = 0,
  RIGHT = 1,
  LEFT = 2,
  UP = 3,
  DOWN = 4,
  RIGHT_UP = 5,
  RIGHT_DOWN = 6,
  LEFT_UP = 7,
  LEFT_DOWN = 8
};
bool Direction_IsValid(int value);
const Direction Direction_MIN = NONE;
const Direction Direction_MAX = LEFT_DOWN;
const int Direction_ARRAYSIZE = Direction_MAX + 1;

const ::google::protobuf::EnumDescriptor* Direction_descriptor();
inline const ::std::string& Direction_Name(Direction value) {
  return ::google::protobuf::internal::NameOfEnum(
    Direction_descriptor(), value);
}
inline bool Direction_Parse(
    const ::std::string& name, Direction* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Direction>(
    Direction_descriptor(), name, value);
}
// ===================================================================

class PlayerState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:smd.proto.PlayerState) */ {
 public:
  PlayerState();
  virtual ~PlayerState();

  PlayerState(const PlayerState& from);

  inline PlayerState& operator=(const PlayerState& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerState& default_instance();

  void Swap(PlayerState* other);

  // implements Message ----------------------------------------------

  inline PlayerState* New() const { return New(NULL); }

  PlayerState* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PlayerState& from);
  void MergeFrom(const PlayerState& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PlayerState* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional sint32 x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  ::google::protobuf::int32 x() const;
  void set_x(::google::protobuf::int32 value);

  // optional sint32 y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  ::google::protobuf::int32 y() const;
  void set_y(::google::protobuf::int32 value);

  // optional .smd.proto.Direction dir = 3;
  bool has_dir() const;
  void clear_dir();
  static const int kDirFieldNumber = 3;
  ::smd::proto::Direction dir() const;
  void set_dir(::smd::proto::Direction value);

  // optional uint32 steps_left = 4;
  bool has_steps_left() const;
  void clear_steps_left();
  static const int kStepsLeftFieldNumber = 4;
  ::google::protobuf::uint32 steps_left() const;
  void set_steps_left(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:smd.proto.PlayerState)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_dir();
  inline void clear_has_dir();
  inline void set_has_steps_left();
  inline void clear_has_steps_left();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  int dir_;
  ::google::protobuf::uint32 steps_left_;
  friend void  protobuf_AddDesc_proto_2fsmd_2eproto();
  friend void protobuf_AssignDesc_proto_2fsmd_2eproto();
  friend void protobuf_ShutdownFile_proto_2fsmd_2eproto();

  void InitAsDefaultInstance();
  static PlayerState* default_instance_;
};
// -------------------------------------------------------------------

class GameState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:smd.proto.GameState) */ {
 public:
  GameState();
  virtual ~GameState();

  GameState(const GameState& from);

  inline GameState& operator=(const GameState& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GameState& default_instance();

  void Swap(GameState* other);

  // implements Message ----------------------------------------------

  inline GameState* New() const { return New(NULL); }

  GameState* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GameState& from);
  void MergeFrom(const GameState& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GameState* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, .smd.proto.PlayerState> players = 1;
  int players_size() const;
  void clear_players();
  static const int kPlayersFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::smd::proto::PlayerState >&
      players() const;
  ::google::protobuf::Map< ::std::string, ::smd::proto::PlayerState >*
      mutable_players();

  // @@protoc_insertion_point(class_scope:smd.proto.GameState)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::smd::proto::PlayerState,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 >
      GameState_PlayersEntry;
  ::google::protobuf::internal::MapField<
      ::std::string, ::smd::proto::PlayerState,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > players_;
  friend void  protobuf_AddDesc_proto_2fsmd_2eproto();
  friend void protobuf_AssignDesc_proto_2fsmd_2eproto();
  friend void protobuf_ShutdownFile_proto_2fsmd_2eproto();

  void InitAsDefaultInstance();
  static GameState* default_instance_;
};
// -------------------------------------------------------------------

class PlayerUndo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:smd.proto.PlayerUndo) */ {
 public:
  PlayerUndo();
  virtual ~PlayerUndo();

  PlayerUndo(const PlayerUndo& from);

  inline PlayerUndo& operator=(const PlayerUndo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerUndo& default_instance();

  void Swap(PlayerUndo* other);

  // implements Message ----------------------------------------------

  inline PlayerUndo* New() const { return New(NULL); }

  PlayerUndo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PlayerUndo& from);
  void MergeFrom(const PlayerUndo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PlayerUndo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bool is_new = 1;
  bool has_is_new() const;
  void clear_is_new();
  static const int kIsNewFieldNumber = 1;
  bool is_new() const;
  void set_is_new(bool value);

  // optional .smd.proto.Direction previous_dir = 2;
  bool has_previous_dir() const;
  void clear_previous_dir();
  static const int kPreviousDirFieldNumber = 2;
  ::smd::proto::Direction previous_dir() const;
  void set_previous_dir(::smd::proto::Direction value);

  // optional uint32 previous_steps_left = 3;
  bool has_previous_steps_left() const;
  void clear_previous_steps_left();
  static const int kPreviousStepsLeftFieldNumber = 3;
  ::google::protobuf::uint32 previous_steps_left() const;
  void set_previous_steps_left(::google::protobuf::uint32 value);

  // optional .smd.proto.Direction finished_dir = 4;
  bool has_finished_dir() const;
  void clear_finished_dir();
  static const int kFinishedDirFieldNumber = 4;
  ::smd::proto::Direction finished_dir() const;
  void set_finished_dir(::smd::proto::Direction value);

  // @@protoc_insertion_point(class_scope:smd.proto.PlayerUndo)
 private:
  inline void set_has_is_new();
  inline void clear_has_is_new();
  inline void set_has_previous_dir();
  inline void clear_has_previous_dir();
  inline void set_has_previous_steps_left();
  inline void clear_has_previous_steps_left();
  inline void set_has_finished_dir();
  inline void clear_has_finished_dir();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  bool is_new_;
  int previous_dir_;
  ::google::protobuf::uint32 previous_steps_left_;
  int finished_dir_;
  friend void  protobuf_AddDesc_proto_2fsmd_2eproto();
  friend void protobuf_AssignDesc_proto_2fsmd_2eproto();
  friend void protobuf_ShutdownFile_proto_2fsmd_2eproto();

  void InitAsDefaultInstance();
  static PlayerUndo* default_instance_;
};
// -------------------------------------------------------------------

class UndoData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:smd.proto.UndoData) */ {
 public:
  UndoData();
  virtual ~UndoData();

  UndoData(const UndoData& from);

  inline UndoData& operator=(const UndoData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UndoData& default_instance();

  void Swap(UndoData* other);

  // implements Message ----------------------------------------------

  inline UndoData* New() const { return New(NULL); }

  UndoData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UndoData& from);
  void MergeFrom(const UndoData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(UndoData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, .smd.proto.PlayerUndo> players = 1;
  int players_size() const;
  void clear_players();
  static const int kPlayersFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::smd::proto::PlayerUndo >&
      players() const;
  ::google::protobuf::Map< ::std::string, ::smd::proto::PlayerUndo >*
      mutable_players();

  // @@protoc_insertion_point(class_scope:smd.proto.UndoData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::smd::proto::PlayerUndo,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 >
      UndoData_PlayersEntry;
  ::google::protobuf::internal::MapField<
      ::std::string, ::smd::proto::PlayerUndo,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > players_;
  friend void  protobuf_AddDesc_proto_2fsmd_2eproto();
  friend void protobuf_AssignDesc_proto_2fsmd_2eproto();
  friend void protobuf_ShutdownFile_proto_2fsmd_2eproto();

  void InitAsDefaultInstance();
  static UndoData* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PlayerState

// optional sint32 x = 1;
inline bool PlayerState::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlayerState::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlayerState::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlayerState::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 PlayerState::x() const {
  // @@protoc_insertion_point(field_get:smd.proto.PlayerState.x)
  return x_;
}
inline void PlayerState::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:smd.proto.PlayerState.x)
}

// optional sint32 y = 2;
inline bool PlayerState::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayerState::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayerState::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayerState::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 PlayerState::y() const {
  // @@protoc_insertion_point(field_get:smd.proto.PlayerState.y)
  return y_;
}
inline void PlayerState::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:smd.proto.PlayerState.y)
}

// optional .smd.proto.Direction dir = 3;
inline bool PlayerState::has_dir() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PlayerState::set_has_dir() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PlayerState::clear_has_dir() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PlayerState::clear_dir() {
  dir_ = 0;
  clear_has_dir();
}
inline ::smd::proto::Direction PlayerState::dir() const {
  // @@protoc_insertion_point(field_get:smd.proto.PlayerState.dir)
  return static_cast< ::smd::proto::Direction >(dir_);
}
inline void PlayerState::set_dir(::smd::proto::Direction value) {
  assert(::smd::proto::Direction_IsValid(value));
  set_has_dir();
  dir_ = value;
  // @@protoc_insertion_point(field_set:smd.proto.PlayerState.dir)
}

// optional uint32 steps_left = 4;
inline bool PlayerState::has_steps_left() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PlayerState::set_has_steps_left() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PlayerState::clear_has_steps_left() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PlayerState::clear_steps_left() {
  steps_left_ = 0u;
  clear_has_steps_left();
}
inline ::google::protobuf::uint32 PlayerState::steps_left() const {
  // @@protoc_insertion_point(field_get:smd.proto.PlayerState.steps_left)
  return steps_left_;
}
inline void PlayerState::set_steps_left(::google::protobuf::uint32 value) {
  set_has_steps_left();
  steps_left_ = value;
  // @@protoc_insertion_point(field_set:smd.proto.PlayerState.steps_left)
}

// -------------------------------------------------------------------

// GameState

// map<string, .smd.proto.PlayerState> players = 1;
inline int GameState::players_size() const {
  return players_.size();
}
inline void GameState::clear_players() {
  players_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::smd::proto::PlayerState >&
GameState::players() const {
  // @@protoc_insertion_point(field_map:smd.proto.GameState.players)
  return players_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::smd::proto::PlayerState >*
GameState::mutable_players() {
  // @@protoc_insertion_point(field_mutable_map:smd.proto.GameState.players)
  return players_.MutableMap();
}

// -------------------------------------------------------------------

// PlayerUndo

// optional bool is_new = 1;
inline bool PlayerUndo::has_is_new() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlayerUndo::set_has_is_new() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlayerUndo::clear_has_is_new() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlayerUndo::clear_is_new() {
  is_new_ = false;
  clear_has_is_new();
}
inline bool PlayerUndo::is_new() const {
  // @@protoc_insertion_point(field_get:smd.proto.PlayerUndo.is_new)
  return is_new_;
}
inline void PlayerUndo::set_is_new(bool value) {
  set_has_is_new();
  is_new_ = value;
  // @@protoc_insertion_point(field_set:smd.proto.PlayerUndo.is_new)
}

// optional .smd.proto.Direction previous_dir = 2;
inline bool PlayerUndo::has_previous_dir() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayerUndo::set_has_previous_dir() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayerUndo::clear_has_previous_dir() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayerUndo::clear_previous_dir() {
  previous_dir_ = 0;
  clear_has_previous_dir();
}
inline ::smd::proto::Direction PlayerUndo::previous_dir() const {
  // @@protoc_insertion_point(field_get:smd.proto.PlayerUndo.previous_dir)
  return static_cast< ::smd::proto::Direction >(previous_dir_);
}
inline void PlayerUndo::set_previous_dir(::smd::proto::Direction value) {
  assert(::smd::proto::Direction_IsValid(value));
  set_has_previous_dir();
  previous_dir_ = value;
  // @@protoc_insertion_point(field_set:smd.proto.PlayerUndo.previous_dir)
}

// optional uint32 previous_steps_left = 3;
inline bool PlayerUndo::has_previous_steps_left() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PlayerUndo::set_has_previous_steps_left() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PlayerUndo::clear_has_previous_steps_left() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PlayerUndo::clear_previous_steps_left() {
  previous_steps_left_ = 0u;
  clear_has_previous_steps_left();
}
inline ::google::protobuf::uint32 PlayerUndo::previous_steps_left() const {
  // @@protoc_insertion_point(field_get:smd.proto.PlayerUndo.previous_steps_left)
  return previous_steps_left_;
}
inline void PlayerUndo::set_previous_steps_left(::google::protobuf::uint32 value) {
  set_has_previous_steps_left();
  previous_steps_left_ = value;
  // @@protoc_insertion_point(field_set:smd.proto.PlayerUndo.previous_steps_left)
}

// optional .smd.proto.Direction finished_dir = 4;
inline bool PlayerUndo::has_finished_dir() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PlayerUndo::set_has_finished_dir() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PlayerUndo::clear_has_finished_dir() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PlayerUndo::clear_finished_dir() {
  finished_dir_ = 0;
  clear_has_finished_dir();
}
inline ::smd::proto::Direction PlayerUndo::finished_dir() const {
  // @@protoc_insertion_point(field_get:smd.proto.PlayerUndo.finished_dir)
  return static_cast< ::smd::proto::Direction >(finished_dir_);
}
inline void PlayerUndo::set_finished_dir(::smd::proto::Direction value) {
  assert(::smd::proto::Direction_IsValid(value));
  set_has_finished_dir();
  finished_dir_ = value;
  // @@protoc_insertion_point(field_set:smd.proto.PlayerUndo.finished_dir)
}

// -------------------------------------------------------------------

// UndoData

// map<string, .smd.proto.PlayerUndo> players = 1;
inline int UndoData::players_size() const {
  return players_.size();
}
inline void UndoData::clear_players() {
  players_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::smd::proto::PlayerUndo >&
UndoData::players() const {
  // @@protoc_insertion_point(field_map:smd.proto.UndoData.players)
  return players_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::smd::proto::PlayerUndo >*
UndoData::mutable_players() {
  // @@protoc_insertion_point(field_mutable_map:smd.proto.UndoData.players)
  return players_.MutableMap();
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace smd

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::smd::proto::Direction> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::smd::proto::Direction>() {
  return ::smd::proto::Direction_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_2fsmd_2eproto__INCLUDED
