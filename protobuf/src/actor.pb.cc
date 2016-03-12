// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: actor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "actor.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* AiData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AiData_reflection_ = NULL;
const ::google::protobuf::Descriptor* ActorData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ActorData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_actor_2eproto() {
  protobuf_AddDesc_actor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "actor.proto");
  GOOGLE_CHECK(file != NULL);
  AiData_descriptor_ = file->message_type(0);
  static const int AiData_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AiData, flags_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AiData, script_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AiData, type_),
  };
  AiData_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AiData_descriptor_,
      AiData::default_instance_,
      AiData_offsets_,
      -1,
      -1,
      -1,
      sizeof(AiData),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AiData, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AiData, _is_default_instance_));
  ActorData_descriptor_ = file->message_type(1);
  static const int ActorData_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ActorData, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ActorData, ai_),
  };
  ActorData_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ActorData_descriptor_,
      ActorData::default_instance_,
      ActorData_offsets_,
      -1,
      -1,
      -1,
      sizeof(ActorData),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ActorData, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ActorData, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_actor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AiData_descriptor_, &AiData::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ActorData_descriptor_, &ActorData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_actor_2eproto() {
  delete AiData::default_instance_;
  delete AiData_reflection_;
  delete ActorData::default_instance_;
  delete ActorData_reflection_;
}

void protobuf_AddDesc_actor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013actor.proto\"5\n\006AiData\022\r\n\005flags\030\001 \001(\007\022\016"
    "\n\006script\030\002 \001(\005\022\014\n\004type\030\003 \001(\005\",\n\tActorDat"
    "a\022\n\n\002id\030\001 \001(\005\022\023\n\002ai\030\002 \001(\0132\007.AiDatab\006prot"
    "o3", 122);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "actor.proto", &protobuf_RegisterTypes);
  AiData::default_instance_ = new AiData();
  ActorData::default_instance_ = new ActorData();
  AiData::default_instance_->InitAsDefaultInstance();
  ActorData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_actor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_actor_2eproto {
  StaticDescriptorInitializer_actor_2eproto() {
    protobuf_AddDesc_actor_2eproto();
  }
} static_descriptor_initializer_actor_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AiData::kFlagsFieldNumber;
const int AiData::kScriptFieldNumber;
const int AiData::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AiData::AiData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:AiData)
}

void AiData::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AiData::AiData(const AiData& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:AiData)
}

void AiData::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  flags_ = 0u;
  script_ = 0;
  type_ = 0;
}

AiData::~AiData() {
  // @@protoc_insertion_point(destructor:AiData)
  SharedDtor();
}

void AiData::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AiData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AiData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AiData_descriptor_;
}

const AiData& AiData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_actor_2eproto();
  return *default_instance_;
}

AiData* AiData::default_instance_ = NULL;

AiData* AiData::New(::google::protobuf::Arena* arena) const {
  AiData* n = new AiData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AiData::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<AiData*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(flags_, type_);

#undef ZR_HELPER_
#undef ZR_

}

bool AiData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:AiData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional fixed32 flags = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &flags_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_script;
        break;
      }

      // optional int32 script = 2;
      case 2: {
        if (tag == 16) {
         parse_script:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &script_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }

      // optional int32 type = 3;
      case 3: {
        if (tag == 24) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));

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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:AiData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:AiData)
  return false;
#undef DO_
}

void AiData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:AiData)
  // optional fixed32 flags = 1;
  if (this->flags() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(1, this->flags(), output);
  }

  // optional int32 script = 2;
  if (this->script() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->script(), output);
  }

  // optional int32 type = 3;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->type(), output);
  }

  // @@protoc_insertion_point(serialize_end:AiData)
}

::google::protobuf::uint8* AiData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:AiData)
  // optional fixed32 flags = 1;
  if (this->flags() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(1, this->flags(), target);
  }

  // optional int32 script = 2;
  if (this->script() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->script(), target);
  }

  // optional int32 type = 3;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->type(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:AiData)
  return target;
}

