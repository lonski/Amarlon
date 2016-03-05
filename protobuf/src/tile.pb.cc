// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tile.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tile.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace amarlon {

namespace {

const ::google::protobuf::Descriptor* TileData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TileData_reflection_ = NULL;
const ::google::protobuf::Descriptor* TilesData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TilesData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_tile_2eproto() {
  protobuf_AddDesc_tile_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "tile.proto");
  GOOGLE_CHECK(file != NULL);
  TileData_descriptor_ = file->message_type(0);
  static const int TileData_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TileData, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TileData, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TileData, character_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TileData, color_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TileData, transparent_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TileData, walkable_),
  };
  TileData_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TileData_descriptor_,
      TileData::default_instance_,
      TileData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TileData, _has_bits_[0]),
      -1,
      -1,
      sizeof(TileData),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TileData, _internal_metadata_),
      -1);
  TilesData_descriptor_ = file->message_type(1);
  static const int TilesData_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TilesData, tile_),
  };
  TilesData_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TilesData_descriptor_,
      TilesData::default_instance_,
      TilesData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TilesData, _has_bits_[0]),
      -1,
      -1,
      sizeof(TilesData),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TilesData, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_tile_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TileData_descriptor_, &TileData::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TilesData_descriptor_, &TilesData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_tile_2eproto() {
  delete TileData::default_instance_;
  delete TileData_reflection_;
  delete TilesData::default_instance_;
  delete TilesData_reflection_;
}

void protobuf_AddDesc_tile_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ntile.proto\022\007amarlon\"m\n\010TileData\022\n\n\002id\030"
    "\001 \002(\005\022\014\n\004name\030\002 \002(\t\022\021\n\tcharacter\030\003 \002(\t\022\r"
    "\n\005color\030\004 \002(\t\022\023\n\013transparent\030\005 \002(\010\022\020\n\010wa"
    "lkable\030\006 \002(\010\",\n\tTilesData\022\037\n\004tile\030\001 \003(\0132"
    "\021.amarlon.TileData", 178);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tile.proto", &protobuf_RegisterTypes);
  TileData::default_instance_ = new TileData();
  TilesData::default_instance_ = new TilesData();
  TileData::default_instance_->InitAsDefaultInstance();
  TilesData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tile_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tile_2eproto {
  StaticDescriptorInitializer_tile_2eproto() {
    protobuf_AddDesc_tile_2eproto();
  }
} static_descriptor_initializer_tile_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TileData::kIdFieldNumber;
const int TileData::kNameFieldNumber;
const int TileData::kCharacterFieldNumber;
const int TileData::kColorFieldNumber;
const int TileData::kTransparentFieldNumber;
const int TileData::kWalkableFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TileData::TileData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:amarlon.TileData)
}

void TileData::InitAsDefaultInstance() {
}

TileData::TileData(const TileData& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:amarlon.TileData)
}

void TileData::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  character_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  color_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  transparent_ = false;
  walkable_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TileData::~TileData() {
  // @@protoc_insertion_point(destructor:amarlon.TileData)
  SharedDtor();
}

void TileData::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  character_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  color_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void TileData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TileData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TileData_descriptor_;
}

const TileData& TileData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_tile_2eproto();
  return *default_instance_;
}

TileData* TileData::default_instance_ = NULL;

TileData* TileData::New(::google::protobuf::Arena* arena) const {
  TileData* n = new TileData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TileData::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<TileData*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 63u) {
    ZR_(id_, walkable_);
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_character()) {
      character_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_color()) {
      color_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool TileData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:amarlon.TileData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // required string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "amarlon.TileData.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_character;
        break;
      }

      // required string character = 3;
      case 3: {
        if (tag == 26) {
         parse_character:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_character()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->character().data(), this->character().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "amarlon.TileData.character");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_color;
        break;
      }

      // required string color = 4;
      case 4: {
        if (tag == 34) {
         parse_color:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_color()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->color().data(), this->color().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "amarlon.TileData.color");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_transparent;
        break;
      }

      // required bool transparent = 5;
      case 5: {
        if (tag == 40) {
         parse_transparent:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &transparent_)));
          set_has_transparent();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_walkable;
        break;
      }

      // required bool walkable = 6;
      case 6: {
        if (tag == 48) {
         parse_walkable:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &walkable_)));
          set_has_walkable();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:amarlon.TileData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:amarlon.TileData)
  return false;
#undef DO_
}

void TileData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:amarlon.TileData)
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "amarlon.TileData.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // required string character = 3;
  if (has_character()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->character().data(), this->character().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "amarlon.TileData.character");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->character(), output);
  }

  // required string color = 4;
  if (has_color()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->color().data(), this->color().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "amarlon.TileData.color");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->color(), output);
  }

  // required bool transparent = 5;
  if (has_transparent()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->transparent(), output);
  }

  // required bool walkable = 6;
  if (has_walkable()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->walkable(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:amarlon.TileData)
}

