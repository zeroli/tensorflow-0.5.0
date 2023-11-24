// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/kernel_def.proto

#include "tensorflow/core/framework/kernel_def.pb.h"

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
constexpr KernelDef_AttrConstraint::KernelDef_AttrConstraint(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , allowed_values_(nullptr){}
struct KernelDef_AttrConstraintDefaultTypeInternal {
  constexpr KernelDef_AttrConstraintDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~KernelDef_AttrConstraintDefaultTypeInternal() {}
  union {
    KernelDef_AttrConstraint _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT KernelDef_AttrConstraintDefaultTypeInternal _KernelDef_AttrConstraint_default_instance_;
constexpr KernelDef::KernelDef(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : constraint_()
  , host_memory_arg_()
  , op_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , device_type_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , label_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct KernelDefDefaultTypeInternal {
  constexpr KernelDefDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~KernelDefDefaultTypeInternal() {}
  union {
    KernelDef _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT KernelDefDefaultTypeInternal _KernelDef_default_instance_;
}  // namespace tensorflow
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::KernelDef_AttrConstraint, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::KernelDef_AttrConstraint, name_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::KernelDef_AttrConstraint, allowed_values_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::KernelDef, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::KernelDef, op_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::KernelDef, device_type_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::KernelDef, constraint_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::KernelDef, host_memory_arg_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::KernelDef, label_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::KernelDef_AttrConstraint)},
  { 7, -1, sizeof(::tensorflow::KernelDef)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::_KernelDef_AttrConstraint_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::_KernelDef_default_instance_),
};

const char descriptor_table_protodef_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n*tensorflow/core/framework/kernel_def.p"
  "roto\022\ntensorflow\032*tensorflow/core/framew"
  "ork/attr_value.proto\"\335\001\n\tKernelDef\022\n\n\002op"
  "\030\001 \001(\t\022\023\n\013device_type\030\002 \001(\t\0228\n\nconstrain"
  "t\030\003 \003(\0132$.tensorflow.KernelDef.AttrConst"
  "raint\022\027\n\017host_memory_arg\030\004 \003(\t\022\r\n\005label\030"
  "\005 \001(\t\032M\n\016AttrConstraint\022\014\n\004name\030\001 \001(\t\022-\n"
  "\016allowed_values\030\002 \001(\0132\025.tensorflow.AttrV"
  "alueb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto_deps[1] = {
  &::descriptor_table_tensorflow_2fcore_2fframework_2fattr_5fvalue_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto = {
  false, false, 332, descriptor_table_protodef_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto, "tensorflow/core/framework/kernel_def.proto", 
  &descriptor_table_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto_once, descriptor_table_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto::offsets,
  file_level_metadata_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto, file_level_enum_descriptors_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto, file_level_service_descriptors_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto_getter() {
  return &descriptor_table_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto(&descriptor_table_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto);
namespace tensorflow {

// ===================================================================

class KernelDef_AttrConstraint::_Internal {
 public:
  static const ::tensorflow::AttrValue& allowed_values(const KernelDef_AttrConstraint* msg);
};

const ::tensorflow::AttrValue&
KernelDef_AttrConstraint::_Internal::allowed_values(const KernelDef_AttrConstraint* msg) {
  return *msg->allowed_values_;
}
void KernelDef_AttrConstraint::clear_allowed_values() {
  if (GetArena() == nullptr && allowed_values_ != nullptr) {
    delete allowed_values_;
  }
  allowed_values_ = nullptr;
}
KernelDef_AttrConstraint::KernelDef_AttrConstraint(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.KernelDef.AttrConstraint)
}
KernelDef_AttrConstraint::KernelDef_AttrConstraint(const KernelDef_AttrConstraint& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArena());
  }
  if (from._internal_has_allowed_values()) {
    allowed_values_ = new ::tensorflow::AttrValue(*from.allowed_values_);
  } else {
    allowed_values_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.KernelDef.AttrConstraint)
}

void KernelDef_AttrConstraint::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
allowed_values_ = nullptr;
}

KernelDef_AttrConstraint::~KernelDef_AttrConstraint() {
  // @@protoc_insertion_point(destructor:tensorflow.KernelDef.AttrConstraint)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void KernelDef_AttrConstraint::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete allowed_values_;
}

void KernelDef_AttrConstraint::ArenaDtor(void* object) {
  KernelDef_AttrConstraint* _this = reinterpret_cast< KernelDef_AttrConstraint* >(object);
  (void)_this;
}
void KernelDef_AttrConstraint::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void KernelDef_AttrConstraint::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void KernelDef_AttrConstraint::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.KernelDef.AttrConstraint)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  if (GetArena() == nullptr && allowed_values_ != nullptr) {
    delete allowed_values_;
  }
  allowed_values_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* KernelDef_AttrConstraint::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.KernelDef.AttrConstraint.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .tensorflow.AttrValue allowed_values = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_allowed_values(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* KernelDef_AttrConstraint::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.KernelDef.AttrConstraint)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.KernelDef.AttrConstraint.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // .tensorflow.AttrValue allowed_values = 2;
  if (this->has_allowed_values()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::allowed_values(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.KernelDef.AttrConstraint)
  return target;
}

size_t KernelDef_AttrConstraint::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.KernelDef.AttrConstraint)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .tensorflow.AttrValue allowed_values = 2;
  if (this->has_allowed_values()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *allowed_values_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void KernelDef_AttrConstraint::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.KernelDef.AttrConstraint)
  GOOGLE_DCHECK_NE(&from, this);
  const KernelDef_AttrConstraint* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<KernelDef_AttrConstraint>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.KernelDef.AttrConstraint)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.KernelDef.AttrConstraint)
    MergeFrom(*source);
  }
}

