// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game.proto

#include "game.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace bwapi {
namespace game {
class FrameUpdateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<FrameUpdate>
      _instance;
} _FrameUpdate_default_instance_;
class EndOfQueueDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EndOfQueue>
      _instance;
} _EndOfQueue_default_instance_;
}  // namespace game
}  // namespace bwapi
namespace protobuf_game_2eproto {
static void InitDefaultsFrameUpdate() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::bwapi::game::_FrameUpdate_default_instance_;
    new (ptr) ::bwapi::game::FrameUpdate();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::bwapi::game::FrameUpdate::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_FrameUpdate =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsFrameUpdate}, {}};

static void InitDefaultsEndOfQueue() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::bwapi::game::_EndOfQueue_default_instance_;
    new (ptr) ::bwapi::game::EndOfQueue();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::bwapi::game::EndOfQueue::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_EndOfQueue =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEndOfQueue}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_FrameUpdate.base);
  ::google::protobuf::internal::InitSCC(&scc_info_EndOfQueue.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::bwapi::game::FrameUpdate, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::bwapi::game::FrameUpdate, framenumber_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::bwapi::game::EndOfQueue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::bwapi::game::FrameUpdate)},
  { 6, -1, sizeof(::bwapi::game::EndOfQueue)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::bwapi::game::_FrameUpdate_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::bwapi::game::_EndOfQueue_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "game.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\ngame.proto\022\nbwapi.game\"\"\n\013FrameUpdate\022"
      "\023\n\013frameNumber\030\001 \001(\r\"\014\n\nEndOfQueueb\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 82);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "game.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_game_2eproto
namespace bwapi {
namespace game {

// ===================================================================

void FrameUpdate::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FrameUpdate::kFrameNumberFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FrameUpdate::FrameUpdate()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_game_2eproto::scc_info_FrameUpdate.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:bwapi.game.FrameUpdate)
}
FrameUpdate::FrameUpdate(const FrameUpdate& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  framenumber_ = from.framenumber_;
  // @@protoc_insertion_point(copy_constructor:bwapi.game.FrameUpdate)
}

void FrameUpdate::SharedCtor() {
  framenumber_ = 0u;
}

FrameUpdate::~FrameUpdate() {
  // @@protoc_insertion_point(destructor:bwapi.game.FrameUpdate)
  SharedDtor();
}

void FrameUpdate::SharedDtor() {
}

void FrameUpdate::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* FrameUpdate::descriptor() {
  ::protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_game_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const FrameUpdate& FrameUpdate::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_game_2eproto::scc_info_FrameUpdate.base);
  return *internal_default_instance();
}


void FrameUpdate::Clear() {
// @@protoc_insertion_point(message_clear_start:bwapi.game.FrameUpdate)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  framenumber_ = 0u;
  _internal_metadata_.Clear();
}

bool FrameUpdate::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:bwapi.game.FrameUpdate)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 frameNumber = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &framenumber_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:bwapi.game.FrameUpdate)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:bwapi.game.FrameUpdate)
  return false;
#undef DO_
}

void FrameUpdate::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:bwapi.game.FrameUpdate)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 frameNumber = 1;
  if (this->framenumber() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->framenumber(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:bwapi.game.FrameUpdate)
}

::google::protobuf::uint8* FrameUpdate::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:bwapi.game.FrameUpdate)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 frameNumber = 1;
  if (this->framenumber() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->framenumber(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bwapi.game.FrameUpdate)
  return target;
}

size_t FrameUpdate::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:bwapi.game.FrameUpdate)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 frameNumber = 1;
  if (this->framenumber() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->framenumber());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FrameUpdate::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:bwapi.game.FrameUpdate)
  GOOGLE_DCHECK_NE(&from, this);
  const FrameUpdate* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const FrameUpdate>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:bwapi.game.FrameUpdate)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:bwapi.game.FrameUpdate)
    MergeFrom(*source);
  }
}

void FrameUpdate::MergeFrom(const FrameUpdate& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:bwapi.game.FrameUpdate)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.framenumber() != 0) {
    set_framenumber(from.framenumber());
  }
}

void FrameUpdate::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:bwapi.game.FrameUpdate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FrameUpdate::CopyFrom(const FrameUpdate& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:bwapi.game.FrameUpdate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FrameUpdate::IsInitialized() const {
  return true;
}

void FrameUpdate::Swap(FrameUpdate* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FrameUpdate::InternalSwap(FrameUpdate* other) {
  using std::swap;
  swap(framenumber_, other->framenumber_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata FrameUpdate::GetMetadata() const {
  protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_game_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void EndOfQueue::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EndOfQueue::EndOfQueue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_game_2eproto::scc_info_EndOfQueue.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:bwapi.game.EndOfQueue)
}
EndOfQueue::EndOfQueue(const EndOfQueue& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:bwapi.game.EndOfQueue)
}

void EndOfQueue::SharedCtor() {
}

EndOfQueue::~EndOfQueue() {
  // @@protoc_insertion_point(destructor:bwapi.game.EndOfQueue)
  SharedDtor();
}

void EndOfQueue::SharedDtor() {
}

void EndOfQueue::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EndOfQueue::descriptor() {
  ::protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_game_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EndOfQueue& EndOfQueue::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_game_2eproto::scc_info_EndOfQueue.base);
  return *internal_default_instance();
}


void EndOfQueue::Clear() {
// @@protoc_insertion_point(message_clear_start:bwapi.game.EndOfQueue)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool EndOfQueue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:bwapi.game.EndOfQueue)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:bwapi.game.EndOfQueue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:bwapi.game.EndOfQueue)
  return false;
#undef DO_
}

void EndOfQueue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:bwapi.game.EndOfQueue)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:bwapi.game.EndOfQueue)
}

::google::protobuf::uint8* EndOfQueue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:bwapi.game.EndOfQueue)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bwapi.game.EndOfQueue)
  return target;
}

size_t EndOfQueue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:bwapi.game.EndOfQueue)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EndOfQueue::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:bwapi.game.EndOfQueue)
  GOOGLE_DCHECK_NE(&from, this);
  const EndOfQueue* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EndOfQueue>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:bwapi.game.EndOfQueue)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:bwapi.game.EndOfQueue)
    MergeFrom(*source);
  }
}

void EndOfQueue::MergeFrom(const EndOfQueue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:bwapi.game.EndOfQueue)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void EndOfQueue::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:bwapi.game.EndOfQueue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EndOfQueue::CopyFrom(const EndOfQueue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:bwapi.game.EndOfQueue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EndOfQueue::IsInitialized() const {
  return true;
}

void EndOfQueue::Swap(EndOfQueue* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EndOfQueue::InternalSwap(EndOfQueue* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EndOfQueue::GetMetadata() const {
  protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_game_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace game
}  // namespace bwapi
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::bwapi::game::FrameUpdate* Arena::CreateMaybeMessage< ::bwapi::game::FrameUpdate >(Arena* arena) {
  return Arena::CreateInternal< ::bwapi::game::FrameUpdate >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::bwapi::game::EndOfQueue* Arena::CreateMaybeMessage< ::bwapi::game::EndOfQueue >(Arena* arena) {
  return Arena::CreateInternal< ::bwapi::game::EndOfQueue >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)