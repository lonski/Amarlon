// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tile.proto

#ifndef PROTOBUF_tile_2eproto__INCLUDED
#define PROTOBUF_tile_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace amarlon {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tile_2eproto();
void protobuf_AssignDesc_tile_2eproto();
void protobuf_ShutdownFile_tile_2eproto();

class TileData;
class TileState;
class TilesData;

// ===================================================================

class TileData : public ::google::protobuf::Message {
 public:
  TileData();
  virtual ~TileData();

  TileData(const TileData& from);

  inline TileData& operator=(const TileData& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TileData& default_instance();

  void Swap(TileData* other);

  // implements Message ----------------------------------------------

  inline TileData* New() const { return New(NULL); }

  TileData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TileData& from);
  void MergeFrom(const TileData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TileData* other);
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

  // optional int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional bool transparent = 3;
  void clear_transparent();
  static const int kTransparentFieldNumber = 3;
  bool transparent() const;
  void set_transparent(bool value);

  // optional string color = 4;
  void clear_color();
  static const int kColorFieldNumber = 4;
  const ::std::string& color() const;
  void set_color(const ::std::string& value);
  void set_color(const char* value);
  void set_color(const char* value, size_t size);
  ::std::string* mutable_color();
  ::std::string* release_color();
  void set_allocated_color(::std::string* color);

  // optional bool walkable = 5;
  void clear_walkable();
  static const int kWalkableFieldNumber = 5;
  bool walkable() const;
  void set_walkable(bool value);

  // optional string character = 6;
  void clear_character();
  static const int kCharacterFieldNumber = 6;
  const ::std::string& character() const;
  void set_character(const ::std::string& value);
  void set_character(const char* value);
  void set_character(const char* value, size_t size);
  ::std::string* mutable_character();
  ::std::string* release_character();
  void set_allocated_character(::std::string* character);

  // @@protoc_insertion_point(class_scope:amarlon.TileData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 id_;
  bool transparent_;
  bool walkable_;
  ::google::protobuf::internal::ArenaStringPtr color_;
  ::google::protobuf::internal::ArenaStringPtr character_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tile_2eproto();
  friend void protobuf_AssignDesc_tile_2eproto();
  friend void protobuf_ShutdownFile_tile_2eproto();

  void InitAsDefaultInstance();
  static TileData* default_instance_;
};
// -------------------------------------------------------------------

class TilesData : public ::google::protobuf::Message {
 public:
  TilesData();
  virtual ~TilesData();

  TilesData(const TilesData& from);

  inline TilesData& operator=(const TilesData& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TilesData& default_instance();

  void Swap(TilesData* other);

  // implements Message ----------------------------------------------

  inline TilesData* New() const { return New(NULL); }

  TilesData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TilesData& from);
  void MergeFrom(const TilesData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TilesData* other);
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

  // repeated .amarlon.TileData tile = 1;
  int tile_size() const;
  void clear_tile();
  static const int kTileFieldNumber = 1;
  const ::amarlon::TileData& tile(int index) const;
  ::amarlon::TileData* mutable_tile(int index);
  ::amarlon::TileData* add_tile();
  ::google::protobuf::RepeatedPtrField< ::amarlon::TileData >*
      mutable_tile();
  const ::google::protobuf::RepeatedPtrField< ::amarlon::TileData >&
      tile() const;

  // @@protoc_insertion_point(class_scope:amarlon.TilesData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::amarlon::TileData > tile_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tile_2eproto();
  friend void protobuf_AssignDesc_tile_2eproto();
  friend void protobuf_ShutdownFile_tile_2eproto();

  void InitAsDefaultInstance();
  static TilesData* default_instance_;
};
// -------------------------------------------------------------------

class TileState : public ::google::protobuf::Message {
 public:
  TileState();
  virtual ~TileState();

  TileState(const TileState& from);

  inline TileState& operator=(const TileState& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TileState& default_instance();

  void Swap(TileState* other);

  // implements Message ----------------------------------------------

  inline TileState* New() const { return New(NULL); }

  TileState* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TileState& from);
  void MergeFrom(const TileState& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TileState* other);
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

  // optional int32 type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // optional fixed32 flags = 2;
  void clear_flags();
  static const int kFlagsFieldNumber = 2;
  ::google::protobuf::uint32 flags() const;
  void set_flags(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:amarlon.TileState)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::uint32 flags_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tile_2eproto();
  friend void protobuf_AssignDesc_tile_2eproto();
  friend void protobuf_ShutdownFile_tile_2eproto();

  void InitAsDefaultInstance();
  static TileState* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TileData

// optional int32 id = 1;
inline void TileData::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 TileData::id() const {
  // @@protoc_insertion_point(field_get:amarlon.TileData.id)
  return id_;
}
inline void TileData::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:amarlon.TileData.id)
}