void KernelDef_AttrConstraint::MergeFrom(const KernelDef_AttrConstraint& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.KernelDef.AttrConstraint)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {
    _internal_set_name(from._internal_name());
  }
  if (from.has_allowed_values()) {
    _internal_mutable_allowed_values()->::tensorflow::AttrValue::MergeFrom(from._internal_allowed_values());
  }
}

void KernelDef_AttrConstraint::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.KernelDef.AttrConstraint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KernelDef_AttrConstraint::CopyFrom(const KernelDef_AttrConstraint& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.KernelDef.AttrConstraint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KernelDef_AttrConstraint::IsInitialized() const {
  return true;
}

void KernelDef_AttrConstraint::InternalSwap(KernelDef_AttrConstraint* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(allowed_values_, other->allowed_values_);
}

::PROTOBUF_NAMESPACE_ID::Metadata KernelDef_AttrConstraint::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto[0]);
}

// ===================================================================

class KernelDef::_Internal {
 public:
};

KernelDef::KernelDef(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  constraint_(arena),
  host_memory_arg_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.KernelDef)
}
KernelDef::KernelDef(const KernelDef& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      constraint_(from.constraint_),
      host_memory_arg_(from.host_memory_arg_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  op_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_op().empty()) {
    op_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_op(), 
      GetArena());
  }
  device_type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_device_type().empty()) {
    device_type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_device_type(), 
      GetArena());
  }
  label_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_label().empty()) {
    label_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_label(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.KernelDef)
}

void KernelDef::SharedCtor() {
op_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
device_type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
label_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

KernelDef::~KernelDef() {
  // @@protoc_insertion_point(destructor:tensorflow.KernelDef)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void KernelDef::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  op_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  device_type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  label_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void KernelDef::ArenaDtor(void* object) {
  KernelDef* _this = reinterpret_cast< KernelDef* >(object);
  (void)_this;
}
void KernelDef::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void KernelDef::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void KernelDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.KernelDef)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  constraint_.Clear();
  host_memory_arg_.Clear();
  op_.ClearToEmpty();
  device_type_.ClearToEmpty();
  label_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* KernelDef::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string op = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_op();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.KernelDef.op"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string device_type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_device_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.KernelDef.device_type"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .tensorflow.KernelDef.AttrConstraint constraint = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_constraint(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string host_memory_arg = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_host_memory_arg();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.KernelDef.host_memory_arg"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // string label = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_label();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.KernelDef.label"));
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

::PROTOBUF_NAMESPACE_ID::uint8* KernelDef::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.KernelDef)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string op = 1;
  if (this->op().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_op().data(), static_cast<int>(this->_internal_op().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.KernelDef.op");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_op(), target);
  }

  // string device_type = 2;
  if (this->device_type().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_device_type().data(), static_cast<int>(this->_internal_device_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.KernelDef.device_type");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_device_type(), target);
  }

  // repeated .tensorflow.KernelDef.AttrConstraint constraint = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_constraint_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_constraint(i), target, stream);
  }

  // repeated string host_memory_arg = 4;
  for (int i = 0, n = this->_internal_host_memory_arg_size(); i < n; i++) {
    const auto& s = this->_internal_host_memory_arg(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.KernelDef.host_memory_arg");
    target = stream->WriteString(4, s, target);
  }

  // string label = 5;
  if (this->label().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_label().data(), static_cast<int>(this->_internal_label().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.KernelDef.label");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_label(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.KernelDef)
  return target;
}

size_t KernelDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.KernelDef)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .tensorflow.KernelDef.AttrConstraint constraint = 3;
  total_size += 1UL * this->_internal_constraint_size();
  for (const auto& msg : this->constraint_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated string host_memory_arg = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(host_memory_arg_.size());
  for (int i = 0, n = host_memory_arg_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      host_memory_arg_.Get(i));
  }

  // string op = 1;
  if (this->op().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_op());
  }

  // string device_type = 2;
  if (this->device_type().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_device_type());
  }

  // string label = 5;
  if (this->label().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_label());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void KernelDef::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.KernelDef)
  GOOGLE_DCHECK_NE(&from, this);
  const KernelDef* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<KernelDef>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.KernelDef)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.KernelDef)
    MergeFrom(*source);
  }
}

void KernelDef::MergeFrom(const KernelDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.KernelDef)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  constraint_.MergeFrom(from.constraint_);
  host_memory_arg_.MergeFrom(from.host_memory_arg_);
  if (from.op().size() > 0) {
    _internal_set_op(from._internal_op());
  }
  if (from.device_type().size() > 0) {
    _internal_set_device_type(from._internal_device_type());
  }
  if (from.label().size() > 0) {
    _internal_set_label(from._internal_label());
  }
}

void KernelDef::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.KernelDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KernelDef::CopyFrom(const KernelDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.KernelDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KernelDef::IsInitialized() const {
  return true;
}

void KernelDef::InternalSwap(KernelDef* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  constraint_.InternalSwap(&other->constraint_);
  host_memory_arg_.InternalSwap(&other->host_memory_arg_);
  op_.Swap(&other->op_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  device_type_.Swap(&other->device_type_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  label_.Swap(&other->label_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata KernelDef::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::KernelDef_AttrConstraint* Arena::CreateMaybeMessage< ::tensorflow::KernelDef_AttrConstraint >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::KernelDef_AttrConstraint >(arena);
}
template<> PROTOBUF_NOINLINE ::tensorflow::KernelDef* Arena::CreateMaybeMessage< ::tensorflow::KernelDef >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::KernelDef >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>