::google::protobuf::uint8* TileData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:amarlon.TileData)
  // required int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "amarlon.TileData.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // required string character = 3;
  if (has_character()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->character().data(), this->character().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "amarlon.TileData.character");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->character(), target);
  }

  // required string color = 4;
  if (has_color()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->color().data(), this->color().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "amarlon.TileData.color");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->color(), target);
  }

  // required bool transparent = 5;
  if (has_transparent()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->transparent(), target);
  }

  // required bool walkable = 6;
  if (has_walkable()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->walkable(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:amarlon.TileData)
  return target;
}

int TileData::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_id()) {
    // required int32 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  if (has_name()) {
    // required string name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  if (has_character()) {
    // required string character = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->character());
  }

  if (has_color()) {
    // required string color = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->color());
  }

  if (has_transparent()) {
    // required bool transparent = 5;
    total_size += 1 + 1;
  }

  if (has_walkable()) {
    // required bool walkable = 6;
    total_size += 1 + 1;
  }

  return total_size;
}
int TileData::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000003f) ^ 0x0000003f) == 0) {  // All required fields are present.
    // required int32 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());

    // required string name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());

    // required string character = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->character());

    // required string color = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->color());

    // required bool transparent = 5;
    total_size += 1 + 1;

    // required bool walkable = 6;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TileData::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const TileData* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TileData>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TileData::MergeFrom(const TileData& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_character()) {
      set_has_character();
      character_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.character_);
    }
    if (from.has_color()) {
      set_has_color();
      color_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.color_);
    }
    if (from.has_transparent()) {
      set_transparent(from.transparent());
    }
    if (from.has_walkable()) {
      set_walkable(from.walkable());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void TileData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TileData::CopyFrom(const TileData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TileData::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  return true;
}

void TileData::Swap(TileData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TileData::InternalSwap(TileData* other) {
  std::swap(id_, other->id_);
  name_.Swap(&other->name_);
  character_.Swap(&other->character_);
  color_.Swap(&other->color_);
  std::swap(transparent_, other->transparent_);
  std::swap(walkable_, other->walkable_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TileData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TileData_descriptor_;
  metadata.reflection = TileData_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TileData

// required int32 id = 1;
bool TileData::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void TileData::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void TileData::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void TileData::clear_id() {
  id_ = 0;
  clear_has_id();
}
 ::google::protobuf::int32 TileData::id() const {
  // @@protoc_insertion_point(field_get:amarlon.TileData.id)
  return id_;
}
 void TileData::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:amarlon.TileData.id)
}

// required string name = 2;
bool TileData::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void TileData::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
void TileData::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
void TileData::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& TileData::name() const {
  // @@protoc_insertion_point(field_get:amarlon.TileData.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void TileData::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:amarlon.TileData.name)
}
 void TileData::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:amarlon.TileData.name)
}
 void TileData::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:amarlon.TileData.name)
}
 ::std::string* TileData::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:amarlon.TileData.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* TileData::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void TileData::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:amarlon.TileData.name)
}

// required string character = 3;
bool TileData::has_character() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void TileData::set_has_character() {
  _has_bits_[0] |= 0x00000004u;
}
void TileData::clear_has_character() {
  _has_bits_[0] &= ~0x00000004u;
}
void TileData::clear_character() {
  character_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_character();
}
 const ::std::string& TileData::character() const {
  // @@protoc_insertion_point(field_get:amarlon.TileData.character)
  return character_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void TileData::set_character(const ::std::string& value) {
  set_has_character();
  character_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:amarlon.TileData.character)
}
 void TileData::set_character(const char* value) {
  set_has_character();
  character_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:amarlon.TileData.character)
}
 void TileData::set_character(const char* value, size_t size) {
  set_has_character();
  character_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:amarlon.TileData.character)
}
 ::std::string* TileData::mutable_character() {
  set_has_character();
  // @@protoc_insertion_point(field_mutable:amarlon.TileData.character)
  return character_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* TileData::release_character() {
  clear_has_character();
  return character_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void TileData::set_allocated_character(::std::string* character) {
  if (character != NULL) {
    set_has_character();
  } else {
    clear_has_character();
  }
  character_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), character);
  // @@protoc_insertion_point(field_set_allocated:amarlon.TileData.character)
}

// required string color = 4;
bool TileData::has_color() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void TileData::set_has_color() {
  _has_bits_[0] |= 0x00000008u;
}
void TileData::clear_has_color() {
  _has_bits_[0] &= ~0x00000008u;
}
void TileData::clear_color() {
  color_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_color();
}
 const ::std::string& TileData::color() const {
  // @@protoc_insertion_point(field_get:amarlon.TileData.color)
  return color_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void TileData::set_color(const ::std::string& value) {
  set_has_color();
  color_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:amarlon.TileData.color)
}
 void TileData::set_color(const char* value) {
  set_has_color();
  color_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:amarlon.TileData.color)
}
 void TileData::set_color(const char* value, size_t size) {
  set_has_color();
  color_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:amarlon.TileData.color)
}
 ::std::string* TileData::mutable_color() {
  set_has_color();
  // @@protoc_insertion_point(field_mutable:amarlon.TileData.color)
  return color_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* TileData::release_color() {
  clear_has_color();
  return color_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void TileData::set_allocated_color(::std::string* color) {
  if (color != NULL) {
    set_has_color();
  } else {
    clear_has_color();
  }
  color_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), color);
  // @@protoc_insertion_point(field_set_allocated:amarlon.TileData.color)
}