// optional string name = 2;
inline void TileData::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TileData::name() const {
  // @@protoc_insertion_point(field_get:amarlon.TileData.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TileData::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:amarlon.TileData.name)
}
inline void TileData::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:amarlon.TileData.name)
}
inline void TileData::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:amarlon.TileData.name)
}
inline ::std::string* TileData::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:amarlon.TileData.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TileData::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TileData::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:amarlon.TileData.name)
}

// optional bool transparent = 3;
inline void TileData::clear_transparent() {
  transparent_ = false;
}
inline bool TileData::transparent() const {
  // @@protoc_insertion_point(field_get:amarlon.TileData.transparent)
  return transparent_;
}
inline void TileData::set_transparent(bool value) {
  
  transparent_ = value;
  // @@protoc_insertion_point(field_set:amarlon.TileData.transparent)
}

// optional string color = 4;
inline void TileData::clear_color() {
  color_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TileData::color() const {
  // @@protoc_insertion_point(field_get:amarlon.TileData.color)
  return color_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TileData::set_color(const ::std::string& value) {
  
  color_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:amarlon.TileData.color)
}
inline void TileData::set_color(const char* value) {
  
  color_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:amarlon.TileData.color)
}
inline void TileData::set_color(const char* value, size_t size) {
  
  color_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:amarlon.TileData.color)
}
inline ::std::string* TileData::mutable_color() {
  
  // @@protoc_insertion_point(field_mutable:amarlon.TileData.color)
  return color_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TileData::release_color() {
  
  return color_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TileData::set_allocated_color(::std::string* color) {
  if (color != NULL) {
    
  } else {
    
  }
  color_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), color);
  // @@protoc_insertion_point(field_set_allocated:amarlon.TileData.color)
}

// optional bool walkable = 5;
inline void TileData::clear_walkable() {
  walkable_ = false;
}
inline bool TileData::walkable() const {
  // @@protoc_insertion_point(field_get:amarlon.TileData.walkable)
  return walkable_;
}
inline void TileData::set_walkable(bool value) {
  
  walkable_ = value;
  // @@protoc_insertion_point(field_set:amarlon.TileData.walkable)
}

// optional string character = 6;
inline void TileData::clear_character() {
  character_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TileData::character() const {
  // @@protoc_insertion_point(field_get:amarlon.TileData.character)
  return character_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TileData::set_character(const ::std::string& value) {
  
  character_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:amarlon.TileData.character)
}
inline void TileData::set_character(const char* value) {
  
  character_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:amarlon.TileData.character)
}
inline void TileData::set_character(const char* value, size_t size) {
  
  character_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:amarlon.TileData.character)
}
inline ::std::string* TileData::mutable_character() {
  
  // @@protoc_insertion_point(field_mutable:amarlon.TileData.character)
  return character_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TileData::release_character() {
  
  return character_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TileData::set_allocated_character(::std::string* character) {
  if (character != NULL) {
    
  } else {
    
  }
  character_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), character);
  // @@protoc_insertion_point(field_set_allocated:amarlon.TileData.character)
}

// -------------------------------------------------------------------

// TilesData

// repeated .amarlon.TileData tile = 1;
inline int TilesData::tile_size() const {
  return tile_.size();
}
inline void TilesData::clear_tile() {
  tile_.Clear();
}
inline const ::amarlon::TileData& TilesData::tile(int index) const {
  // @@protoc_insertion_point(field_get:amarlon.TilesData.tile)
  return tile_.Get(index);
}
inline ::amarlon::TileData* TilesData::mutable_tile(int index) {
  // @@protoc_insertion_point(field_mutable:amarlon.TilesData.tile)
  return tile_.Mutable(index);
}
inline ::amarlon::TileData* TilesData::add_tile() {
  // @@protoc_insertion_point(field_add:amarlon.TilesData.tile)
  return tile_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::amarlon::TileData >*
TilesData::mutable_tile() {
  // @@protoc_insertion_point(field_mutable_list:amarlon.TilesData.tile)
  return &tile_;
}
inline const ::google::protobuf::RepeatedPtrField< ::amarlon::TileData >&
TilesData::tile() const {
  // @@protoc_insertion_point(field_list:amarlon.TilesData.tile)
  return tile_;
}

// -------------------------------------------------------------------

// TileState

// optional int32 type = 1;
inline void TileState::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 TileState::type() const {
  // @@protoc_insertion_point(field_get:amarlon.TileState.type)
  return type_;
}
inline void TileState::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:amarlon.TileState.type)
}

// optional fixed32 flags = 2;
inline void TileState::clear_flags() {
  flags_ = 0u;
}
inline ::google::protobuf::uint32 TileState::flags() const {
  // @@protoc_insertion_point(field_get:amarlon.TileState.flags)
  return flags_;
}
inline void TileState::set_flags(::google::protobuf::uint32 value) {
  
  flags_ = value;
  // @@protoc_insertion_point(field_set:amarlon.TileState.flags)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace amarlon

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tile_2eproto__INCLUDED