int AiData::ByteSize() const {
  int total_size = 0;

  // optional fixed32 flags = 1;
  if (this->flags() != 0) {
    total_size += 1 + 4;
  }

  // optional int32 script = 2;
  if (this->script() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->script());
  }

  // optional int32 type = 3;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AiData::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const AiData* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AiData>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AiData::MergeFrom(const AiData& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.flags() != 0) {
    set_flags(from.flags());
  }
  if (from.script() != 0) {
    set_script(from.script());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void AiData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AiData::CopyFrom(const AiData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AiData::IsInitialized() const {

  return true;
}

void AiData::Swap(AiData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AiData::InternalSwap(AiData* other) {
  std::swap(flags_, other->flags_);
  std::swap(script_, other->script_);
  std::swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AiData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AiData_descriptor_;
  metadata.reflection = AiData_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AiData

// optional fixed32 flags = 1;
void AiData::clear_flags() {
  flags_ = 0u;
}
 ::google::protobuf::uint32 AiData::flags() const {
  // @@protoc_insertion_point(field_get:AiData.flags)
  return flags_;
}
 void AiData::set_flags(::google::protobuf::uint32 value) {
  
  flags_ = value;
  // @@protoc_insertion_point(field_set:AiData.flags)
}

// optional int32 script = 2;
void AiData::clear_script() {
  script_ = 0;
}
 ::google::protobuf::int32 AiData::script() const {
  // @@protoc_insertion_point(field_get:AiData.script)
  return script_;
}
 void AiData::set_script(::google::protobuf::int32 value) {
  
  script_ = value;
  // @@protoc_insertion_point(field_set:AiData.script)
}

// optional int32 type = 3;
void AiData::clear_type() {
  type_ = 0;
}
 ::google::protobuf::int32 AiData::type() const {
  // @@protoc_insertion_point(field_get:AiData.type)
  return type_;
}
 void AiData::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:AiData.type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ActorData::kIdFieldNumber;
const int ActorData::kAiFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ActorData::ActorData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ActorData)
}

void ActorData::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  ai_ = const_cast< ::AiData*>(&::AiData::default_instance());
}

ActorData::ActorData(const ActorData& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ActorData)
}

void ActorData::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  id_ = 0;
  ai_ = NULL;
}

ActorData::~ActorData() {
  // @@protoc_insertion_point(destructor:ActorData)
  SharedDtor();
}

void ActorData::SharedDtor() {
  if (this != default_instance_) {
    delete ai_;
  }
}

void ActorData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ActorData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ActorData_descriptor_;
}

const ActorData& ActorData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_actor_2eproto();
  return *default_instance_;
}

ActorData* ActorData::default_instance_ = NULL;

ActorData* ActorData::New(::google::protobuf::Arena* arena) const {
  ActorData* n = new ActorData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ActorData::Clear() {
  id_ = 0;
  if (GetArenaNoVirtual() == NULL && ai_ != NULL) delete ai_;
  ai_ = NULL;
}

bool ActorData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ActorData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_ai;
        break;
      }

      // optional .AiData ai = 2;
      case 2: {
        if (tag == 18) {
         parse_ai:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ai()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ActorData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ActorData)
  return false;
#undef DO_
}

void ActorData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ActorData)
  // optional int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional .AiData ai = 2;
  if (this->has_ai()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->ai_, output);
  }

  // @@protoc_insertion_point(serialize_end:ActorData)
}

::google::protobuf::uint8* ActorData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ActorData)
  // optional int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional .AiData ai = 2;
  if (this->has_ai()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, *this->ai_, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:ActorData)
  return target;
}

int ActorData::ByteSize() const {
  int total_size = 0;

  // optional int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // optional .AiData ai = 2;
  if (this->has_ai()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ai_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ActorData::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ActorData* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ActorData>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ActorData::MergeFrom(const ActorData& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.has_ai()) {
    mutable_ai()->::AiData::MergeFrom(from.ai());
  }
}

void ActorData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ActorData::CopyFrom(const ActorData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ActorData::IsInitialized() const {

  return true;
}

void ActorData::Swap(ActorData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ActorData::InternalSwap(ActorData* other) {
  std::swap(id_, other->id_);
  std::swap(ai_, other->ai_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ActorData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ActorData_descriptor_;
  metadata.reflection = ActorData_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ActorData

// optional int32 id = 1;
void ActorData::clear_id() {
  id_ = 0;
}
 ::google::protobuf::int32 ActorData::id() const {
  // @@protoc_insertion_point(field_get:ActorData.id)
  return id_;
}
 void ActorData::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:ActorData.id)
}

// optional .AiData ai = 2;
bool ActorData::has_ai() const {
  return !_is_default_instance_ && ai_ != NULL;
}
void ActorData::clear_ai() {
  if (GetArenaNoVirtual() == NULL && ai_ != NULL) delete ai_;
  ai_ = NULL;
}
const ::AiData& ActorData::ai() const {
  // @@protoc_insertion_point(field_get:ActorData.ai)
  return ai_ != NULL ? *ai_ : *default_instance_->ai_;
}
::AiData* ActorData::mutable_ai() {
  
  if (ai_ == NULL) {
    ai_ = new ::AiData;
  }
  // @@protoc_insertion_point(field_mutable:ActorData.ai)
  return ai_;
}
::AiData* ActorData::release_ai() {
  
  ::AiData* temp = ai_;
  ai_ = NULL;
  return temp;
}
void ActorData::set_allocated_ai(::AiData* ai) {
  delete ai_;
  ai_ = ai;
  if (ai) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:ActorData.ai)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)