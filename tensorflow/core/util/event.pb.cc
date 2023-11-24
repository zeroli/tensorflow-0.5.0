// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/util/event.proto

#include "tensorflow/core/util/event.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace tensorflow {
constexpr Event::Event(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : wall_time_(0)
  , step_(PROTOBUF_LONGLONG(0))
  , _oneof_case_{}{}
struct EventDefaultTypeInternal {
  constexpr EventDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~EventDefaultTypeInternal() {}
  union {
    Event _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT EventDefaultTypeInternal _Event_default_instance_;
}  // namespace tensorflow
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_tensorflow_2fcore_2futil_2fevent_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_tensorflow_2fcore_2futil_2fevent_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2futil_2fevent_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_tensorflow_2fcore_2futil_2fevent_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::Event, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::tensorflow::Event, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::Event, wall_time_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::Event, step_),
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  PROTOBUF_FIELD_OFFSET(::tensorflow::Event, what_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::Event)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::_Event_default_instance_),
};

const char descriptor_table_protodef_tensorflow_2fcore_2futil_2fevent_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n tensorflow/core/util/event.proto\022\ntens"
  "orflow\032%tensorflow/core/framework/graph."
  "proto\032\'tensorflow/core/framework/summary"
  ".proto\"\233\001\n\005Event\022\021\n\twall_time\030\001 \001(\001\022\014\n\004s"
  "tep\030\002 \001(\003\022\026\n\014file_version\030\003 \001(\tH\000\022)\n\tgra"
  "ph_def\030\004 \001(\0132\024.tensorflow.GraphDefH\000\022&\n\007"
  "summary\030\005 \001(\0132\023.tensorflow.SummaryH\000B\006\n\004"
  "whatb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_tensorflow_2fcore_2futil_2fevent_2eproto_deps[2] = {
  &::descriptor_table_tensorflow_2fcore_2fframework_2fgraph_2eproto,
  &::descriptor_table_tensorflow_2fcore_2fframework_2fsummary_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_tensorflow_2fcore_2futil_2fevent_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2futil_2fevent_2eproto = {
  false, false, 292, descriptor_table_protodef_tensorflow_2fcore_2futil_2fevent_2eproto, "tensorflow/core/util/event.proto", 
  &descriptor_table_tensorflow_2fcore_2futil_2fevent_2eproto_once, descriptor_table_tensorflow_2fcore_2futil_2fevent_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_tensorflow_2fcore_2futil_2fevent_2eproto::offsets,
  file_level_metadata_tensorflow_2fcore_2futil_2fevent_2eproto, file_level_enum_descriptors_tensorflow_2fcore_2futil_2fevent_2eproto, file_level_service_descriptors_tensorflow_2fcore_2futil_2fevent_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_tensorflow_2fcore_2futil_2fevent_2eproto_getter() {
  return &descriptor_table_tensorflow_2fcore_2futil_2fevent_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_tensorflow_2fcore_2futil_2fevent_2eproto(&descriptor_table_tensorflow_2fcore_2futil_2fevent_2eproto);
namespace tensorflow {

// ===================================================================

class Event::_Internal {
 public:
  static const ::tensorflow::GraphDef& graph_def(const Event* msg);
  static const ::tensorflow::Summary& summary(const Event* msg);
};

const ::tensorflow::GraphDef&
Event::_Internal::graph_def(const Event* msg) {
  return *msg->what_.graph_def_;
}
const ::tensorflow::Summary&
Event::_Internal::summary(const Event* msg) {
  return *msg->what_.summary_;
}
void Event::set_allocated_graph_def(::tensorflow::GraphDef* graph_def) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  clear_what();
  if (graph_def) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(graph_def)->GetArena();
    if (message_arena != submessage_arena) {
      graph_def = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, graph_def, submessage_arena);
    }
    set_has_graph_def();
    what_.graph_def_ = graph_def;
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.Event.graph_def)
}
void Event::clear_graph_def() {
  if (_internal_has_graph_def()) {
    if (GetArena() == nullptr) {
      delete what_.graph_def_;
    }
    clear_has_what();
  }
}
void Event::set_allocated_summary(::tensorflow::Summary* summary) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  clear_what();
  if (summary) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(summary)->GetArena();
    if (message_arena != submessage_arena) {
      summary = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, summary, submessage_arena);
    }
    set_has_summary();
    what_.summary_ = summary;
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.Event.summary)
}
void Event::clear_summary() {
  if (_internal_has_summary()) {
    if (GetArena() == nullptr) {
      delete what_.summary_;
    }
    clear_has_what();
  }
}
Event::Event(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.Event)
}
Event::Event(const Event& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&wall_time_, &from.wall_time_,
    static_cast<size_t>(reinterpret_cast<char*>(&step_) -
    reinterpret_cast<char*>(&wall_time_)) + sizeof(step_));
  clear_has_what();
  switch (from.what_case()) {
    case kFileVersion: {
      _internal_set_file_version(from._internal_file_version());
      break;
    }
    case kGraphDef: {
      _internal_mutable_graph_def()->::tensorflow::GraphDef::MergeFrom(from._internal_graph_def());
      break;
    }
    case kSummary: {
      _internal_mutable_summary()->::tensorflow::Summary::MergeFrom(from._internal_summary());
      break;
    }
    case WHAT_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.Event)
}