// required bool transparent = 5;
bool TileData::has_transparent() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void TileData::set_has_transparent() {
  _has_bits_[0] |= 0x00000010u;
}
void TileData::clear_has_transparent() {
  _has_bits_[0] &= ~0x00000010u;
}
void TileData::clear_transparent() {
  transparent_ = false;
  clear_has_transparent();
}
 bool TileData::transparent() const {
  // @@protoc_insertion_point(field_get:amarlon.TileData.transparent)
  return transparent_;
}
 void TileData::set_transparent(bool value) {
  set_has_transparent();
  transparent_ = value;
  // @@protoc_insertion_point(field_set:amarlon.TileData.transparent)
}

// required bool walkable = 6;
bool TileData::has_walkable() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void TileData::set_has_walkable() {
  _has_bits_[0] |= 0x00000020u;
}
void TileData::clear_has_walkable() {
  _has_bits_[0] &= ~0x00000020u;
}
void TileData::clear_walkable() {
  walkable_ = false;
  clear_has_walkable();
}
 bool TileData::walkable() const {
  // @@protoc_insertion_point(field_get:amarlon.TileData.walkable)
  return walkable_;
}
 void TileData::set_walkable(bool value) {
  set_has_walkable();
  walkable_ = value;
  // @@protoc_insertion_point(field_set:amarlon.TileData.walkable)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TilesData::kTileFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TilesData::TilesData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:amarlon.TilesData)
}

void TilesData::InitAsDefaultInstance() {
}

TilesData::TilesData(const TilesData& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:amarlon.TilesData)
}

void TilesData::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TilesData::~TilesData() {
  // @@protoc_insertion_point(destructor:amarlon.TilesData)
  SharedDtor();
}

void TilesData::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TilesData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TilesData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TilesData_descriptor_;
}

const TilesData& TilesData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_tile_2eproto();
  return *default_instance_;
}

TilesData* TilesData::default_instance_ = NULL;

TilesData* TilesData::New(::google::protobuf::Arena* arena) const {
  TilesData* n = new TilesData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TilesData::Clear() {
  tile_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool TilesData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:amarlon.TilesData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .amarlon.TileData tile = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_tile:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_tile()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_tile;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:amarlon.TilesData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:amarlon.TilesData)
  return false;
#undef DO_
}

void TilesData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:amarlon.TilesData)
  // repeated .amarlon.TileData tile = 1;
  for (unsigned int i = 0, n = this->tile_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->tile(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:amarlon.TilesData)
}

::google::protobuf::uint8* TilesData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:amarlon.TilesData)
  // repeated .amarlon.TileData tile = 1;
  for (unsigned int i = 0, n = this->tile_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->tile(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:amarlon.TilesData)
  return target;
}

int TilesData::ByteSize() const {
  int total_size = 0;

  // repeated .amarlon.TileData tile = 1;
  total_size += 1 * this->tile_size();
  for (int i = 0; i < this->tile_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->tile(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TilesData::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const TilesData* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TilesData>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TilesData::MergeFrom(const TilesData& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  tile_.MergeFrom(from.tile_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void TilesData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TilesData::CopyFrom(const TilesData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TilesData::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->tile())) return false;
  return true;
}

void TilesData::Swap(TilesData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TilesData::InternalSwap(TilesData* other) {
  tile_.UnsafeArenaSwap(&other->tile_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TilesData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TilesData_descriptor_;
  metadata.reflection = TilesData_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TilesData

// repeated .amarlon.TileData tile = 1;
int TilesData::tile_size() const {
  return tile_.size();
}
void TilesData::clear_tile() {
  tile_.Clear();
}
const ::amarlon::TileData& TilesData::tile(int index) const {
  // @@protoc_insertion_point(field_get:amarlon.TilesData.tile)
  return tile_.Get(index);
}
::amarlon::TileData* TilesData::mutable_tile(int index) {
  // @@protoc_insertion_point(field_mutable:amarlon.TilesData.tile)
  return tile_.Mutable(index);
}
::amarlon::TileData* TilesData::add_tile() {
  // @@protoc_insertion_point(field_add:amarlon.TilesData.tile)
  return tile_.Add();
}
::google::protobuf::RepeatedPtrField< ::amarlon::TileData >*
TilesData::mutable_tile() {
  // @@protoc_insertion_point(field_mutable_list:amarlon.TilesData.tile)
  return &tile_;
}
const ::google::protobuf::RepeatedPtrField< ::amarlon::TileData >&
TilesData::tile() const {
  // @@protoc_insertion_point(field_list:amarlon.TilesData.tile)
  return tile_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace amarlon

// @@protoc_insertion_point(global_scope)
