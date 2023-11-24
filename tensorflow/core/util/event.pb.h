// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/util/event.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2futil_2fevent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2futil_2fevent_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3016000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3016000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/graph.pb.h"
#include "tensorflow/core/framework/summary.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2futil_2fevent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcore_2futil_2fevent_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2futil_2fevent_2eproto;
namespace tensorflow {
class Event;
struct EventDefaultTypeInternal;
extern EventDefaultTypeInternal _Event_default_instance_;
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::Event* Arena::CreateMaybeMessage<::tensorflow::Event>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {

// ===================================================================

class Event PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.Event) */ {
 public:
  inline Event() : Event(nullptr) {}
  ~Event() override;
  explicit constexpr Event(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Event(const Event& from);
  Event(Event&& from) noexcept
    : Event() {
    *this = ::std::move(from);
  }

  inline Event& operator=(const Event& from) {
    CopyFrom(from);
    return *this;
  }
  inline Event& operator=(Event&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Event& default_instance() {
    return *internal_default_instance();
  }
  enum WhatCase {
    kFileVersion = 3,
    kGraphDef = 4,
    kSummary = 5,
    WHAT_NOT_SET = 0,
  };

  static inline const Event* internal_default_instance() {
    return reinterpret_cast<const Event*>(
               &_Event_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Event& a, Event& b) {
    a.Swap(&b);
  }
  inline void Swap(Event* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Event* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Event* New() const final {
    return CreateMaybeMessage<Event>(nullptr);
  }

  Event* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Event>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Event& from);
  void MergeFrom(const Event& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Event* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.Event";
  }
  protected:
  explicit Event(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWallTimeFieldNumber = 1,
    kStepFieldNumber = 2,
    kFileVersionFieldNumber = 3,
    kGraphDefFieldNumber = 4,
    kSummaryFieldNumber = 5,
  };
  // double wall_time = 1;
  void clear_wall_time();
  double wall_time() const;
  void set_wall_time(double value);
  private:
  double _internal_wall_time() const;
  void _internal_set_wall_time(double value);
  public:

  // int64 step = 2;
  void clear_step();
  ::PROTOBUF_NAMESPACE_ID::int64 step() const;
  void set_step(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_step() const;
  void _internal_set_step(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // string file_version = 3;
  bool has_file_version() const;
  private:
  bool _internal_has_file_version() const;
  public:
  void clear_file_version();
  const std::string& file_version() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_file_version(ArgT0&& arg0, ArgT... args);
  std::string* mutable_file_version();
  std::string* release_file_version();
  void set_allocated_file_version(std::string* file_version);
  private:
  const std::string& _internal_file_version() const;
  void _internal_set_file_version(const std::string& value);
  std::string* _internal_mutable_file_version();
  public:

  // .tensorflow.GraphDef graph_def = 4;
  bool has_graph_def() const;
  private:
  bool _internal_has_graph_def() const;
  public:
  void clear_graph_def();
  const ::tensorflow::GraphDef& graph_def() const;
  ::tensorflow::GraphDef* release_graph_def();
  ::tensorflow::GraphDef* mutable_graph_def();
  void set_allocated_graph_def(::tensorflow::GraphDef* graph_def);
  private:
  const ::tensorflow::GraphDef& _internal_graph_def() const;
  ::tensorflow::GraphDef* _internal_mutable_graph_def();
  public:
  void unsafe_arena_set_allocated_graph_def(
      ::tensorflow::GraphDef* graph_def);
  ::tensorflow::GraphDef* unsafe_arena_release_graph_def();

  // .tensorflow.Summary summary = 5;
  bool has_summary() const;
  private:
  bool _internal_has_summary() const;
  public:
  void clear_summary();
  const ::tensorflow::Summary& summary() const;
  ::tensorflow::Summary* release_summary();
  ::tensorflow::Summary* mutable_summary();
  void set_allocated_summary(::tensorflow::Summary* summary);
  private:
  const ::tensorflow::Summary& _internal_summary() const;
  ::tensorflow::Summary* _internal_mutable_summary();
  public:
  void unsafe_arena_set_allocated_summary(
      ::tensorflow::Summary* summary);
  ::tensorflow::Summary* unsafe_arena_release_summary();

  void clear_what();
  WhatCase what_case() const;
  // @@protoc_insertion_point(class_scope:tensorflow.Event)
 private:
  class _Internal;
  void set_has_file_version();
  void set_has_graph_def();
  void set_has_summary();

  inline bool has_what() const;
  inline void clear_has_what();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  double wall_time_;
  ::PROTOBUF_NAMESPACE_ID::int64 step_;
  union WhatUnion {
    constexpr WhatUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr file_version_;
    ::tensorflow::GraphDef* graph_def_;
    ::tensorflow::Summary* summary_;
  } what_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_tensorflow_2fcore_2futil_2fevent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Event

// double wall_time = 1;
inline void Event::clear_wall_time() {
  wall_time_ = 0;
}
inline double Event::_internal_wall_time() const {
  return wall_time_;
}
inline double Event::wall_time() const {
  // @@protoc_insertion_point(field_get:tensorflow.Event.wall_time)
  return _internal_wall_time();
}
inline void Event::_internal_set_wall_time(double value) {
  
  wall_time_ = value;
}
inline void Event::set_wall_time(double value) {
  _internal_set_wall_time(value);
  // @@protoc_insertion_point(field_set:tensorflow.Event.wall_time)
}

// int64 step = 2;
inline void Event::clear_step() {
  step_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Event::_internal_step() const {
  return step_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Event::step() const {
  // @@protoc_insertion_point(field_get:tensorflow.Event.step)
  return _internal_step();
}
inline void Event::_internal_set_step(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  step_ = value;
}
inline void Event::set_step(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_step(value);
  // @@protoc_insertion_point(field_set:tensorflow.Event.step)
}

// string file_version = 3;
inline bool Event::_internal_has_file_version() const {
  return what_case() == kFileVersion;
}
inline bool Event::has_file_version() const {
  return _internal_has_file_version();
}
inline void Event::set_has_file_version() {
  _oneof_case_[0] = kFileVersion;
}
inline void Event::clear_file_version() {
  if (_internal_has_file_version()) {
    what_.file_version_.Destroy(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
    clear_has_what();
  }
}
inline const std::string& Event::file_version() const {
  // @@protoc_insertion_point(field_get:tensorflow.Event.file_version)
  return _internal_file_version();
}
template <typename ArgT0, typename... ArgT>
inline void Event::set_file_version(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_file_version()) {
    clear_what();
    set_has_file_version();
    what_.file_version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  what_.file_version_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArena());
  // @@protoc_insertion_point(field_set:tensorflow.Event.file_version)
}
inline std::string* Event::mutable_file_version() {
  // @@protoc_insertion_point(field_mutable:tensorflow.Event.file_version)
  return _internal_mutable_file_version();
}
inline const std::string& Event::_internal_file_version() const {
  if (_internal_has_file_version()) {
    return what_.file_version_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void Event::_internal_set_file_version(const std::string& value) {
  if (!_internal_has_file_version()) {
    clear_what();
    set_has_file_version();
    what_.file_version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  what_.file_version_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline std::string* Event::_internal_mutable_file_version() {
  if (!_internal_has_file_version()) {
    clear_what();
    set_has_file_version();
    what_.file_version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  return what_.file_version_.Mutable(
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Event::release_file_version() {
  // @@protoc_insertion_point(field_release:tensorflow.Event.file_version)
  if (_internal_has_file_version()) {
    clear_has_what();
    return what_.file_version_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  } else {
    return nullptr;
  }
}
inline void Event::set_allocated_file_version(std::string* file_version) {
  if (has_what()) {
    clear_what();
  }
  if (file_version != nullptr) {
    set_has_file_version();
    what_.file_version_.UnsafeSetDefault(file_version);
    ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena();
    if (arena != nullptr) {
      arena->Own(file_version);
    }
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.Event.file_version)
}

// .tensorflow.GraphDef graph_def = 4;
inline bool Event::_internal_has_graph_def() const {
  return what_case() == kGraphDef;
}
inline bool Event::has_graph_def() const {
  return _internal_has_graph_def();
}
inline void Event::set_has_graph_def() {
  _oneof_case_[0] = kGraphDef;
}
inline ::tensorflow::GraphDef* Event::release_graph_def() {
  // @@protoc_insertion_point(field_release:tensorflow.Event.graph_def)
  if (_internal_has_graph_def()) {
    clear_has_what();
      ::tensorflow::GraphDef* temp = what_.graph_def_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    what_.graph_def_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::tensorflow::GraphDef& Event::_internal_graph_def() const {
  return _internal_has_graph_def()
      ? *what_.graph_def_
      : reinterpret_cast< ::tensorflow::GraphDef&>(::tensorflow::_GraphDef_default_instance_);
}
inline const ::tensorflow::GraphDef& Event::graph_def() const {
  // @@protoc_insertion_point(field_get:tensorflow.Event.graph_def)
  return _internal_graph_def();
}
inline ::tensorflow::GraphDef* Event::unsafe_arena_release_graph_def() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.Event.graph_def)
  if (_internal_has_graph_def()) {
    clear_has_what();
    ::tensorflow::GraphDef* temp = what_.graph_def_;
    what_.graph_def_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Event::unsafe_arena_set_allocated_graph_def(::tensorflow::GraphDef* graph_def) {
  clear_what();
  if (graph_def) {
    set_has_graph_def();
    what_.graph_def_ = graph_def;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.Event.graph_def)
}
inline ::tensorflow::GraphDef* Event::_internal_mutable_graph_def() {
  if (!_internal_has_graph_def()) {
    clear_what();
    set_has_graph_def();
    what_.graph_def_ = CreateMaybeMessage< ::tensorflow::GraphDef >(GetArena());
  }
  return what_.graph_def_;
}
inline ::tensorflow::GraphDef* Event::mutable_graph_def() {
  // @@protoc_insertion_point(field_mutable:tensorflow.Event.graph_def)
  return _internal_mutable_graph_def();
}

// .tensorflow.Summary summary = 5;
inline bool Event::_internal_has_summary() const {
  return what_case() == kSummary;
}
inline bool Event::has_summary() const {
  return _internal_has_summary();
}
inline void Event::set_has_summary() {
  _oneof_case_[0] = kSummary;
}
inline ::tensorflow::Summary* Event::release_summary() {
  // @@protoc_insertion_point(field_release:tensorflow.Event.summary)
  if (_internal_has_summary()) {
    clear_has_what();
      ::tensorflow::Summary* temp = what_.summary_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    what_.summary_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::tensorflow::Summary& Event::_internal_summary() const {
  return _internal_has_summary()
      ? *what_.summary_
      : reinterpret_cast< ::tensorflow::Summary&>(::tensorflow::_Summary_default_instance_);
}
inline const ::tensorflow::Summary& Event::summary() const {
  // @@protoc_insertion_point(field_get:tensorflow.Event.summary)
  return _internal_summary();
}
inline ::tensorflow::Summary* Event::unsafe_arena_release_summary() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.Event.summary)
  if (_internal_has_summary()) {
    clear_has_what();
    ::tensorflow::Summary* temp = what_.summary_;
    what_.summary_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Event::unsafe_arena_set_allocated_summary(::tensorflow::Summary* summary) {
  clear_what();
  if (summary) {
    set_has_summary();
    what_.summary_ = summary;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.Event.summary)
}
inline ::tensorflow::Summary* Event::_internal_mutable_summary() {
  if (!_internal_has_summary()) {
    clear_what();
    set_has_summary();
    what_.summary_ = CreateMaybeMessage< ::tensorflow::Summary >(GetArena());
  }
  return what_.summary_;
}
inline ::tensorflow::Summary* Event::mutable_summary() {
  // @@protoc_insertion_point(field_mutable:tensorflow.Event.summary)
  return _internal_mutable_summary();
}

inline bool Event::has_what() const {
  return what_case() != WHAT_NOT_SET;
}
inline void Event::clear_has_what() {
  _oneof_case_[0] = WHAT_NOT_SET;
}
inline Event::WhatCase Event::what_case() const {
  return Event::WhatCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2futil_2fevent_2eproto