void Event::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&wall_time_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&step_) -
    reinterpret_cast<char*>(&wall_time_)) + sizeof(step_));
clear_has_what();
}

Event::~Event() {
  // @@protoc_insertion_point(destructor:tensorflow.Event)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Event::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (has_what()) {
    clear_what();
  }
}

void Event::ArenaDtor(void* object) {
  Event* _this = reinterpret_cast< Event* >(object);
  (void)_this;
}
void Event::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Event::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Event::clear_what() {
// @@protoc_insertion_point(one_of_clear_start:tensorflow.Event)
  switch (what_case()) {
    case kFileVersion: {
      what_.file_version_.Destroy(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
      break;
    }
    case kGraphDef: {
      if (GetArena() == nullptr) {
        delete what_.graph_def_;
      }
      break;
    }
    case kSummary: {
      if (GetArena() == nullptr) {
        delete what_.summary_;
      }
      break;
    }
    case WHAT_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = WHAT_NOT_SET;
}


void Event::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.Event)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&wall_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&step_) -
      reinterpret_cast<char*>(&wall_time_)) + sizeof(step_));
  clear_what();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Event::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // double wall_time = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          wall_time_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // int64 step = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          step_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string file_version = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_file_version();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.Event.file_version"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .tensorflow.GraphDef graph_def = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_graph_def(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .tensorflow.Summary summary = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_summary(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Event::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.Event)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double wall_time = 1;
  if (!(this->wall_time() <= 0 && this->wall_time() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_wall_time(), target);
  }

  // int64 step = 2;
  if (this->step() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_step(), target);
  }

  // string file_version = 3;
  if (_internal_has_file_version()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_file_version().data(), static_cast<int>(this->_internal_file_version().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.Event.file_version");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_file_version(), target);
  }

  // .tensorflow.GraphDef graph_def = 4;
  if (_internal_has_graph_def()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::graph_def(this), target, stream);
  }

  // .tensorflow.Summary summary = 5;
  if (_internal_has_summary()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::summary(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.Event)
  return target;
}

size_t Event::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.Event)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // double wall_time = 1;
  if (!(this->wall_time() <= 0 && this->wall_time() >= 0)) {
    total_size += 1 + 8;
  }

  // int64 step = 2;
  if (this->step() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_step());
  }

  switch (what_case()) {
    // string file_version = 3;
    case kFileVersion: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_file_version());
      break;
    }
    // .tensorflow.GraphDef graph_def = 4;
    case kGraphDef: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *what_.graph_def_);
      break;
    }
    // .tensorflow.Summary summary = 5;
    case kSummary: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *what_.summary_);
      break;
    }
    case WHAT_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Event::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.Event)
  GOOGLE_DCHECK_NE(&from, this);
  const Event* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Event>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.Event)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.Event)
    MergeFrom(*source);
  }
}

void Event::MergeFrom(const Event& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.Event)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from.wall_time() <= 0 && from.wall_time() >= 0)) {
    _internal_set_wall_time(from._internal_wall_time());
  }
  if (from.step() != 0) {
    _internal_set_step(from._internal_step());
  }
  switch (from.what_case()) {
    case kFileVersion: {
      _internal_set_file_version(from._internal_file_version());
      break;
    }
    case kGraphDef: {
      _internal_mutable_graph_def()->::tensorflow::GraphDef::MergeFrom(from._internal_graph_def());
      break;
    }
    case kSummary: {
      _internal_mutable_summary()->::tensorflow::Summary::MergeFrom(from._internal_summary());
      break;
    }
    case WHAT_NOT_SET: {
      break;
    }
  }
}

void Event::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.Event)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Event::CopyFrom(const Event& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.Event)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Event::IsInitialized() const {
  return true;
}

void Event::InternalSwap(Event* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Event, step_)
      + sizeof(Event::step_)
      - PROTOBUF_FIELD_OFFSET(Event, wall_time_)>(
          reinterpret_cast<char*>(&wall_time_),
          reinterpret_cast<char*>(&other->wall_time_));
  swap(what_, other->what_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata Event::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2futil_2fevent_2eproto_getter, &descriptor_table_tensorflow_2fcore_2futil_2fevent_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2futil_2fevent_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::Event* Arena::CreateMaybeMessage< ::tensorflow::Event >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::Event >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>